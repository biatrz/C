#include <stdio.h>

int main(void) {

  
  //Este programa tem como objetivo calcular a circunferencia de um determinado planeta.Os valores são inseridos pelo usuário e a partir dos dados informados e ele calcula e imprime a distancia em estadios e quilometros.

  int estadio=0; //declarando o valor da variavel
  float grau=0; //declarando valor da variavel
  float Km=0;     //declarando valor da variavel
  float C=0;     //declarando valor da variavel
 
  printf("digite o numero de estadios: \n"); //enunciado
  scanf("%d",&estadio); //Tipo e nome da variavel
  printf("%.1d estadios:\n",estadio); //toda linha tem que ter ponto e virgula,lembrar de associar a variavel com a porcentagem.
  printf("digite o valor em graus: \n");
  scanf("%f",&grau); //tipo e nome da variavel
  printf("%.1f graus:\n",grau);//para decimais definir sempre quantas casas serao usadas antes da variavel usar ponto (.)
  C=360/grau * estadio; //calculo de estadios
  printf("%.1f calculo de estadios:\n",C); //printf só dps da execução
  Km= C * 176.4 /1000; //calculo de Km
  printf("%.1f calculo de km: \n",Km); //enunciado

  
  return 0;

}