// Vi?t chuong tr�nh nh?p n v� t�nh t?ng S = x + x^2 + x^3 + x^4 +�+ x^n

#include<stdio.h>
#include<math.h>
//Khai b�o h�m
float tong(float x, int n);//  T�nh t?ng S = x + x^2 + x^3 + x^4 +�+ x^n , 
float luythua(float x, int n);// T�nh x luy th?a n

int main() {
    //Khai b�o bi?n
	float x, S = 0;
	int n;
	
    // nh?p n
    printf("Nhap n: ");
    scanf("%d", &n);
    // nh?p x
	printf("Nhap x: ");
	scanf("%f", &x);
	
	tong(x,n);//G?i h�m tong v� truy?n tham s? v�o h�m
	luythua(x,n); // G?i h�m luythua v� truy?n tham s? v�o h�m
}

float tong(float x, int n) // T�nh t?ng S = x + x^2 + x^3 + x^4 +�+ x^n
{
    //khai b�o bi?n
	int i; // bi?n d?m i
	float S = 0;

	for(i = 1 ; i<=n; i++){ // d�ng v�ng l?p for d? t�nh t?ng
		S += pow(x, i); //h�m pow (bi?n, s? mu tr? v?) c?n khai b�o thu vi?n math
	}
	printf("Tong S = %.2f", S);// hi?n th? t?ng v?a t�nh
}

float luythua(float x, int n) //T�nh x luy th?a n
{   
    float lt = 0;//khai b�o bi?n lt g�n b?ng 0
    lt = pow(x, n);// lt = lt + pow(x,n)
    printf("\nket qua x luy thua n la:%.2f", lt);// hi?n th? k?t qu?  x luy th?a n.
}
