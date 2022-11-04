#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

void main()
{
    Point p1;
    p1.x = 1;
    p1.y = 2;

    printf("%d %d", p1.x, p1.y);
}
