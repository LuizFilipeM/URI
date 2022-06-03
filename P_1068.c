#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int verifica(char express[]){
        
               
    int tam=strlen(express);                   
    for (int i = 0; i < tam; i++)           
    {
        if (express[i] == '('){            
            
            for (int j = i; j < tam; j++)
            {

                if (express[j] == ')')
                {
                    express[i]='0';
                    express[j]='0';
                    j=tam;
                
                }          
            }
        }
    }
    
    for (int i = 0; i < tam; i++)
    {
        if(express[i] == '(' || express[i] == ')') return 0;
        
    }
    return 1;
        
}


void main(){
    int x;
    char express[10000];
    
    while (1)
    {
        scanf(" %s", express);
        if(feof(stdin)) return;   
        x = verifica(express);
        if (x == 1)
            printf("correct\n");
        if (x == 0) printf("incorrect\n");
    }
    return;
}
