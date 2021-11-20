// Electricity Bill
#include <iostream>

int main()
{
    double soKwh, giaBan, tongTien;
    std::cout << "Nhập số Kwh: ";
    std::cin >> soKwh;
    
    if (soKwh <= 50)
    {
        giaBan = 1.678;    }
    else if (soKwh <= 100)
    {
        giaBan = 1.734;
    }
    else if (soKwh <= 200)
    {
        giaBan = 2.014;
    }
    else if (soKwh <= 300)
    {
        giaBan = 2.536;
    }
    else if (soKwh <= 400)
    {
        giaBan = 2.834;
    }
    else
    {
        giaBan = 2.927;
    }
    tongTien = soKwh * giaBan;
    std::cout << "Tổng tiền là: " << tongTien << " VND";
    return 0;
}