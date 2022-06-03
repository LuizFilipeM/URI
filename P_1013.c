#include <stdio.h>
#include <stdlib.h>
int main() {
 
    int A, B, C, MAB, MBC;
    scanf("%d %d %d", &A, &B, &C);
    MAB = ((A + B + abs(A - B)) / 2);
    MBC = ((MAB + C + abs(MAB - C)) / 2);
    printf("%d eh o maior\n", MBC);
    return 0;
}
