// biulding a program that calculates the area and perimeter of a circle
#include <iostream>
#include <cmath>

int main(){
    double radius;
    double area;
    double perimeter;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    area = M_PI * pow(radius, 2);
    perimeter = 2 * M_PI * radius;
    std::cout << "The area of the circle is: " << area << std::endl;
    std::cout << "The perimeter of the circle is: " << perimeter << std::endl;
    return 0;
}