#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>
#include "global.h"
#include "userdata.h"
#include <QListWidgetItem>

class StateWidget;

namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChatDialog(QWidget *parent = nullptr);
    ~ChatDialog();
    void addChatUserList();
    void ClearLabelState(StateWidget* lb);
protected:
    bool eventFilter(QObject* watched,QEvent* event) override;
    void handleGlobalMousePress(QMouseEvent* event);

private:
    void ShowSearch(bool bsearch = false);
    void AddLBGroup(StateWidget* lb);
    Ui::ChatDialog *ui;
    ChatUIMode _mode;
    ChatUIMode _state;
    bool _b_loading;
    QList<StateWidget*> _lb_list;
    QWidget* _last_widget;

    QMap<int,QListWidgetItem*> _chat_items_added;
private slots:
    void slot_loading_chat_user();
    void slot_side_chat();
    void slot_side_contact();
    void slot_text_changed(const QString & str);
public slots:
    void slot_apply_friend(std::shared_ptr<AddFriendApply> apply);
    void slot_add_auth_friend(std::shared_ptr<AuthInfo> auth_info);
    void slot_auth_rsp(std::shared_ptr<AuthRsp> auth_rsp);
};

#endif // CHATDIALOG_H
