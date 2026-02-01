#include "VerifyGrpcClient.h"
#include "ConfigMgr.h"
VerifyGrpcClient::VerifyGrpcClient() {
	std::string host = (*ConfigMgr::GetInstance())["VarifyServer"]["Host"];
	std::string port = (*ConfigMgr::GetInstance())["VarifyServer"]["Port"];
	pool_.reset(new RPConPool(5, host, port));
}
