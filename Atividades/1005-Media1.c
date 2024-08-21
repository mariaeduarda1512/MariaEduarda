#include <stdio.h>

#define PESO_UM 3.5
#define PESO_DOIS 7.5

int main() {
    
    double a = 0.0, b = 0.0;
    double media = 0.0;
    
    scanf ("%lf\n%lf", &a,&b);
    media = ((a*PESO_UM)+(b*PESO_DOIS))/(PESO_UM+PESO_DOIS);
    printf ("MEDIA = %.5lf\n",media);
    
  
 
    return 0;
}