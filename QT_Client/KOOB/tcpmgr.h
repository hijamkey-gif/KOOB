#ifndef TCPMGR_H
#define TCPMGR_H

#include <QTcpSocket>
#include "singleton.h"
#include "global.h"
#include <functional>
#include <QObject>


class TcpMgr:public QObject,                                //发送和接受槽信号
               public Singleton<TcpMgr>,
               public std::enable_shared_from_this<TcpMgr>  //延长生命周期
{
    Q_OBJECT
public:
    ~TcpMgr();
private:
    friend class Singleton<TcpMgr>;
    TcpMgr();
    void initHandlers();
    void handleMsg(ReqId id,int len,QByteArray data);
    QTcpSocket _socket;
    QString _host;
    uint16_t _port;
    QByteArray _buffer;
    bool _b_recv_pending;
    quint16 _message_id;
    quint16 _message_len;
    QMap<ReqId,std::function<void(ReqId,int,QByteArray)>> _handlers;
public slots:
    void slot_tcp_connect(ServerInfo);
    void slot_send_data(ReqId reqId, QString data);
signals:
    void sig_con_success(bool);
    void sig_send_data(ReqId, QString);
    void sig_switch_chatdlg();
    void sig_login_failed(int);
};

#endif // TCPMGR_H
