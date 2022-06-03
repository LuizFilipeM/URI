#include <stdio.h>
 
int main() {
 
    int temp, veloci;
    float gast, dist;
    scanf("%d%d", &temp, &veloci);
    dist = veloci * temp;
    gast = dist/12.0;
    printf("%.3f\n", gast);
    
 
    return 0;
}
