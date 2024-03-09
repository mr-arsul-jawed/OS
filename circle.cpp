#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT,gm;

    initgraph(&gd, &gm,(char*)"");
    setcolor(GREEN);
    circle(320,220,40);
    getch();
    closegraph();
    return 0;
}