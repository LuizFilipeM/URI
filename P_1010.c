#include <stdio.h>
 
int main() {
    int peca1, peca2, q1, q2;
    float valor1, valor2, TOTAL;
    scanf("%d %d %f", &peca1, &q1, &valor1);
    scanf("%d %d %f", &peca2, &q2, &valor2);
    TOTAL = q1 * valor1 + q2 * valor2;
    printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
 
    return 0;
}
