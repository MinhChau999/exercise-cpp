// equation of degree 1
#include <iostream>
#include <cmath>

int main(){
    double a, b;
    std::cout << "Nhập a và b: ";
    std::cin >> a >> b;
    if (a == 0){
        if (b == 0){
            std::cout << "Phương trình vô số nghiệm";
        }
        else{
            std::cout << "Phương trình vô nghiệm";
        }
    } else {
        std::cout << "Phương trình có nghiệm x = " << -b/a;
    }
    return 0;
}