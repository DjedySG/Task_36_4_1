#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QObject>
#include <QWidget>
#include <QPaintEvent>
#include <QPushButton>
#include <QPixmap>
#include <QPainter>

class PushButton : public QPushButton
{
    Q_OBJECT
public:
    PushButton() = default;

    PushButton(QWidget *parent);

    void paintEvent(QPaintEvent *e) override;

    QSize minimumSizeHint() const override;

    void setRed();

    void setYellow();

    void setGreen();


    QPixmap mPushButtonRed;
    QPixmap mPushButtonGreen;
    QPixmap mPushButtonYellow;
    QPixmap mPushButtonColorCurrent;
};

#endif // PUSHBUTTON_H
