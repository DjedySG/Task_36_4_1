#include "pushbutton.h"


PushButton::PushButton::PushButton(QWidget *parent)
{
    setParent(parent);
    setToolTip ("NE REBOTAET!!!");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mPushButtonRed = QPixmap("../red.png");
    mPushButtonGreen = QPixmap("../green.png");
    mPushButtonYellow = QPixmap("../yellow.png");
    mPushButtonColorCurrent = mPushButtonGreen;
    setGeometry(mPushButtonColorCurrent.rect());
}

void PushButton::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), mPushButtonColorCurrent);
}

QSize PushButton::minimumSizeHint() const
{
    return QSize(2500, 2500);
}

void PushButton::setRed()
{
    mPushButtonColorCurrent = mPushButtonRed;
    update();
}

void PushButton::setGreen()
{
    mPushButtonColorCurrent = mPushButtonGreen;
    update();
}

void PushButton::setYellow()
{
    mPushButtonColorCurrent = mPushButtonYellow;
    update();
}
