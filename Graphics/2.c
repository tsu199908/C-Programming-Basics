#include<stdio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT,gm;

    initgraph(&gd,&gm,"E:\Classes Basic\Day 9");

   line(150,200,250);
   closegraph();

}