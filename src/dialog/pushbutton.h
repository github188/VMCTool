#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H
#include <QPushButton>
#include <QPainter>
#include <QMouseEvent>

#include <QPoint>

//ö�ٰ�ť�ļ���״̬
enum ButtonStatus{NORMAL, ENTER, PRESS,FORBIDDEN,NOSTATUS};


class PushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit PushButton(QWidget *parent = 0);
    ~PushButton();
    void setPicName(QString picName);
    void setPicName(QString picName,QSize size);

protected:

    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *);
    void enabledChange(bool flag);


private:


    ButtonStatus status;
    QString picName;
    bool mousePress; //��ť����Ƿ���


};

#endif // PUSHBUTTON_H
