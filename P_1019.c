#include<stdlib.h>
#include<stdio.h>

int main()
{
    int x, h, h1, m, m1, s, s1;
    scanf("%d", &x);
    if (x / 3600 > 0)
    {
        h = x / 3600;
        
    } else h = 0;
        h1 = x%3600;
    if (h1 / 60 > 0)
    {
        m = h1 / 60;
    } else m = 0;
        m1 = h1 % 60;
        s = m1;
    printf("%d:%d:%d\n", h, m, s); 
    return 0;
}
