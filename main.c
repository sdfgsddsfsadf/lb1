#include <stdio.h>
#include<math.h>
int main() {
float D,D2,arithmeticmean,differenceofsquares,S;

printf("Enter 1 date-");
scanf("%f",&D);
  
printf("Enter 2 date-");
scanf("%f",&D2);

arithmeticmean=(D+D2)/2;
differenceofsquares=2*D-(2*D*D2)+D2*2;
S=(D+D2)*D2;
  
printf("\narithmeticmean=,\t %f",arithmeticmean);
printf("\ndifferenceofsquares=,\t %f,",differenceofsquares);
printf("\nS=,\t %f",S);
  
  
return 0;
  
}