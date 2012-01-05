#ifndef SHAPE_H
#define SHAPE_H
#include <QtGui/QApplication>
//#include "../Viewer/include/mainwindow.h"
#include <qcolor.h>
#include <cstring>

class Shape
{
//    int a;
protected:
    bool isVisible;
    int type_id;

    /* 1 - Line
       2 - ...
    */

    int x, y, x1, y1, x2, y2;
    //double dbl;
    //string
    int r, r1, r2;
    QColor color;

public:
    Shape();
    //Shape(int initUID, int initX, int initY, QColor initColor=0);
    //~Shape();
    virtual void show(QPainter *p);
    virtual void hide();
    virtual void move(int newX, int newY);
    // Universal accessors
    virtual int getTypeID();
    virtual int getX();
    virtual int getY();
    virtual int getX1();
    virtual int getY1();
    virtual int getX2();
    virtual int getY2();
    virtual void setTypeID(int newID);
    virtual void setX(int newX);
    virtual void setY(int newY);
    virtual void setX1(int newX1);
    virtual void setY1(int newY1);
    virtual void setX2(int newX2);
    virtual void setY2(int newY2);
    virtual bool checkIsVisible();
//    virtual void setA

};

#endif // SHAPE_H
