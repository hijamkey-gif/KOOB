#include "usermgr.h"

UserMgr::~UserMgr()
{

}

void UserMgr::SetName(QString name)
{
    _name = name;
}

void UserMgr::SetUid(int uid)
{
    _uid = uid;
}

void UserMgr::SetToken(QString token)
{
    _token = token;
}

int UserMgr::GetUid()
{
    return _uid;
}

UserMgr::UserMgr()
{

}

QString UserMgr::GetName()
{
    return _name;
}

std::vector<std::shared_ptr<ApplyInfo>> UserMgr::GetApplyList()
{
    return _apply_list;
}

bool UserMgr::AlreadyApply(int uid)
{
    for(auto& apply:_apply_list){
        if(apply->_uid == uid){
            return true;
        }
    }
    return false;
}

void UserMgr::AddApplyList(std::shared_ptr<ApplyInfo> app)
{
    _apply_list.push_back(app);
}
