#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qpainter.h>
#include <qgraphicsscene.h>
#include <QMainWindow>
#include "../VarBase/include/basecode.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
  Library *lib;
  explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent *);

private:

/*private slots:
    void on_pushButton_clicked();*/
};

#endif // MAINWINDOW_H
