#include "conuseritem.h"
#include "ui_conuseritem.h"
#include <QPainter>
#include <QPainterPath>

ConUserItem::ConUserItem(QWidget *parent) :
    ListItemBase(parent),
    ui(new Ui::ConUserItem)
{
    ui->setupUi(this);
    SetItemType(ListItemType::CONTACT_USER_ITEM);
    ui->red_point->raise();
    ShowRedPoint(false);
}

ConUserItem::~ConUserItem()
{
    delete ui;
}

QSize ConUserItem::sizeHint() const
{
    return QSize(250, 60); // 返回自定义的尺寸
}

void ConUserItem::SetInfo(std::shared_ptr<AuthInfo> auth_info)
{
    _info = std::make_shared<UserInfo>(auth_info);
    // 加载图片
    QPixmap pixmap(_info->_icon);
    int w = 50;
    int h = 50;
    int radius = 8;  // 圆角大小（自己调，比如 6~15）
    // 先按比例填充
    QPixmap scaled = pixmap.scaled(w, h,
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
    ui->user_name_lb->setText(_info->_name);
}

void ConUserItem::SetInfo(int uid, QString name, QString icon)
{
    _info = std::make_shared<UserInfo>(uid,name, name, icon, 0);

    // 加载图片
    QPixmap pixmap(_info->_icon);
    int w = 50;
    int h = 50;
    int radius = 8;  // 圆角大小（自己调，比如 6~15）
    // 先按比例填充
    QPixmap scaled = pixmap.scaled(w, h,
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
    ui->user_name_lb->setText(_info->_name);
}

void ConUserItem::SetInfo(std::shared_ptr<AuthRsp> auth_rsp){
    _info = std::make_shared<UserInfo>(auth_rsp);

    // 加载图片
    QPixmap pixmap(_info->_icon);
    int w = 50;
    int h = 50;
    int radius = 8;  // 圆角大小（自己调，比如 6~15）
    // 先按比例填充
    QPixmap scaled = pixmap.scaled(w, h,
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
    ui->user_name_lb->setText(_info->_name);
}

void ConUserItem::ShowRedPoint(bool show)
{
    if(show){
        ui->red_point->show();
    }else{
        ui->red_point->hide();
    }

}

std::shared_ptr<UserInfo> ConUserItem::GetInfo()
{
    return _info;
}
