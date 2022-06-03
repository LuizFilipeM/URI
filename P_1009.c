#include <stdio.h>
 
int main() {
 
    double venda, sal_fix, sal_fim;
    char name [64];
    scanf(" %s %lf %lf", &name, &sal_fix, &venda);
    sal_fim = sal_fix + (venda * 0.15);
    printf("TOTAL = R$ %.2lf\n", sal_fim);
 
    return 0;
}
