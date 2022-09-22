


                                                                       // codigo para o ex 1
   
   
   // valor que o cliente digita
   // exercico que pega valor inserido e faz calculo - premissa: o cliente que saber quanto a conta total fica com os 10% de gorgeta
   
   #include <stdio.h>

int main (){
       int a, d;
       float b, c;
       
       printf("Digite o valor da conta: ");
       scanf("%d", &a );
       
        b = 0.10;
        c = a * b;
        d = a + c;
    
       
      
      printf("%d", d);

       return 0;
   }
   
// valor fixo em 500 reais


#include <stdio.h>

int main (){
       int a, d;
       float b, c;

       a = 500;
       b= 0.10;
       c = a * b;
       d = a + c;
       
      
      printf("%d", d);

       return 0;
   }

   /*                                                                    codigo do ex 2                                                                           */
   
// calcula a autonomia do carro
// capaz da formula não estar certa

     
   #include <stdio.h>

int main (){
       
       float a, b, c, d;
       
       printf("Digite a capacidade do tanque: ");
       scanf("%d", &a );
       
   printf("Digite quanto foi abastecido: ");
    scanf("%d", &b );
    
     printf("Digite a quilometragem percorrida desde o ultimo abastecimento: ");
    scanf("%d", &c );
       
       d = c / b;
      
      printf("%f", d );

       return 0;
   }




   /*                                                               codigo do ex 3                                                          */

// condicionais, digitar 2 valores, se for menor que 20: soma 8, e se for maior que 20: subtrai 5

    #include <stdio.h>

int main (){
       
       int a, b, c, d;

     printf("Digite o valor 1:");
     scanf("%d", &a);
     
     printf("Digite o valor 2:");
     scanf("%d", &b);
     
     c = a + b;
     
     if (c < 20 ){
         printf("o valor é menor que vinte, entao to somando mais 8 ----->>> %d", c + 8 );
     } else {
         printf("O valor foi maior que 20, então to subtraindo 5 ----->>>%d", c -5);
     }

       return 0;
   }




   /*                   '                                   codigo do ex 4                                                              */


// contador regressivo com a palavra fogo no fim... Eu não sabia fazer o fogo no final... então tirei uma forma da minha cabeça
   
#include <stdio.h>

int main (){
       
       int contador;
       
       
       
       for(contador = 10; contador >=1; contador --){
        
           printf("\n %d",contador);
         
         if(contador == 1){
             printf("\n Fogoo");
         } else {

         };
         
           
         
       }
       
       
       // o \n foi para quando o contador chegar a 1 ele pule uma linha e printe fogo

       return 0;
   }


   /*                                           codigo ex 5                                                             */

// esse foi dificil de pensar... a premissa era somar 1/100 + 2/99 + ... 100/1 
// do/ while significam que " faça enquanto isso for isso"
/* no do coloquei uma forma que os 2 numero formassem uma fração... o ".0" do "%.0f" fez com que o 100 ficasse só 100 e não 100.000000000
- a soma foi feita com divisão de variaveis que se decrementavam e incrementavam até o while chegar no limite i<=100
>>> a parte de cima era incrementada e a parte inferior da fração era decrementada
o return 0 sei la pra que serve até hoje
*/


#include <stdio.h>

int main() {
  int i;
  float  i2,soma;
  i=1;
  i2=100;
  soma=0;
  do{
     printf("%d / %.0f\n", i, i2);
     soma = soma + (i/i2);
     i++;
     i2--;
  }while(i<=100);
  printf("%.2f", soma);
  return 0;
}