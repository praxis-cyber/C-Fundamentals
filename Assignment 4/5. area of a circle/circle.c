#include<stdio.h> 

float area(float); 

int main() 
{ 

    float radius, result; 

    printf("Enter radius: "); 
    scanf("%f", &radius); 

    result = area(radius); 

    printf("Area of circle is %.2f\n", result); 

    return 0; 
} 

float area(float r) 
{ 
    float a; 
    a = 3.14 * r * r; 
    return a; 
}
