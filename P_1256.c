#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula
{
    struct celula *prox;
    int chave;
} Celula;

typedef struct lista
{
    Celula *prim;
    Celula *ult;
} Lista;

Lista inicializa(Lista Hash[], int tam, int i)
{
    Hash[i].prim = NULL;
    Hash[i].ult = NULL;
    return Hash[i];
}

void Insere_Hash(int chave, int tam, Lista *Hash)
{
    Celula *aux = (Celula *)malloc(sizeof(Celula));
    aux->chave = chave;
    aux->prox = NULL;

    int posi = chave % tam;

    if (Hash[posi].prim == NULL)
    {
        Hash[posi].prim = aux;
    }

    else
    {
        Hash[posi].ult->prox = aux;
    }
    Hash[posi].ult = aux;
}

int main()
{
    int num_testes, tam_hash, num_chaves, chave;
    scanf("%d", &num_testes);

    for (int j = 0; j < num_testes; j++)
    {
        scanf("%d %d", &tam_hash, &num_chaves);
        Lista Hash[tam_hash];

        for (int i = 0; i < tam_hash; i++)
        {
            Hash[i] = inicializa(Hash, tam_hash, i);
        }

        for (int i = 0; i < num_chaves; i++)
        {
            scanf("%d", &chave);
            Insere_Hash(chave, tam_hash, Hash);
        }

        for (int i = 0; i < tam_hash; i++)
        {
            Celula *aux = Hash[i].prim;
            printf("%d -> ", i);
            while (aux != NULL)
            {
                printf("%d -> ", aux->chave);
                aux = aux->prox;
            }
            printf("\\\n");
        }
        if (j < num_testes - 1)
        {
            printf("\n");
        }
    }
    return 0;
}
