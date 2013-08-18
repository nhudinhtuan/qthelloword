#ifndef FINDDIALOG_H
#define FINDDIALOG_H
#include <QDialog>

class QCheckBox;    // Declare forward reference,
class QLabel;       // no need to include .h files here.
class QLineEdit;
class QPushButton;

class FindDialog: public QDialog
{
    Q_OBJECT // needed to define signals and slots.

public:
    FindDialog(QWidget *parent = 0);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;
    QPushButton *moreButton;
    QCheckBox *fromBeginCheckBox;
    QCheckBox *wholeWordsCheckBox;
    QCheckBox *searchSelectionCheckBox;
    QWidget *extension;
};

#endif // FINDDIALOG_HPP
