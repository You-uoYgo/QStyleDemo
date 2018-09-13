#ifndef QSTYLEWIDGET_H
#define QSTYLEWIDGET_H

#include <QWidget>
class QCheckBox;
class  QComboBox;
class QStyleWidget : public QWidget
{
    Q_OBJECT

public:
    QStyleWidget(QWidget *parent = 0);
    ~QStyleWidget();
private:
    QCheckBox*   m_checkBox;
    QComboBox*   m_combox;
};

#endif // QSTYLEWIDGET_H
