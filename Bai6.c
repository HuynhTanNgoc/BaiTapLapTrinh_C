//In tat ca cac so nguyen duong le nho hon 100.
#include<stdio.h>
int main() {
	int songuyen = 1;
	
	Buoc1:do{
		if(songuyen%2==0){
			songuyen++;
			goto Buoc1; //Neu thoa dieu kien tren thi quay lai buoc 1
		}
		if(songuyen%2!=0);{ //Neu songuyen khong chia het cho 2 la so le
			printf("%d\n", songuyen);
			songuyen++;}//Sau khi in ra so le thi cong them 1 gia tri roi quay tro lai vong lap.
	}while(songuyen<100); // vong lap chay den 99 thi ket thuc.
}
