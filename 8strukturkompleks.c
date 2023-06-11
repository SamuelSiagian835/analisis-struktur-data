#include<stdio.h>

struct point{int x, y; };

struct line{
    struct point start;
    struct point end;
} l;

int main(){
    l.start.x = 0;
    l.start.y = 0;
    l.end.x   = 9;
    l.end.y   = 8;
    printf("start (x,y) = (%d,%d)\n", l.start.x, l.start.y);
    printf("end(x,y) = (%d,%d)\n", l.end.x, l.end.y);

}