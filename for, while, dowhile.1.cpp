//Viet chuong trinh tinh tong S = 1^3 + 2^3 + 3^3+....+ N^3
#include"stdio.h"
#include"math.h"
int main(){
    //Khai bao bien.
	int S, N, i;
	printf("Nhap gia tri N = ");
	scanf("%d", &N);
	S = 0;
	//Xu ly va in ra ket qua
	for	(i = 1; i <= N; i++){ 
		S = S + pow(i, 3); //pow( , );  Tra ve so mu cua so da cho.
	}
	printf("Tong S = %d", S);
}
