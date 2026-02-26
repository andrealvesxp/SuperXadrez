#include <stdio.h>
 
int main(){
    //variaveis do contador e da identidade
    int i;
    int contador = 0;
 
    //movimento da torre
    printf("Torre :");
    for (i = 0; i <= 5; i++) 
    {
        printf("Direita\n");
    }
 
    //movimento do bispo
    printf("Bispo :");
    while (contador < 5) 
    {
        printf("Cima\n");
        printf("Direita\n");
        contador = contador + 1;
    }
 
    contador = 0; 
 
    //movimento da rainha
    printf("Rainha :");
    do 
    {
        printf("Esquerda\n");
        contador = contador + 1;
      
    } 
      while (contador < 8);
 
    return 0;
}
