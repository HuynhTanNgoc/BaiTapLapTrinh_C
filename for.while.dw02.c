//Xuat ra man hinh so nguyen duong n nho nhat sao cho 1 + 2 +...+ n > 10000.
#include"stdio.h"
int main(){
    //Khai bao bien:
	int n, S;
	n = 1;
	S = 1;
	//Xu ly va in ra ket qua:
	while(S<10000){
		n++;
		S = S + n;
	}
	    printf("Gia tri tong:%d", S);
	
	if(S>10000)
	    printf("\nGia tri n nho nhat la n = %d", n);
}    
