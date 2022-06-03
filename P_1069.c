#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tipoitem {
    char Chave;
    struct tipoitem *proximo;
}TipoItem;

typedef struct tipopilha{
    TipoItem* Topo;
    int tam; 
}TipoPilha;

typedef struct abrefecha
{
    int abre; //N° de chaves abrindo
    int fecha; //N° 
    int verifica;
    int qtd;
}AbreFecha;


TipoItem* CriaI(char x){
    TipoItem *Item = (TipoItem*)malloc(sizeof(TipoItem));
    Item->Chave = x;
    return Item;
}


void Empilha(TipoItem *Item, TipoPilha *Pilha){
    if(Item->Chave != '<' && Item->Chave != '>' ) return;

    Item->proximo = Pilha->Topo;
    Pilha->Topo = Item;
    Pilha->tam++;
}

AbreFecha* Desempilha(TipoPilha *Pilha, AbreFecha *abre, TipoItem *Iaux){
    if(Pilha->tam == 0) return abre;
    
    if(Pilha->Topo->Chave == '>') abre->fecha++;                         
                    
    if (abre->verifica != 0){
      
        if (Pilha->Topo->Chave == '<'){
            abre->abre++;
            abre->qtd++;
        }
        
    }       
   
    abre->verifica = abre->fecha - abre->abre;
    Pilha->Topo = Pilha->Topo->proximo;
    Pilha->tam--;
          
    return abre;
}


void main(){
    int testes;
    scanf("%d", &testes);
    char *mina= (char*)malloc(1000*sizeof(char));
    TipoPilha *pilha = (TipoPilha*)malloc(1000*sizeof(TipoPilha));
    AbreFecha *abre= (AbreFecha*)malloc(sizeof(AbreFecha));
    TipoItem *Iaux;
    for (int i = 0; i < testes; i++){

      pilha->Topo = NULL;
      pilha->tam = 0;
      abre->abre = 0;
      abre->fecha = 0;
      abre->qtd = 0;
      abre->verifica = 0;
      scanf(" %s", mina);
    
      for (int i=0 ; i<strlen(mina) ; i++){       
        Empilha(CriaI(mina[i]), pilha);
        
      }
   

      for (int i=0; i<strlen(mina); i++){
        Desempilha(pilha, abre, Iaux);
      }
      
      printf("%d\n", abre->qtd);
    
    }       
    free(mina);
    free(abre);
    free(pilha);
    free(Iaux);    
}
