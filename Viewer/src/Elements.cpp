#include "../Viewer/include/Elements.h"

Elem::Elem()
{
 lib=ConnectToSharedMemory();
 flag=0;
}

QColor Elem::StrToQCol(char* name)
{
 QColor col;
 if(!strcmp("BLACK",name))  col="BLACK";
 if(!strcmp("RED",name))    col="RED";
 if(!strcmp("GREEN",name))  col="GREEN";
 if(!strcmp("BLUE",name))   col="BLUE";
 if(!strcmp("YELLOW",name)) col="YELLOW";
 if(!strcmp("WHITE",name))  col="WHITE";
 return col;
}


Shape* Elem::AddLine(string cx1,
                     string cy1,
                     string cx2,
                     string cy2,
                     char* ccolor)
{
 Line *l=new Line;
 lib->Load();
 l->setX1(l->gfb(cx1));
 l->setY1(l->gfb(cy1));
 l->setX2(l->gfb(cx2));
 l->setY2(l->gfb(cy2));
 l->setcolor(StrToQCol(ccolor));
 elem.push_back((Shape*)l);
 return elem[elem.size()-1];
}

int Elem::getNumEl()
{
    return flag;
}

int Elem::Load()
{
 ifstream in("elements.xml");
 char buf[64],stype[64],sx1[16],sy1[16],sx2[16],sy2[16], scolor[64];
 char type[64],cx1[16],cy1[16],cx2[16],cy2[16], ccolor[64];
 int lenst,lensx1,lensy1,lensx2,lensy2,lensc;
 elem.clear();
 while(1)
 {
  in>>buf;
  memset(type,0,sizeof(type));

  if(in.eof()) break;
  if(!strcmp(buf,"<element"))
  {
   in>>stype;
   lenst=strlen(stype);
   for(int i=6;i<lenst-1;i++) type[i-6]=stype[i];
   switch(atoi(type))
   {
    //Line
    case 1:
     memset(cx1,0,sizeof(cx1));
     memset(cy1,0,sizeof(cy1));
     memset(cx2,0,sizeof(cx2));
     memset(cy2,0,sizeof(cy2));
     memset(ccolor,0,sizeof(ccolor));
     in>>sx1;
     lensx1=strlen(sx1);
     in>>sy1;
     lensy1=strlen(sy1);
     in>>sx2;
     lensx2=strlen(sx2);
     in>>sy2;
     lensy2=strlen(sy2);
     in>>scolor;
     lensc=strlen(scolor);
     //for(int i=6;i<lenst-1;i++) type[i-6]=stype[i];
     for(int i=4;i<lensx1-1;i++) cx1[i-4]=sx1[i];
     for(int i=4;i<lensy1-1;i++) cy1[i-4]=sy1[i];
     for(int i=4;i<lensx2-1;i++) cx2[i-4]=sx2[i];
     for(int i=4;i<lensy2-1;i++) cy2[i-4]=sy2[i];
     for(int i=7;i<lensc-2;i++) ccolor[i-7]=scolor[i];
     AddLine(cx1, cy1, cx2, cy2, ccolor);
     flag++;
   }
  }
 }
 return 1;
}

