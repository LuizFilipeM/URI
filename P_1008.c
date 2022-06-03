#include <stdio.h>
 
int main() {
 
    int num_fun, horas;
    float sal_hora, SALARY;
    scanf("%d %d %f", &num_fun, &horas, &sal_hora);
    SALARY = horas * sal_hora;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_fun, SALARY);
 
    return 0;
}
