#include "QStyleWidget.h"

#include <QCheckBox>

QStyleWidget::QStyleWidget(QWidget *parent)
    : QWidget(parent)
{
    m_checkBox = new QCheckBox(this);
}

QStyleWidget::~QStyleWidget()
{

}
