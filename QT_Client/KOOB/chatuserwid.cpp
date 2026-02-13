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

void ChatUserWid::SetInfo(QString name, QString head, QString msg)
{
    _name = name;
    _head = head;
    _msg = msg;
    int w = 60;
    int h = 60;
    int radius = 10;  // 圆角大小（自己调，比如 6~15）
    QPixmap src(_head);
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
    ui->user_name_lb->setText(_name);
    ui->user_chat_lb->setText(_msg);
}
