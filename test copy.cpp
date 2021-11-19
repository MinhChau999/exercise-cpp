#include <stdio.h>

int main(){
	float diem;
	printf("Nhap diem cua ban: ");
	scanf("%f",&diem);
	if (diem >= 9 && diem <= 10) {
		printf("Hoc luc: Xuat sac!!!");
	} else if (diem < 9 && diem >= 8) {
		printf("Hoc luc: Gioi!!");
	} else if (diem < 8 && diem >= 6.5) {
		printf("Hoc luc: Kha!");
	} else if (diem < 6.5 && diem >=5) {
		printf("Hoc luc: Trung binh..");
	} else if (diem < 5 && diem >= 3.5) {
		printf("Hoc luc: Yeu...");
	} else if (diem >= 0 && diem <3.5){
		printf("Hoc luc: Kem...");
	} else {
		printf("Diem khong hop le, moi nhap lai.");
	}
	return 0;    
}