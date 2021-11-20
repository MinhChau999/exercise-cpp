// phương trình bậc 2
#include <iostream>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    std::cout << "Nhập a: ";
    std::cin >> a;
    std::cout << "Nhập b: ";
    std::cin >> b;
    std::cout << "Nhập c: ";
    std::cin >> c;
    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        std::cout << "Phương trình vô nghiệm";
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        std::cout << "Phương trình có nghiệm kép x1 = x2 = " << x1;
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "Phương trình có 2 nghiệm phân biệt x1 = " << x1 << " và x2 = " << x2;
    }
    return 0;
}