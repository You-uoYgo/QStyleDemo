#include "QStyleWidget.h"

#include <QCheckBox>
#include <QComboBox>

#include <QLabel>
QStyleWidget::QStyleWidget(QWidget *parent)
    : QWidget(parent)
{
      m_checkBox = new QCheckBox(this);
    m_combox = new QComboBox(this);
    m_combox->addItem("≤‚ ‘");
}

QStyleWidget::~QStyleWidget()
{

}
