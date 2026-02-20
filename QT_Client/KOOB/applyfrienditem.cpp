#include "applyfrienditem.h"
#include "ui_applyfrienditem.h"

ApplyFriendItem::ApplyFriendItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ApplyFriendItem)
{
    ui->setupUi(this);
}

ApplyFriendItem::~ApplyFriendItem()
{
    delete ui;
}
