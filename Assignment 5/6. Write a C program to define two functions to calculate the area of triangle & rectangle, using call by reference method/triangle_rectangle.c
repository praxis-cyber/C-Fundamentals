#include <stdio.h> 

// Function Prototypes using pointers for call by reference 

void areaTriangle(float b, float h, float *a); 
void areaRectangle(float l, float w, float *a); 

int main(void) 
{ 
    float base, height, length, width, area; 

    // Triangle calculation 
    
    printf("Enter base and height of triangle: "); 
    scanf("%f %f", &base, &height); 

    // Pass address of 'area' using & 
    areaTriangle(base, height, &area); 
    printf("Area of Triangle = %.2f\n", area); 

    // Rectangle calculation 
    printf("\nEnter length and width of rectangle: "); 
    scanf("%f %f", &length, &width); 

    // Pass address of 'area' using & 
    areaRectangle(length, width, &area); 
    printf("Area of Rectangle = %.2f\n", area); 

    return 0; 
} 

// Function to calculate triangle area 

void areaTriangle(float b, float h, float *a) 
{ 
    // Formula: 0.5 * base * height 
    *a = 0.5 * b * h; 
} 

// Function to calculate rectangle area 
void areaRectangle(float l, float w, float *a) 
{ 
    // Formula: length * width 
    *a = l * w; 
} 