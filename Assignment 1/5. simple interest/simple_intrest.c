#include<stdio.h>  
int main()  
{  
    int simpleintarest, principlevalue, rate, time;  

    printf("Enter the principle value: ");  
    scanf("%d", & principlevalue);  

    printf("Enter the rate: ");  
    scanf("%d", & rate);  

    printf("Enter the time: ");  
    scanf("%d", & time);
      
    //formula of simple intrest 
    simpleintarest = (principlevalue * rate * time)/100;

    printf ("simpleintarest = %d\n", simpleintarest);  
}  