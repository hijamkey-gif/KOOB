#ifndef LISTITEMBASE_H
#define LISTITEMBASE_H

#include <Qwidget>
#include "global.h"

class ListItemBase:public QWidget
{
    Q_OBJECT
public:
    // 有时间单参数构造函数会被当成转换构造函数
    explicit ListItemBase(QWidget* parent = nullptr);
    void SetItemType(ListItemType itemType);
    ListItemType GetItemType();
private:
    ListItemType _itemType;
public slots:
signals:
};

#endif // LISTITEMBASE_H
