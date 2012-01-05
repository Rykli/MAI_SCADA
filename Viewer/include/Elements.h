#ifndef ELEMENTS_H
#define ELEMENTS_H
#include "../VarBase/include/basecode.h"
#include "../Viewer/include/shape.h"
#include "../Viewer/include/Line.h"
#include <cstring>

class Elem
{
 public:
 Library *lib;
  vector <Shape*> elem;
  int flag;

  Elem();
  int Load();
  Shape* AddLine(string cx1, string cy1, string cx2, string cy2, char* ccolor);
  QColor StrToQCol(char* name);
  int getNumEl();
};

#endif // ELEMENTS_H
