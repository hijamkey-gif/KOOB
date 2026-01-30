#include "Cserver.h"
#include "HttpConnection.h"


CServer::CServer(boost::asio::io_context& ioc, unsigned short port)
	:_ioc(ioc),_acceptor(ioc,tcp::endpoint(tcp::v4(), port))
{
}

void CServer::Start()
{
    auto self = shared_from_this();
    // 阻止_socket的复用
    auto socket = std::make_shared<tcp::socket>(_ioc);
    _acceptor.async_accept(*socket, [self,socket](beast::error_code ec) {
        try {
            //出错则放弃这个连接，继续监听新链接
            if (ec) {
                self->Start();
                return;
            }
            //处理新链接，创建HpptConnection类管理新连接
            std::make_shared<HttpConnection>(std::move(*socket))->Start();
            //继续监听
            self->Start();
        }
        catch (std::exception& exp) {
            std::cout << "exception is " << exp.what() << std::endl;
            self->Start();
        }
        });
}

