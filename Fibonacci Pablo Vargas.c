#include <stdio.h>

int secuencia(int numero) {
  int resultado, i,n1=0,n2=1;
        printf("Serie de fibonacci:%d,%d,",n1,n2);
        resultado=n1+n2;
        for(i = 3; i <= numero; i++){
          printf("%d,", resultado);
          n1 = n2;
          n2 = resultado;
          resultado = n1 + n2;
        }
  
  return resultado;
}
int main (void){
  int numero;
  printf("ingrese el numero de valores que desea realizar: ");
    do{
      scanf("%d",&numero);
      if (numero<0)
        printf("Ingrese un numero positivo");
    } while (numero<0);
  int resultado = secuencia(numero);
 return 0;
}
