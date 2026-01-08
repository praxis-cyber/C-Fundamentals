#include<stdio.h>  
int main()  
{  
    float radius, area;  

    printf("Enter the radius: ");  
    scanf("%f",& radius);  

    //formula of calculating the area of a circle
    area = 22*radius*radius/7; 

    printf("area = %f\n", area); 
}  