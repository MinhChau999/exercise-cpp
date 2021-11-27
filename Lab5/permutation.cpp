// permutation
#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    printf("Nhập a: ");
    scanf("%d",&a);
    printf("Nhập b: ");
    scanf("%d",&b);
    printf("Trước khi hoán vị a = %d, b = %d.\n", a, b);
    swap(&a,&b);
    printf("Sau khi hoán vị a = %d, b = %d.", a, b);
    return 0;
}