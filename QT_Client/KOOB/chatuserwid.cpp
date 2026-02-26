#include "chatuserwid.h"
#include "ui_chatuserwid.h"
#include <QPainter>
#include <QPainterPath>

ChatUserWid::ChatUserWid(QWidget *parent)
    : ListItemBase(parent)
    , ui(new Ui::ChatUserWid)
{
    ui->setupUi(this);
    SetItemType(ListItemType::CHAT_USER_ITEM);
}

ChatUserWid::~ChatUserWid()
{
    delete ui;
}

QSize ChatUserWid::sizeHint() const
{
    return QSize(250, 70); // 返回自定义的尺寸
}

void ChatUserWid::SetInfo(std::shared_ptr<UserInfo> user_info)
{
    _user_info = user_info;
    // 加载图片
    QPixmap pixmap(_user_info->_icon);
    int w = 60;
    int h = 60;
    int radius = 10;  // 圆角大小（自己调，比如 6~15）
    QPixmap src(_user_info->_icon);
    // 先按比例填充
    QPixmap scaled = src.scaled(w, h,
                                Qt::KeepAspectRatioByExpanding,
                                Qt::SmoothTransformation);
    // 创建透明背景
    QPixmap result(w, h);
    result.fill(Qt::transparent);
    QPainter painter(&result);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true);
    // 创建圆角路径
    QPainterPath path;
    path.addRoundedRect(0, 0, w, h, radius, radius);
    painter.setClipPath(path);
    // 绘制
    painter.drawPixmap(0, 0, scaled);
    painter.end();
    ui->icon_lb->setPixmap(result);
    ui->icon_lb->setScaledContents(false);
    ui->user_name_lb->setText(_user_info->_name);
    ui->user_chat_lb->setText(_user_info->_last_msg);
}

void ChatUserWid::SetInfo(std::shared_ptr<FriendInfo> friend_info)
{
    _user_info = std::make_shared<UserInfo>(friend_info);
    // 加载图片
    QPixmap pixmap(_user_info->_icon);
    int w = 60;
    int h = 60;
    int radius = 10;  // 圆角大小（自己调，比如 6~15）
    QPixmap src(_user_info->_icon);
    // 先按比例填充
    QPixmap scaled = src.scaled(w, h,
                                Qt::KeepAspectRatioByExpanding,
                                Qt::SmoothTransformation);
    // 创建透明背景
    QPixmap result(w, h);
    result.fill(Qt::transparent);
    QPainter painter(&result);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true);
    // 创建圆角路径
    QPainterPath path;
    path.addRoundedRect(0, 0, w, h, radius, radius);
    painter.setClipPath(path);
    // 绘制
    painter.drawPixmap(0, 0, scaled);
    painter.end();
    ui->icon_lb->setPixmap(result);
    ui->icon_lb->setScaledContents(false);
    ui->user_name_lb->setText(_user_info->_name);
    ui->user_chat_lb->setText(_user_info->_last_msg);
}

void ChatUserWid::ShowRedPoint(bool bshow)
{
    // if(bshow){
    //     ui->red_point->show();
    // }else{
    //     ui->red_point->hide();
    // }
}

std::shared_ptr<UserInfo> ChatUserWid::GetUserInfo()
{
    return _user_info;
}

void ChatUserWid::updateLastMsg(std::vector<std::shared_ptr<TextChatData>> msgs) {

    // QString last_msg = "";
    // for (auto& msg : msgs) {
    //     last_msg = msg->_msg_content;
    //     _user_info->_chat_msgs.push_back(msg);
    // }

    // _user_info->_last_msg = last_msg;
    // ui->user_chat_lb->setText(_user_info->_last_msg);
}
