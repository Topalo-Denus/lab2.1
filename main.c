#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void) {
float x,y,a,r,d;

printf("\n edit x=");
scanf("%f",&x);

printf("\n edit y=");
scanf("%f",&y);

a=(x+y)/2;
r=pow(x,2)-pow(y,2);
d=(x+y)*y;
printf ("\n seredne arefmetuchne:%.1f \n",a);
printf ("\n riznucya kvadrativ:%.1f \n",r);printf ("\n dobutok:%.1f \n",d);

return 0;
}