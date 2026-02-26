#include <stdio.h>
 
int main(){
    //variaveis do contador e da identidade
    int i;
    int contador = 0;
 
    //movimento da torre
    printf("Torre :\n");
    for (i = 0; i <= 5; i++) 
    {
        printf("Direita\n");
    }
 
    //movimento do bispo
    printf("Bispo :\n");
    while (contador < 5) 
    {
        printf("Cima\n");
        printf("Direita\n");
        contador = contador + 1;
    }
 
    contador = 0; 
 
    //movimento da rainha
    printf("Rainha :\n");
    do 
    {
        printf("Esquerda\n");
        contador = contador + 1;
      
    } 
      while (contador < 8);
 
    return 0;
}
