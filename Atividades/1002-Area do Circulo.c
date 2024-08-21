#include <stdio.h>
 
int main() {

    
   /*variaveis*/
   double area = 0, raio = 0, PI = 3.14159;
   
   scanf("%lf",&raio);
   area = PI*(raio*raio);
   printf("A=%.4lf\n",area);
 
    return 0;
}