#include <QtGui>
#include "HexSpinBox.h"

HexSpinBox::HexSpinBox(QWidget *parent): QSpinBox(parent)
{
    setRange(0, 0xFFFF);
    validator = new QRegExpValidator(QRegExp("[0-9A-Fa-f]{1,8}"), this);
}

QValidator::State HexSpinBox::validate(QString &text, int &pos) const
{
    // Use validator to validate input string.
    return validator->validate(text, pos);
}

QString HexSpinBox::textFromValue(int value) const
{
    // Convert base 16 number to upper-case string.
    return QString::number(value, 16).toUpper();
}

int HexSpinBox::valueFromText(const QString &text) const
{
    // Convert base 16 string to integer.
    bool ok;
    return text.toInt(&ok, 16);
}
