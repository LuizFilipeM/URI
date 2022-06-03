#include<stdlib.h>
#include<stdio.h>

int main()
{

    int x,a,a1,m,d;
    scanf("%d", &x);
    if (x / 365 > 0)
    {
        a = x / 365;
    } else a = 0;
    a1 = x % 365;
    if (a1 / 30 > 0)
    {
        m = a1 / 30;
    } else m = 0;
    d = a1 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
    
    return 0;
}
