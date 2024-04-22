#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int total = 0, limite, pessoas = 0, bagagem;
  printf("Digite o limite de peso da aeronave: ");
  scanf("%i", &limite);
  getchar();
  do{
    printf("Digite o peso da bagagem: ");
    scanf("%i", &bagagem);
    getchar();
    if(bagagem != 0){
      if((total + bagagem + 80) < limite){
        total = total + bagagem + 80;
        pessoas = pessoas + 1;
      }
      else{
        bagagem = 0;
        printf("Peso excedido\n");
      }
    }
  }while(bagagem != 0);
  printf("Limite da aeronave: %i \nPeso acumulado: %i \nTotal de pessoas à bordo: %i", limite, total, pessoas);
  getchar();
}