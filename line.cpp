#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm,(char*)"");
    int arr[]= {320,150,400,250,250,350,320,150};
    drawpoly(4,arr);
    getch();
    closegraph();
    return 0;
}