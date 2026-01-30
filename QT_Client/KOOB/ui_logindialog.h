/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_label;
    QLineEdit *user_lineEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pass_label;
    QLineEdit *pass_lineEdit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *forget_label;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *login_btn;
    QPushButton *register_btn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(805, 505);
        LoginDialog->setMaximumSize(QSize(10000, 10000));
        horizontalLayout = new QHBoxLayout(LoginDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 5, 5);
        widget = new QWidget(LoginDialog);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(500, 500));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/LoginBG.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(LoginDialog);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(300, 0));
        widget_2->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 8);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(0, 50));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 5, 0);
        user_label = new QLabel(widget_3);
        user_label->setObjectName("user_label");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(user_label->sizePolicy().hasHeightForWidth());
        user_label->setSizePolicy(sizePolicy1);
        user_label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(user_label);

        user_lineEdit = new QLineEdit(widget_3);
        user_lineEdit->setObjectName("user_lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(user_lineEdit->sizePolicy().hasHeightForWidth());
        user_lineEdit->setSizePolicy(sizePolicy2);
        user_lineEdit->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_2->addWidget(user_lineEdit);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 5, 0);
        pass_label = new QLabel(widget_4);
        pass_label->setObjectName("pass_label");
        sizePolicy1.setHeightForWidth(pass_label->sizePolicy().hasHeightForWidth());
        pass_label->setSizePolicy(sizePolicy1);
        pass_label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(pass_label);

        pass_lineEdit = new QLineEdit(widget_4);
        pass_lineEdit->setObjectName("pass_lineEdit");
        pass_lineEdit->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_3->addWidget(pass_lineEdit);


        verticalLayout->addWidget(widget_4);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(0, 10));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        forget_label = new QLabel(widget_6);
        forget_label->setObjectName("forget_label");

        horizontalLayout_5->addWidget(forget_label);


        verticalLayout->addWidget(widget_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(0, 50));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 0, 5, 0);
        login_btn = new QPushButton(widget_5);
        login_btn->setObjectName("login_btn");
        login_btn->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(login_btn);

        register_btn = new QPushButton(widget_5);
        register_btn->setObjectName("register_btn");
        register_btn->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(register_btn);


        verticalLayout->addWidget(widget_5);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QString());
        user_label->setText(QCoreApplication::translate("LoginDialog", " \350\264\246\346\210\267\357\274\232", nullptr));
        pass_label->setText(QCoreApplication::translate("LoginDialog", " \345\257\206\347\240\201\357\274\232", nullptr));
        forget_label->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        register_btn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
