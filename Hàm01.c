/// Vi?t chuong tr�nh nh?p h? t�n, di?m to�n, di?m van c?a m?t h?c sinh. T�nh di?m trung b�nh v� xu?t k?t qu?.
#include<stdio.h>


char hoten[30];
int toan;
int van;
float dtb;

void nhap();// nh?p h? t�n, di?m to�n, di?m van
void xuli();// t�nh di?m trung b�nh
void xuat();// xu?t h? t�n, di?m to�n, di?m va di?m trung b�nh

int main() {
    nhap();
    xuli();
    xuat();
}

void nhap()// nh?p h? t�n, di?m to�n, di?m van
{
	printf("Ho ten: ");
	//scanf("%s", &hoten);
	gets(hoten);
    
	printf("\nNhap diem toan: ");
	scanf("%d", &toan);
    
	printf("\nNhap diem van: ");
	scanf("%d", &van);

	
}
void xuli()// t�nh di?m trung b�nh
{
    dtb =(float)(toan + van)/2;
}
void xuat()// xu?t h? t�n, di?m to�n, di?m va di?m trung b�nh
{
    printf("\nHo ten: %s", hoten);
    printf("\nToan : %d diem", toan);
    printf("\nVan : %d diem", van);
    printf("\nDiem tb : %.2f diem", dtb);
}
