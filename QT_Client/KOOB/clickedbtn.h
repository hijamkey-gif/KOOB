#ifndef CLICKEDBTN_H
#define CLICKEDBTN_H
#include <QPushButton>

class ClickedBtn:public QPushButton
{
    Q_OBJECT
public:
    ClickedBtn(QWidget * parent = nullptr);
    ~ClickedBtn();
    void SetState(QString normal,QString hover,QString press);
private:
    QString _normal;
    QString _hover;
    QString _press;
protected:
    virtual void enterEvent(QEnterEvent* event) override;
    virtual void leaveEvent(QEvent* event) override;
    virtual void mousePressEvent(QMouseEvent *ev) override;
    virtual void mouseReleaseEvent(QMouseEvent *ev) override;
signals:

};

#endif // CLICKEDBTN_H
