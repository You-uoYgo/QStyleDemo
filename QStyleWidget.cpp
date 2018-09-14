#include "QStyleWidget.h"

#include <QCheckBox>
#include <QLabel>
QStyleWidget::QStyleWidget(QWidget *parent)
    : QWidget(parent)
{
      m_checkBox = new QCheckBox(this);
}

QStyleWidget::~QStyleWidget()
{

}
