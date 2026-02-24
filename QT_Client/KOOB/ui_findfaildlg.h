/********************************************************************************
** Form generated from reading UI file 'findfaildlg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFAILDLG_H
#define UI_FINDFAILDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>

QT_BEGIN_NAMESPACE

class Ui_FindFailDlg
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *fail_tip;
    QLabel *fail_tip2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    ClickedBtn *fail_sure_btn;

    void setupUi(QWidget *FindFailDlg)
    {
        if (FindFailDlg->objectName().isEmpty())
            FindFailDlg->setObjectName("FindFailDlg");
        FindFailDlg->resize(250, 150);
        FindFailDlg->setMinimumSize(QSize(250, 150));
        FindFailDlg->setMaximumSize(QSize(250, 150));
        verticalLayout = new QVBoxLayout(FindFailDlg);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        fail_tip = new QLabel(FindFailDlg);
        fail_tip->setObjectName("fail_tip");

        verticalLayout->addWidget(fail_tip);

        fail_tip2 = new QLabel(FindFailDlg);
        fail_tip2->setObjectName("fail_tip2");

        verticalLayout->addWidget(fail_tip2);

        widget = new QWidget(FindFailDlg);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        fail_sure_btn = new ClickedBtn(widget);
        fail_sure_btn->setObjectName("fail_sure_btn");
        fail_sure_btn->setMinimumSize(QSize(100, 0));
        fail_sure_btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(fail_sure_btn);


        verticalLayout->addWidget(widget);


        retranslateUi(FindFailDlg);

        QMetaObject::connectSlotsByName(FindFailDlg);
    } // setupUi

    void retranslateUi(QWidget *FindFailDlg)
    {
        FindFailDlg->setWindowTitle(QCoreApplication::translate("FindFailDlg", "Form", nullptr));
        fail_tip->setText(QCoreApplication::translate("FindFailDlg", "\346\234\252\346\211\276\345\210\260\350\257\245\347\224\250\346\210\267", nullptr));
        fail_tip2->setText(QCoreApplication::translate("FindFailDlg", "\350\257\267\346\243\200\346\237\245\350\276\223\345\205\245", nullptr));
        fail_sure_btn->setText(QCoreApplication::translate("FindFailDlg", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindFailDlg: public Ui_FindFailDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFAILDLG_H
