#include<stdio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT,gm;

    initgraph(&gd,&gm,"E:\Classes Basic\Day 9");

   Square(150,150,250,250);
   closegraph();

}