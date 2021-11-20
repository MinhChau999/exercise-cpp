#include <stdio.h>

int main(){
    int min, max, sum = 0, count=0;
    printf("Nhập min: ");
    scanf("%d", &min);
    printf("Nhập max: ");
    scanf("%d", &max);
    for (int i = min; i <= max; i++){
        if (i % 2 == 0){
            sum += i;
            count++;
        }
    }
    printf("Trung bình cộng các số chẵn trong khoảng %i và %i là: %.2f", min, max, float(sum/count));
    return 0;
}