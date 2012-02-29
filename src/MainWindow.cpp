
#include <QtGui>
#include <memory>

#include "MainWindow.h"

MainWindow::MainWindow()
{
    std::auto_ptr<QHBoxLayout> main_layout(new QHBoxLayout);
    setLayout(main_layout.release());

    setWindowTitle(tr("render3d"));
}
