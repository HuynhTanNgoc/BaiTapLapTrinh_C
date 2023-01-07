/// Vi?t chuong trình nh?p h? tên, di?m toán, di?m van c?a m?t h?c sinh. Tính di?m trung bình và xu?t k?t qu?.
#include<stdio.h>


char hoten[30];
int toan;
int van;
float dtb;

void nhap();// nh?p h? tên, di?m toán, di?m van
void xuli();// tính di?m trung bình
void xuat();// xu?t h? tên, di?m toán, di?m va di?m trung bình

int main() {
    nhap();
    xuli();
    xuat();
}

void nhap()// nh?p h? tên, di?m toán, di?m van
{
	printf("Ho ten: ");
	//scanf("%s", &hoten);
	gets(hoten);
    
	printf("\nNhap diem toan: ");
	scanf("%d", &toan);
    
	printf("\nNhap diem van: ");
	scanf("%d", &van);

	
}
void xuli()// tính di?m trung bình
{
    dtb =(float)(toan + van)/2;
}
void xuat()// xu?t h? tên, di?m toán, di?m va di?m trung bình
{
    printf("\nHo ten: %s", hoten);
    printf("\nToan : %d diem", toan);
    printf("\nVan : %d diem", van);
    printf("\nDiem tb : %.2f diem", dtb);
}
