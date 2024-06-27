#include<stdio.h>
#include<graphics.h>
#include <sstream>

void main()
{
    int gd = DETECT,gm;

    initgraph(&gd,&gm,"E:\Classes Basic\Day 9");

   circle(150,200,50);
   closegraph();

}