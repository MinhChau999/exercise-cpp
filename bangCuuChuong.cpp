#include <iostream>
#include <math.h>

int main(){
    for(int i=1; i<10; i++){
        printf("Bang:%i|| ",i );
    }

    for(int i=1; i<=10; i++){
        printf("\n");
        for(int j=1; j<10;j++){
            printf("%ix%i=%i || ",j,i,j*i);
        }
    }
}