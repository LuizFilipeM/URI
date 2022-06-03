#include <stdlib.h>
#include <stdio.h>

void insercao(int *v, int n)
{
    int i, j;
    int aux;
    for (i = 1; i < n; i++)
    {
        aux = v[i];
        j = i - 1;
        while ((j >= 0) && (aux < v[j]))
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}

int main()
{
    int N, Q, caso = 1;

    while (1)
    {
        scanf("%d %d", &N, &Q);
        if (N == 0 && Q == 0) break;
        printf("CASE# %d:\n", caso);
        int marm[N], cons[Q];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &marm[i]);
        }

        insercao(marm, N);

        for (int i = 0; i < Q; i++)
        {
            scanf("%d", &cons[i]);
        }
        int contador = 0;
        for (int i = 0; i < Q; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (cons[i] == marm[j])
                {
                    printf("%d found at %d\n", cons[i], j + 1);
                    contador++;
                    break;
                }
            }
            if (contador == 0)
                printf("%d not found\n", cons[i]);
            contador = 0;
        }

        caso++;
    }
    return 0;
}
