#include "chatitembase.h"
#include <QFont>
#include <QVBoxLayout>
#include "BubbleFrame.h"
#include <QPainter>
#include <QPainterPath>

ChatItemBase::ChatItemBase(ChatRole role, QWidget *parent)
    : QWidget(parent)
    , m_role(role)
{
    m_pNameLabel    = new QLabel();
    m_pNameLabel->setObjectName("chat_user_name");
    QFont font("Microsoft YaHei");
    font.setPointSize(9);
    m_pNameLabel->setFont(font);
    m_pNameLabel->setFixedHeight(20);
    m_pIconLabel    = new QLabel();
    m_pIconLabel->setScaledContents(true);
    m_pIconLabel->setFixedSize(42, 42);
    m_pBubble       = new QWidget();
    QGridLayout *pGLayout = new QGridLayout();
    pGLayout->setVerticalSpacing(3);
    pGLayout->setHorizontalSpacing(3);
    // pGLayout->setMargin(3);
    pGLayout->setContentsMargins(3,3,3,3);
    QSpacerItem*pSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    if(m_role == ChatRole::Self)
    {
        m_pNameLabel->setContentsMargins(0,0,8,0);
        m_pNameLabel->setAlignment(Qt::AlignRight);
        pGLayout->addWidget(m_pNameLabel, 0,1, 1,1);
        pGLayout->addWidget(m_pIconLabel, 0, 2, 2,1, Qt::AlignTop);
        pGLayout->addItem(pSpacer, 1, 0, 1, 1);
        pGLayout->addWidget(m_pBubble, 1,1, 1,1);
        pGLayout->setColumnStretch(0, 2);
        pGLayout->setColumnStretch(1, 3);
    }else{
        m_pNameLabel->setContentsMargins(8,0,0,0);
        m_pNameLabel->setAlignment(Qt::AlignLeft);
        pGLayout->addWidget(m_pIconLabel, 0, 0, 2,1, Qt::AlignTop);
        pGLayout->addWidget(m_pNameLabel, 0,1, 1,1);
        pGLayout->addWidget(m_pBubble, 1,1, 1,1);
        pGLayout->addItem(pSpacer, 2, 2, 1, 1);
        pGLayout->setColumnStretch(1, 3);
        pGLayout->setColumnStretch(2, 2);
    }
    this->setLayout(pGLayout);
}

void ChatItemBase::setUserName(const QString &name)
{
    m_pNameLabel->setText(name);
}

void ChatItemBase::setUserIcon(const QString &icon)
{
    QPixmap src(icon);
    // 先按比例填充
    QPixmap scaled = src.scaled(42, 42,
                                Qt::KeepAspectRatioByExpanding,
                                Qt::SmoothTransformation);
    // 创建透明背景
    QPixmap result(42, 42);
    result.fill(Qt::transparent);
    QPainter painter(&result);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::SmoothPixmapTransform, true);
    // 创建圆角路径
    QPainterPath path;
    path.addRoundedRect(0, 0, 42, 42, 8, 8);
    painter.setClipPath(path);
    // 绘制
    painter.drawPixmap(0, 0, scaled);
    painter.end();
    m_pIconLabel->setPixmap(result);
}

void ChatItemBase::setWidget(QWidget *w)
{
    QGridLayout *pGLayout = (qobject_cast<QGridLayout *>)(this->layout());
    pGLayout->replaceWidget(m_pBubble, w);
    delete m_pBubble;
    m_pBubble = w;
}
