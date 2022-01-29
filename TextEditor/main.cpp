#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //
    QFile styleSheetFile(":/new/themes/LightTheme.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    app.setStyleSheet(styleSheet);
    //
    app.setOrganizationName("ncyxie");
    app.setApplicationName("Notepad DOT Qt");
    app.setApplicationVersion("1.1.0-s1");
    MainWindow w;
    w.show();

    return app.exec();
}
