#include <stdio.h>
#include "aritmetica.h"
#define NUM1 5
#define NUM2 2
int main(){
printf("Dados los numeros %d y %d\n", NUM1, NUM2);
printf("La suma es %d\n", suma (NUM1, NUM2));
printf("La resta es %d\n", resta (NUM1, NUM2));
printf("La multiplicación es %d\n", multiplicacion (NUM1, NUM2));
printf("La division es %f\n", division (NUM1, NUM2));
return 0;
}
