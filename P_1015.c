#include <stdio.h>
 
int main() {
    float x1, y1, x2, y2, d;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    d = sqrt(pow((x2 - x1),2) + (pow((y2 - y1),2)));
    printf("%.4f\n", d);

    return 0;
}