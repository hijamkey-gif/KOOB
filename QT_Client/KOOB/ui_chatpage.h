/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <chatview.h>
#include <clickedlabel.h>
#include <messagetextedit.h>

QT_BEGIN_NAMESPACE

class Ui_ChatPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *chat_data_wid;
    QVBoxLayout *verticalLayout_4;
    QWidget *title_wid;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title_lb;
    ChatView *chat_data_list;
    QWidget *tool_wid;
    QHBoxLayout *horizontalLayout_4;
    ClickedLabel *emo_lb;
    ClickedLabel *file_lb;
    QSpacerItem *horizontalSpacer;
    MessageTextEdit *chatEdit;
    QWidget *button_lb;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *receive_btn;
    QPushButton *send_btn;

    void setupUi(QWidget *ChatPage)
    {
        if (ChatPage->objectName().isEmpty())
            ChatPage->setObjectName("ChatPage");
        ChatPage->resize(644, 686);
        verticalLayout = new QVBoxLayout(ChatPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        chat_data_wid = new QWidget(ChatPage);
        chat_data_wid->setObjectName("chat_data_wid");
        chat_data_wid->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(chat_data_wid);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        title_wid = new QWidget(chat_data_wid);
        title_wid->setObjectName("title_wid");
        title_wid->setMinimumSize(QSize(0, 30));
        title_wid->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_3 = new QHBoxLayout(title_wid);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 0, 0, 0);
        title_lb = new QLabel(title_wid);
        title_lb->setObjectName("title_lb");
        title_lb->setMaximumSize(QSize(16777215, 1000));
        title_lb->setCursor(QCursor(Qt::UpArrowCursor));

        horizontalLayout_3->addWidget(title_lb);


        verticalLayout_4->addWidget(title_wid);

        chat_data_list = new ChatView(chat_data_wid);
        chat_data_list->setObjectName("chat_data_list");
        chat_data_list->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(chat_data_list);

        tool_wid = new QWidget(chat_data_wid);
        tool_wid->setObjectName("tool_wid");
        tool_wid->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_4 = new QHBoxLayout(tool_wid);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(10, 0, 0, 0);
        emo_lb = new ClickedLabel(tool_wid);
        emo_lb->setObjectName("emo_lb");
        emo_lb->setMinimumSize(QSize(25, 25));
        emo_lb->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(emo_lb);

        file_lb = new ClickedLabel(tool_wid);
        file_lb->setObjectName("file_lb");
        file_lb->setMinimumSize(QSize(25, 25));
        file_lb->setMaximumSize(QSize(25, 25));

        horizontalLayout_4->addWidget(file_lb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(tool_wid);

        chatEdit = new MessageTextEdit(chat_data_wid);
        chatEdit->setObjectName("chatEdit");
        chatEdit->setMaximumSize(QSize(16777215, 200));

        verticalLayout_4->addWidget(chatEdit);

        button_lb = new QWidget(chat_data_wid);
        button_lb->setObjectName("button_lb");
        button_lb->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_5 = new QHBoxLayout(button_lb);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 5, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        receive_btn = new QPushButton(button_lb);
        receive_btn->setObjectName("receive_btn");
        receive_btn->setMinimumSize(QSize(90, 30));
        receive_btn->setMaximumSize(QSize(90, 60));

        horizontalLayout_5->addWidget(receive_btn);

        send_btn = new QPushButton(button_lb);
        send_btn->setObjectName("send_btn");
        send_btn->setMinimumSize(QSize(90, 30));
        send_btn->setMaximumSize(QSize(90, 30));

        horizontalLayout_5->addWidget(send_btn);


        verticalLayout_4->addWidget(button_lb);


        verticalLayout->addWidget(chat_data_wid);


        retranslateUi(ChatPage);

        QMetaObject::connectSlotsByName(ChatPage);
    } // setupUi

    void retranslateUi(QWidget *ChatPage)
    {
        ChatPage->setWindowTitle(QCoreApplication::translate("ChatPage", "Form", nullptr));
        title_lb->setText(QCoreApplication::translate("ChatPage", "\347\224\250\346\210\267\345\220\215\357\274\210\346\265\213\350\257\225\357\274\211", nullptr));
        emo_lb->setText(QString());
        file_lb->setText(QString());
        receive_btn->setText(QCoreApplication::translate("ChatPage", "\346\216\245\346\224\266", nullptr));
        send_btn->setText(QCoreApplication::translate("ChatPage", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatPage: public Ui_ChatPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
