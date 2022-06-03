#include <stdio.h>
#include <stdlib.h>


typedef struct arvore
{
    struct arvore *esq, *dir;
    int chave;
} Arvore;

Arvore *cria()
{
    Arvore *nova;
    nova =(Arvore*) malloc(sizeof(Arvore));
    nova->dir = NULL;
    nova->esq = NULL;
    nova->chave = -1;
    return nova;
}

Arvore* insere_elemento(Arvore *t, int reg)
{
    if (t->chave == -1){
        t->chave = reg;
    }else{
        if (reg < t->chave )
        {
            if (t->esq)
            {
                insere_elemento(t->esq, reg);
            }
            else
            { /* achou local de inserção */
                Arvore *novo = cria();
                novo->chave = reg;
                t->esq = novo;
            }
        }
        else{
             if (reg > t->chave)
            {
                if (t->dir)
                {
                    insere_elemento(t->dir, reg);
                }
            
            
             else{
                /* achou local de inserção */
                Arvore *novo = cria();
                novo->chave = reg;
                t->dir = novo;
            }
            }
        }
    }
    return t;
}


void pre_ordem(Arvore *arvore){
    if(arvore == NULL) return;
    printf(" %d", arvore->chave);
    pre_ordem(arvore->esq);
    pre_ordem(arvore->dir);
    
}


void pos_ordem(Arvore *arvore){
    if(arvore == NULL) return;
    pos_ordem(arvore->esq);
    pos_ordem(arvore->dir);
    printf(" %d", arvore->chave);
}

void ordem_central(Arvore *arvore){
    if(arvore == NULL) return;
    ordem_central(arvore->esq);
    printf(" %d", arvore->chave);
    ordem_central(arvore->dir);
    
}


int main()
{
    int num_testes, num_chaves;
    scanf("%d", &num_testes);
    for (int i = 0; i < num_testes; i++)
    {
        printf("Case %d:\n", i+1);
        Arvore *arvore = cria();
        scanf("%d", &num_chaves);
        
        for (int j = 0; j < num_chaves; j++)
        {
            int chave;
            scanf("%d", &chave);
            insere_elemento(arvore, chave);
        }
        printf("Pre.:");
        pre_ordem(arvore);
        printf("\n");
        printf("In..:");
        ordem_central(arvore);
        printf("\n");
        printf("Post:");
        pos_ordem(arvore);
        printf("\n\n");
    }
    return 0;
}
