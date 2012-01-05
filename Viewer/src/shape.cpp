#include "../include/shape.h"

Shape::Shape()
{
}

/*Shape::Shape(int initUID, int initX, int initY, QColor initColor)
{
    uid = initUID;
    x = initX;
    y = initY;
    color = initColor;
}*/

void Shape::move(int newX, int newY)
{
    x = newX;
    y = newY;
}

void Shape::hide()
{
    isVisible = false;
}

void Shape::show(QPainter *p)
{

    isVisible = true;
}

int Shape::getX()
{
    return x;
}

int Shape::getY()
{
    return y;
}

int Shape::getX1()
{
    return x1;
}

int Shape::getY1()
{
    return y1;
}

int Shape::getX2()
{
    return x2;
}

int Shape::getY2()
{
    return y2;
}

int Shape::getTypeID()
{
    return type_id;
}

void Shape::setTypeID(int newID)
{
 type_id = newID;
}

void Shape::setX(int newX)
{
 x=newX;
}

void Shape::setX1(int newX1)
{
 x1=newX1;
}

void Shape::setX2(int newX2)
{
 x2=newX2;
}

void Shape::setY(int newY)
{
 y=newY;
}

void Shape::setY1(int newY1)
{
 y1=newY1;
}

void Shape::setY2(int newY2)
{
 y2=newY2;
}

bool Shape::checkIsVisible()
{
    return isVisible;
}
