#include<stdio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT,gm;

    initgraph(&gd,&gm,"E:\Classes Basic\Day 9");

   Rectangle(150,150,350,250);
   closegraph();

}