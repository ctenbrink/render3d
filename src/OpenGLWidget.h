#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QGLWidget>

class OpenGLWidget : public QGLWidget
{
    Q_OBJECT

public:
    OpenGLWidget(QWidget* parent = NULL);

protected:
    virtual void initializeGL();
    virtual void paintGL();
    virtual void resizeGL(int width, int height);
};
#endif //OPENGLWIDGET_H
