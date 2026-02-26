/********************************************************************************
** Form generated from reading UI file 'authenfriend.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENFRIEND_H
#define UI_AUTHENFRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickedbtn.h>
#include <clickedoncelabel.h>
#include <customizeedit.h>

QT_BEGIN_NAMESPACE

class Ui_AuthenFriend
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollcontent;
    QVBoxLayout *verticalLayout_2;
    QLabel *apply_lb;
    QWidget *apply_wid;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QLabel *label_2;
    CustomizeEdit *name_ed;
    QLabel *label_3;
    CustomizeEdit *back_ed;
    QLabel *label_4;
    QWidget *lb_group_wid;
    QVBoxLayout *verticalLayout_4;
    QWidget *gridWidget;
    QHBoxLayout *horizontalLayout_2;
    CustomizeEdit *lb_ed;
    QWidget *input_tip_wid;
    QVBoxLayout *verticalLayout_5;
    ClickedOnceLabel *tip_lb;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *lb_list;
    QWidget *more_lb_wid;
    QVBoxLayout *verticalLayout_6;
    ClickedOnceLabel *more_lb;
    QWidget *apply_sure_wid;
    QHBoxLayout *horizontalLayout;
    ClickedBtn *sure_btn;
    ClickedBtn *cancel_btn;

    void setupUi(QDialog *AuthenFriend)
    {
        if (AuthenFriend->objectName().isEmpty())
            AuthenFriend->setObjectName("AuthenFriend");
        AuthenFriend->resize(360, 592);
        AuthenFriend->setMinimumSize(QSize(360, 400));
        AuthenFriend->setMaximumSize(QSize(360, 1000));
        verticalLayout = new QVBoxLayout(AuthenFriend);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        scrollArea = new QScrollArea(AuthenFriend);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(0, 500));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollcontent = new QWidget();
        scrollcontent->setObjectName("scrollcontent");
        scrollcontent->setGeometry(QRect(0, 0, 348, 555));
        verticalLayout_2 = new QVBoxLayout(scrollcontent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        apply_lb = new QLabel(scrollcontent);
        apply_lb->setObjectName("apply_lb");
        apply_lb->setMinimumSize(QSize(0, 25));
        apply_lb->setMaximumSize(QSize(16777215, 25));
        apply_lb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(apply_lb);

        apply_wid = new QWidget(scrollcontent);
        apply_wid->setObjectName("apply_wid");
        apply_wid->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(apply_wid);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(apply_wid);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_2 = new QLabel(apply_wid);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label_2);

        name_ed = new CustomizeEdit(apply_wid);
        name_ed->setObjectName("name_ed");
        name_ed->setMinimumSize(QSize(0, 30));
        name_ed->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(name_ed);

        label_3 = new QLabel(apply_wid);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label_3);

        back_ed = new CustomizeEdit(apply_wid);
        back_ed->setObjectName("back_ed");
        back_ed->setMinimumSize(QSize(0, 30));
        back_ed->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(back_ed);

        label_4 = new QLabel(apply_wid);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 25));
        label_4->setMaximumSize(QSize(16777215, 25));

        verticalLayout_3->addWidget(label_4);

        lb_group_wid = new QWidget(apply_wid);
        lb_group_wid->setObjectName("lb_group_wid");
        lb_group_wid->setMinimumSize(QSize(0, 0));
        lb_group_wid->setMaximumSize(QSize(16777215, 200));
        verticalLayout_4 = new QVBoxLayout(lb_group_wid);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridWidget = new QWidget(lb_group_wid);
        gridWidget->setObjectName("gridWidget");
        gridWidget->setMinimumSize(QSize(0, 35));
        gridWidget->setMaximumSize(QSize(16777215, 35));
        horizontalLayout_2 = new QHBoxLayout(gridWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_ed = new CustomizeEdit(gridWidget);
        lb_ed->setObjectName("lb_ed");
        lb_ed->setMinimumSize(QSize(0, 30));
        lb_ed->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(lb_ed);


        verticalLayout_4->addWidget(gridWidget);

        input_tip_wid = new QWidget(lb_group_wid);
        input_tip_wid->setObjectName("input_tip_wid");
        input_tip_wid->setMinimumSize(QSize(0, 20));
        input_tip_wid->setMaximumSize(QSize(16777215, 20));
        verticalLayout_5 = new QVBoxLayout(input_tip_wid);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tip_lb = new ClickedOnceLabel(input_tip_wid);
        tip_lb->setObjectName("tip_lb");
        tip_lb->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(tip_lb);


        verticalLayout_4->addWidget(input_tip_wid);


        verticalLayout_3->addWidget(lb_group_wid, 0, Qt::AlignTop);


        verticalLayout_2->addWidget(apply_wid);

        widget_2 = new QWidget(scrollcontent);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 60));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_list = new QWidget(widget_2);
        lb_list->setObjectName("lb_list");
        lb_list->setMinimumSize(QSize(287, 300));

        horizontalLayout_3->addWidget(lb_list);

        more_lb_wid = new QWidget(widget_2);
        more_lb_wid->setObjectName("more_lb_wid");
        more_lb_wid->setMinimumSize(QSize(0, 30));
        more_lb_wid->setMaximumSize(QSize(30, 16777215));
        verticalLayout_6 = new QVBoxLayout(more_lb_wid);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        more_lb = new ClickedOnceLabel(more_lb_wid);
        more_lb->setObjectName("more_lb");
        more_lb->setMinimumSize(QSize(25, 25));
        more_lb->setMaximumSize(QSize(25, 25));

        verticalLayout_6->addWidget(more_lb);


        horizontalLayout_3->addWidget(more_lb_wid);


        verticalLayout_2->addWidget(widget_2);

        scrollArea->setWidget(scrollcontent);

        verticalLayout->addWidget(scrollArea);

        apply_sure_wid = new QWidget(AuthenFriend);
        apply_sure_wid->setObjectName("apply_sure_wid");
        apply_sure_wid->setMinimumSize(QSize(0, 35));
        apply_sure_wid->setMaximumSize(QSize(16777215, 35));
        horizontalLayout = new QHBoxLayout(apply_sure_wid);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 5);
        sure_btn = new ClickedBtn(apply_sure_wid);
        sure_btn->setObjectName("sure_btn");
        sure_btn->setMinimumSize(QSize(100, 30));
        sure_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(sure_btn);

        cancel_btn = new ClickedBtn(apply_sure_wid);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(100, 30));
        cancel_btn->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(cancel_btn);


        verticalLayout->addWidget(apply_sure_wid);


        retranslateUi(AuthenFriend);

        QMetaObject::connectSlotsByName(AuthenFriend);
    } // setupUi

    void retranslateUi(QDialog *AuthenFriend)
    {
        AuthenFriend->setWindowTitle(QCoreApplication::translate("AuthenFriend", "Dialog", nullptr));
        apply_lb->setText(QCoreApplication::translate("AuthenFriend", "\347\224\263\350\257\267\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        label_2->setText(QCoreApplication::translate("AuthenFriend", "\346\235\245\350\207\252\345\257\271\346\226\271\347\232\204\345\245\275\345\217\213\347\224\263\350\257\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AuthenFriend", "\345\244\207\346\263\250\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AuthenFriend", "\346\240\207\347\255\276\357\274\232", nullptr));
        tip_lb->setText(QString());
        more_lb->setText(QString());
        sure_btn->setText(QCoreApplication::translate("AuthenFriend", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("AuthenFriend", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthenFriend: public Ui_AuthenFriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENFRIEND_H
