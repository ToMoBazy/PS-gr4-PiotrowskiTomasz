#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "point-1.c"
#include "point-2.c"

typedef struct LineSegment{
    Point a;
    Point b;
} LineSegment;

LineSegment makeLineSegment(int ax,int ay,int bx,int by){
    struct LineSegment odcinek;
    odcinek.a.x = ax;
    odcinek.a.y = ay;
    odcinek.b.x = bx;
    odcinek.b.y = by;

    return odcinek;

}

int main()
{

    return 0;
}
