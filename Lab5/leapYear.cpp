// Leap year
#include <stdio.h>

bool isLeapYear(int year)
{
    bool flag = false;
    if (year % 400 == 0){
        flag = true;
    }
    if (year % 4 == 0 && year % 100 != 0){
        flag = true;
    }
    return flag;
}

int main(){
    int year;
    printf("Nhập năm: ");
    scanf("%d", &year);
    if(isLeapYear(year) == true){
        printf("Năm %d là năm nhuận", year);
    } else{
        printf("Năm %d không phải là năm nhuận", year);
    }
    return 0;
}