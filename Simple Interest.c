#include<stdio.h>
int main()
  {
    int principle,time,rate,SI;
    printf("Enter principle");
    scanf("%d",&principle);
    
    printf("Enter time");
    scanf ("%d",&time);
    
    printf("Enter rate");
    scanf("%d",&rate);
    
    SI=principle*time*rate;
    printf("simple interest=%d",SI);
    
    return 0;
   }