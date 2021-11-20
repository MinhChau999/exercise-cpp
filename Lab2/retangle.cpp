// building a program to calculate the area and perimeter of a retangle
#include <stdio.h>
#include <math.h>

int main(){
    float length, width, area, perimeter;
    printf("Enter the length of the retangle: ");
    scanf("%f", &length);
    printf("Enter the width of the retangle: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("The area of the retangle is %.2f\n", area);
    printf("The perimeter of the retangle is %.2f\n", perimeter);
    return 0;
}