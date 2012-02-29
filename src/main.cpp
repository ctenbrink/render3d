#include <QApplication>

#include "MainWindow.h"

int main(int argv, char *args[])
{
    QApplication app(argv, args);
    MainWindow main_window;
    main_window.showMaximized();
    return app.exec();
}
