#include<stdio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT,gm;

    initgraph(&gd,&gm,"E:\Classes Basic\Day 9");

   Arc(150,150,180,360,250);
   closegraph();

}