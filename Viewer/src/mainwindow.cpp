#include "../include/mainwindow.h"
//#include "ui_mainwindow.h"
#include "../include/circle.h"
#include "../include/square.h"
#include "../include/numberbox.h"
#include "../include/Line.h"
#include "../include/String.h"
#include "../include/IntDigit.h"
#include "../include/DoubleDigit.h"
#include "../include/Ellipse.h"
#include "../include/Elements.h"
#include <ctime>

#define rnd(a, b) (a)+random()%((b)-(a))

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
 NumberBox *nb=new NumberBox(this);
 nb->show();
 nb->move(230,150);
 resize(400,200);
}

MainWindow::~MainWindow()
{
}

void MainWindow::paintEvent(QPaintEvent *)
{
 QPainter p1(this);
 Elem vect;
 vect.Load();
 for(int i=0; i<vect.getNumEl(); i++)
  vect.elem[i]->show(&p1);
}

/*void MainWindow::on_pushButton_clicked()
{
 QPainter p1(this);
 p1.drawEllipse(40, 40, 10, 5);
 QGraphicsScene *gs1 = new QGraphicsScene();
}
*/
