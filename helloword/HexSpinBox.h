#ifndef HEXSPINBOX_H
#define HEXSPINBOX_H

#include <QSpinBox>

class QRegExpValidator;

class HexSpinBox: public QSpinBox
{
    Q_OBJECT // For meta-object feature

public:
    HexSpinBox(QWidget *parent = 0);

protected:
    QValidator::State validate(QString &text, int &pos) const;
    QString textFromValue(int value) const;
    int valueFromText(const QString &text) const;

private:
    QRegExpValidator *validator;
};

#endif // HEXSPINBOX_H
