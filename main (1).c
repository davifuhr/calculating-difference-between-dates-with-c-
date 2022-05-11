#include <stdio.h>

struct dma{
  int dia;
  int mes;
  int ano;
}data[2];

int main(void) {
  
  void conta (struct dma x, struct dma y);
  printf("Atividade struct->primeiro\nDAVI FELIPE FUHR 4324");

  printf("\n\n  Digite a primeira data (dia/mes/ano):");
  scanf("%i/%i/%i", &data[0].dia, 
                    &data[0].mes, 
                    &data[0].ano);
                                 
printf("A primeira data eh: %i/%i/%i\n", data[0].dia, data[0].mes, data[0].ano );

printf("\nDigite a segunda data (dia/mes/ano):");
  scanf("%i/%i/%i", &data[1].dia, 
                    &data[1].mes, 
                    &data[1].ano);
                                 
printf("A segunda data eh: %i/%i/%i", data[1].dia, data[1].mes, data[1].ano );

conta (data[0], data[1]);

return 0;
}

void conta (struct dma x, struct dma y){
  struct dma resultado = {};

if (data[0].ano >= data[1].ano){
  resultado.ano = data[0].ano - data[1].ano;
} else if(data[1].ano>data[1].ano){
   resultado.ano = data[1].ano-data[0].ano;
  }

if (data[0].mes >= data[1].mes){
  resultado.mes = data[0].mes - data[1].mes;
} else resultado.mes = data[1].mes-data[0].mes;

if (data[0].dia >= data[1].dia){
  resultado.dia = data[0].dia - data[1].dia;
} else resultado.dia = data[1].dia-data[0].dia;

printf("\n\nA distancia entre as datas eh:\n");
 if (resultado.dia==1){
   printf("%i dia\n",resultado.dia );
 } else printf("%i dias\n",resultado.dia );

  if (resultado.mes==1){
   printf("%i mes\n",resultado.mes );
 } else printf("%i meses\n",resultado.mes );

  if (resultado.ano==1){
   printf("%i ano\n",resultado.ano );
 } else printf("%i anos\n",resultado.ano );

}