#ifndef QSTYLEWIDGET_H
#define QSTYLEWIDGET_H

#include <QWidget>
class QCheckBox;
class QStyleWidget : public QWidget
{
    Q_OBJECT

public:
    QStyleWidget(QWidget *parent = 0);
    ~QStyleWidget();
private:
    QCheckBox*   m_checkBox;
};

#endif // QSTYLEWIDGET_H
