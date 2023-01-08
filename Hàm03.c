// Vi?t chuong trình nh?p n và tính t?ng S = 1 + 2 + 3 +...+ n

#include<stdio.h>

long tong(int n);//Khai báo hàm

int main() {
	int ts; // Khai báo bi?n
    tong(ts);// G?i hàm và truy?n tham s? vào hàm
   
}

long tong(int n){
	int i, S = 0; // khai báo bi?n d?m i và t?ng S gán b?ng 0
	
	printf("Nhap n: "); // L?nh hi?n th? yêu c?u nh?p n
    scanf("%d", &n); // L?nh nh?p
    
    for (i = 0; i <= n; i++){ // dùng vòng l?p for d? tính t?ng
    	S += i; // t?ng = t?ng + i 
	}
	printf("Tong S = %d ", S);// hi?n th? ra giá tr? t?ng v?a tính
}
