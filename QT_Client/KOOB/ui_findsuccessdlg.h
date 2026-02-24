/********************************************************************************
** Form generated from reading UI file 'findsuccessdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSUCCESSDLG_H
#define UI_FINDSUCCESSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>

QT_BEGIN_NAMESPACE

class Ui_FindSuccessDlg
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *head_lb;
    QLabel *name_lb;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    ClickedBtn *add_friend_btn;

    void setupUi(QDialog *FindSuccessDlg)
    {
        if (FindSuccessDlg->objectName().isEmpty())
            FindSuccessDlg->setObjectName("FindSuccessDlg");
        FindSuccessDlg->resize(280, 150);
        FindSuccessDlg->setMinimumSize(QSize(280, 101));
        FindSuccessDlg->setMaximumSize(QSize(280, 150));
        verticalLayout = new QVBoxLayout(FindSuccessDlg);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        widget = new QWidget(FindSuccessDlg);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        head_lb = new QLabel(widget);
        head_lb->setObjectName("head_lb");
        head_lb->setMinimumSize(QSize(50, 50));
        head_lb->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(head_lb);

        name_lb = new QLabel(widget);
        name_lb->setObjectName("name_lb");
        name_lb->setMinimumSize(QSize(50, 50));
        name_lb->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(name_lb);

        horizontalSpacer = new QSpacerItem(137, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(FindSuccessDlg);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 5);
        add_friend_btn = new ClickedBtn(widget_2);
        add_friend_btn->setObjectName("add_friend_btn");
        add_friend_btn->setMinimumSize(QSize(90, 30));
        add_friend_btn->setMaximumSize(QSize(120, 30));

        horizontalLayout_2->addWidget(add_friend_btn);


        verticalLayout->addWidget(widget_2);


        retranslateUi(FindSuccessDlg);

        QMetaObject::connectSlotsByName(FindSuccessDlg);
    } // setupUi

    void retranslateUi(QDialog *FindSuccessDlg)
    {
        FindSuccessDlg->setWindowTitle(QCoreApplication::translate("FindSuccessDlg", "Dialog", nullptr));
        head_lb->setText(QString());
        name_lb->setText(QString());
        add_friend_btn->setText(QCoreApplication::translate("FindSuccessDlg", "\346\267\273\345\212\240\345\210\260\351\200\232\350\256\257\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindSuccessDlg: public Ui_FindSuccessDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSUCCESSDLG_H
