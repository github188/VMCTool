#ifndef ABOUNTUSDIALOG_H
#define ABOUNTUSDIALOG_H
#include "basedialog.h"
#include "pushbutton.h"
#include "label.h"
#include <QDesktopServices>


#define SHADOW_WIDTH1  6
class QLabel;
class AbountUsDialog : public BaseDialog
{
    Q_OBJECT
public:
    AbountUsDialog(QWidget *parent = 0);


    void translateLanguage();
protected:
    void paintEvent(QPaintEvent *event);

private:


    QLabel *titleLabel;//����
    QLabel *titleIconLabel;//����ͼ��

    QLabel *versionLabel;//�汾

    QLabel *iconLabel;//logo

    QLabel *mantitleLabel;
    QLabel *companyLabel;
    QLabel *companySubLabel;
    Label *companyUrlLabel;

    PushButton *closeButton;
    QPushButton *okButton;
private slots:
    void linkActivatedSlot();
    void linkOpenSlot(QString link);
};

#endif // ABOUNTUSDIALOG_H
