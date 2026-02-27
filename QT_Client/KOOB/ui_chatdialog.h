/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <applyfriendpage.h>
#include <chatpage.h>
#include <chatuserlist.h>
#include <contactuserlist.h>
#include <customizeedit.h>
#include <friendinfopage.h>
#include <searchlist.h>
#include <statewidget.h>
#include "clickedbtn.h"

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *side_bar;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *side_head_lb;
    StateWidget *side_chat_lb;
    StateWidget *side_contact_lb;
    QSpacerItem *verticalSpacer;
    QWidget *chat_user_wid;
    QVBoxLayout *verticalLayout_2;
    QWidget *search_wid;
    QHBoxLayout *horizontalLayout_2;
    CustomizeEdit *search_edit;
    ClickedBtn *add_btn;
    ChatUserList *chat_user_list;
    SearchList *search_list;
    ContactUserList *con_user_list;
    QStackedWidget *stackedWidget;
    ChatPage *chat_page;
    ApplyFriendPage *friend_apply_page;
    FriendInfoPage *friend_info_page;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName("ChatDialog");
        ChatDialog->resize(700, 725);
        horizontalLayout = new QHBoxLayout(ChatDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        side_bar = new QWidget(ChatDialog);
        side_bar->setObjectName("side_bar");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(side_bar->sizePolicy().hasHeightForWidth());
        side_bar->setSizePolicy(sizePolicy);
        side_bar->setMinimumSize(QSize(40, 0));
        side_bar->setMaximumSize(QSize(40, 16777215));
        verticalLayout = new QVBoxLayout(side_bar);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(side_bar);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(40, 0));
        widget->setMaximumSize(QSize(40, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(5, 30, 5, 30);
        side_head_lb = new QLabel(widget);
        side_head_lb->setObjectName("side_head_lb");
        side_head_lb->setMinimumSize(QSize(30, 30));
        side_head_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(side_head_lb);

        side_chat_lb = new StateWidget(widget);
        side_chat_lb->setObjectName("side_chat_lb");
        side_chat_lb->setMinimumSize(QSize(30, 30));
        side_chat_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(side_chat_lb);

        side_contact_lb = new StateWidget(widget);
        side_contact_lb->setObjectName("side_contact_lb");
        side_contact_lb->setMinimumSize(QSize(30, 30));
        side_contact_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_3->addWidget(side_contact_lb);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(side_bar);

        chat_user_wid = new QWidget(ChatDialog);
        chat_user_wid->setObjectName("chat_user_wid");
        chat_user_wid->setMinimumSize(QSize(200, 0));
        chat_user_wid->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(chat_user_wid);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        search_wid = new QWidget(chat_user_wid);
        search_wid->setObjectName("search_wid");
        search_wid->setMinimumSize(QSize(0, 30));
        horizontalLayout_2 = new QHBoxLayout(search_wid);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        search_edit = new CustomizeEdit(search_wid);
        search_edit->setObjectName("search_edit");
        search_edit->setMinimumSize(QSize(0, 30));
        search_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(search_edit);

        add_btn = new ClickedBtn(search_wid);
        add_btn->setObjectName("add_btn");
        add_btn->setMinimumSize(QSize(30, 30));
        add_btn->setMaximumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout_2->addWidget(search_wid);

        chat_user_list = new ChatUserList(chat_user_wid);
        chat_user_list->setObjectName("chat_user_list");

        verticalLayout_2->addWidget(chat_user_list);

        search_list = new SearchList(chat_user_wid);
        search_list->setObjectName("search_list");

        verticalLayout_2->addWidget(search_list);

        con_user_list = new ContactUserList(chat_user_wid);
        con_user_list->setObjectName("con_user_list");

        verticalLayout_2->addWidget(con_user_list);


        horizontalLayout->addWidget(chat_user_wid);

        stackedWidget = new QStackedWidget(ChatDialog);
        stackedWidget->setObjectName("stackedWidget");
        chat_page = new ChatPage();
        chat_page->setObjectName("chat_page");
        stackedWidget->addWidget(chat_page);
        friend_apply_page = new ApplyFriendPage();
        friend_apply_page->setObjectName("friend_apply_page");
        stackedWidget->addWidget(friend_apply_page);
        friend_info_page = new FriendInfoPage();
        friend_info_page->setObjectName("friend_info_page");
        stackedWidget->addWidget(friend_info_page);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ChatDialog);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QCoreApplication::translate("ChatDialog", "Dialog", nullptr));
        side_head_lb->setText(QString());
        add_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
