#include <algorithm>
#include "OpenGLWidget.h"

OpenGLWidget::OpenGLWidget(QWidget* parent) :
    QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
{
}

void OpenGLWidget::initializeGL()
{
    QColor clear_color = QColor(0, 0, 80);
    
    qglClearColor(clear_color);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_MULTISAMPLE);
    
    static GLfloat lightPosition[4] = {0.5, 5.0, 7.0, 1.0};
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
}

void OpenGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);

    //draw stuff here
    //end drawing
}

void OpenGLWidget::resizeGL(int width, int height)
{
    int short_side = std::min(width, height);
    glViewport((width - short_side) / 2, (height - short_side) / 2, short_side, short_side);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-0.5, +0.5, -0.5, +0.5, 4.0, 15.0);
}
