// Vi?t chuong tr�nh nh?p n v� t�nh t?ng S = 1 + 2 + 3 +...+ n

#include<stdio.h>

long tong(int n);//Khai b�o h�m

int main() {
	int ts; // Khai b�o bi?n
    tong(ts);// G?i h�m v� truy?n tham s? v�o h�m
   
}

long tong(int n){
	int i, S = 0; // khai b�o bi?n d?m i v� t?ng S g�n b?ng 0
	
	printf("Nhap n: "); // L?nh hi?n th? y�u c?u nh?p n
    scanf("%d", &n); // L?nh nh?p
    
    for (i = 0; i <= n; i++){ // d�ng v�ng l?p for d? t�nh t?ng
    	S += i; // t?ng = t?ng + i 
	}
	printf("Tong S = %d ", S);// hi?n th? ra gi� tr? t?ng v?a t�nh
}
