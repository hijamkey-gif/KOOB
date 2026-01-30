/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *err_tip;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user_label;
    QLineEdit *user_edit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *email_label;
    QLineEdit *email_lineEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *pass_label;
    QLineEdit *pass_edit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *varify_label;
    QLineEdit *varify_edit;
    QPushButton *get_code;
    QSpacerItem *verticalSpacer;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *confirm_btn;
    QPushButton *cancel_btn;
    QWidget *page_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(823, 505);
        RegisterDialog->setMaximumSize(QSize(10000, 10000));
        horizontalLayout = new QHBoxLayout(RegisterDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 5, 5);
        widget = new QWidget(RegisterDialog);
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

        stackedWidget = new QStackedWidget(RegisterDialog);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(page);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(300, 0));
        widget_2->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 80, 0, 8);
        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(0, 20));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        err_tip = new QLabel(widget_8);
        err_tip->setObjectName("err_tip");
        err_tip->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(err_tip);


        verticalLayout->addWidget(widget_8);

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

        user_edit = new QLineEdit(widget_3);
        user_edit->setObjectName("user_edit");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(user_edit->sizePolicy().hasHeightForWidth());
        user_edit->setSizePolicy(sizePolicy2);
        user_edit->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_2->addWidget(user_edit);


        verticalLayout->addWidget(widget_3);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName("widget_7");
        widget_7->setMinimumSize(QSize(0, 50));
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 5, 0);
        email_label = new QLabel(widget_7);
        email_label->setObjectName("email_label");

        horizontalLayout_6->addWidget(email_label);

        email_lineEdit = new QLineEdit(widget_7);
        email_lineEdit->setObjectName("email_lineEdit");
        email_lineEdit->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_6->addWidget(email_lineEdit);


        verticalLayout->addWidget(widget_7);

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

        pass_edit = new QLineEdit(widget_4);
        pass_edit->setObjectName("pass_edit");
        pass_edit->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_3->addWidget(pass_edit);


        verticalLayout->addWidget(widget_4);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(0, 50));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        varify_label = new QLabel(widget_6);
        varify_label->setObjectName("varify_label");
        varify_label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(varify_label);

        varify_edit = new QLineEdit(widget_6);
        varify_edit->setObjectName("varify_edit");
        varify_edit->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_5->addWidget(varify_edit);

        get_code = new QPushButton(widget_6);
        get_code->setObjectName("get_code");

        horizontalLayout_5->addWidget(get_code);


        verticalLayout->addWidget(widget_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(0, 50));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 0, 5, 0);
        confirm_btn = new QPushButton(widget_5);
        confirm_btn->setObjectName("confirm_btn");
        confirm_btn->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(confirm_btn);

        cancel_btn = new QPushButton(widget_5);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(cancel_btn);


        verticalLayout->addWidget(widget_5);


        verticalLayout_3->addWidget(widget_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(RegisterDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        label->setText(QString());
        err_tip->setText(QCoreApplication::translate("RegisterDialog", "\351\224\231\350\257\257\346\217\220\347\244\272\357\274\232", nullptr));
        user_label->setText(QCoreApplication::translate("RegisterDialog", " \350\264\246\346\210\267\357\274\232", nullptr));
        email_label->setText(QCoreApplication::translate("RegisterDialog", " \351\202\256\347\256\261\357\274\232", nullptr));
        pass_label->setText(QCoreApplication::translate("RegisterDialog", " \345\257\206\347\240\201\357\274\232", nullptr));
        varify_label->setText(QCoreApplication::translate("RegisterDialog", " \351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        get_code->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        confirm_btn->setText(QCoreApplication::translate("RegisterDialog", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("RegisterDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
