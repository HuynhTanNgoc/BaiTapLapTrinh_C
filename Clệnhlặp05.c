//Viet chuong trinh tim so nguyen duong m nho nhat sao cho 1+2+3+...+m<N.
#include"stdio.h"
int main(){
	//Khai bao bien
	int N, m, S;
	printf("Nhap N = ");
	scanf("%d", &N);
	//Gan gia tri.
	S = 0;
	m=0;
	//Su dung vong lap de tinh tong
	do{
		m++;
		S = S + m;
		
	}while(S + m + 1 < N);//Khi thoa dieu kien while thi dung lai.
	printf("\nTong S = %d", S);
	printf("\nSo nguyen duong m lon nhat la: %d", m);
	
}
