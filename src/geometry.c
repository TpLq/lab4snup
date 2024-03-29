#include <math.h>
#include <stdio.h>
#include <stdlib.h>
const float PI = 3.141592;

int main()
{
    float x1, y1, r1, x2, y2, r2, r;
    float dist;
    printf("Circle #1: ");
    scanf("%f%f%f", &x1, &y1, &r1);

    printf("\n\nCircle #2: ");
    scanf("%f%f%f", &x2, &y2, &r2);

    dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    r = r1 + r2;

    printf("\n\n 1.Circle(%.2f %.2f %.2f)", x1, y1, r1);
    printf("\n perimetr = %.2f", 2 * 3.14 * r1);
    printf("\n area = %.2f\n", r1 * 3.14 * r1);
    if (Cross(x1, y1, r1, x2, y2, r2) == 1) {
        printf("1 and 2 circules are cross\n");
    } else {
        printf("1 and 2 circules are not cross\n");
    }
    printf("\n\n 1.Circle(%.2f %.2f %.2f)", x2, y2, r2);

    printf("\n perimetr = %.2f", 2 * 3.14 * r2);
    printf("\n area = %.2f\n", r2 * 3.14 * r2);

    if (dist <= r)
        printf("intersects: \n circle #2");
    else
        printf("no intersects");

    return 0;
}
