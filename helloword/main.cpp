#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include "mainwindow.h"
#include <FindDialog.h>
#include "HexSpinBox.h"
#include "IconEditor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    IconEditor *iconEditor = new IconEditor;
    iconEditor->show();

    /*
    // Create main window.
    QWidget *window = new QWidget;
    window->setWindowTitle("Enter your age");

    // Create spin box.
    QSpinBox *spinBox = new QSpinBox;
    spinBox->setRange(0, 130);

    // Create slider.
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 130);

    // Connect spin box to slider.
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));

    // Connect slider to spin box.
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

    spinBox->setValue(35); // Initialise value.

    // Create layout to put widgets in place.
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);

    // Put layout in main window.
    window->setLayout(layout);
    window->show();
    */

    /*
    FindDialog *dialog = new FindDialog;
    dialog->show();
    */

    /*
    HexSpinBox* spinBox = new HexSpinBox;
    spinBox->show();
    */

    return a.exec();
}
