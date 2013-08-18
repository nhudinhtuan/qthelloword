#ifndef ICONEDITOR_H
#define ICONEDITOR_H

#include <QColor>
#include <QImage>
#include <QWidget>
class IconEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QColor penColor READ penColor WRITE setPenColor)
    Q_PROPERTY(QImage iconImage READ iconImage WRITE setIconImage)
    Q_PROPERTY(int zoomFactor READ zoomFactor WRITE setZoomFactor)

public:
    IconEditor(QWidget *parent = 0);
    void setPenColor(const QColor &newColor);
    QColor penColor() const { return curColor; } // inline
    void setZoomFactor(int newZoom);
    int zoomFactor() const { return zoom; } // inline
    void setIconImage(const QImage &newImage);
    QImage iconImage() const { return image; } // inline
    QSize sizeHint() const;

protected:
    // Reimplemented virtual functions for event handling.
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    // Supporting functions.
    void setImagePixel(const QPoint &pos, bool opaque);
    QRect pixelRect(int i, int j) const;

    // Variables for properties.
    QColor curColor;
    QImage image;
    int zoom;
};

#endif // ICONEDITOR_H
