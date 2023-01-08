// Vi?t chuong trình nh?p n và tính t?ng S = x + x^2 + x^3 + x^4 +…+ x^n

#include<stdio.h>
#include<math.h>
//Khai báo hàm
float tong(float x, int n);//  Tính t?ng S = x + x^2 + x^3 + x^4 +…+ x^n , 
float luythua(float x, int n);// Tính x luy th?a n

int main() {
    //Khai báo bi?n
	float x, S = 0;
	int n;
	
    // nh?p n
    printf("Nhap n: ");
    scanf("%d", &n);
    // nh?p x
	printf("Nhap x: ");
	scanf("%f", &x);
	
	tong(x,n);//G?i hàm tong và truy?n tham s? vào hàm
	luythua(x,n); // G?i hàm luythua và truy?n tham s? vào hàm
}

float tong(float x, int n) // Tính t?ng S = x + x^2 + x^3 + x^4 +…+ x^n
{
    //khai báo bi?n
	int i; // bi?n d?m i
	float S = 0;

	for(i = 1 ; i<=n; i++){ // dùng vòng l?p for d? tính t?ng
		S += pow(x, i); //hàm pow (bi?n, s? mu tr? v?) c?n khai báo thu vi?n math
	}
	printf("Tong S = %.2f", S);// hi?n th? t?ng v?a tính
}

float luythua(float x, int n) //Tính x luy th?a n
{   
    float lt = 0;//khai báo bi?n lt gán b?ng 0
    lt = pow(x, n);// lt = lt + pow(x,n)
    printf("\nket qua x luy thua n la:%.2f", lt);// hi?n th? k?t qu?  x luy th?a n.
}
