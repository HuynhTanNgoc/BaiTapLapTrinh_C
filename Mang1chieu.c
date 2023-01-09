/*Cho m?ng m?t chi?u a ch?a n s? nguy�n. Vi?t chuong tr�nh th?c hi?n c�c ch?c nang sau:
 1. Nh?p n c�c s? nguy�n d?n m?ng m?t chi?u a
 2. Xu?t n c�c s? nguy�n t? m?ng m?t chi?u a
 3. T�m gi� tr? l?n nh?t trong m?ng m?t chi?u a 
 4. T�m m?t v? tr� m� gi� tr? t?i v? tr� d� l� gi� tr? nh? nh?t trong m?ng a
 5. Ki?m tra trong a c� t?n t?i gi� tr? ch?n nh? hon 2004 hay kh�ng
 6. �?m s? lu?ng s? nguy�n t? nh? hon 100 trong m?ng a
 7. T�nh t?ng c�c gi� tr? �m torng m?ng a
 8. S?p x?p m?ng a theo th? t? tang d?n
*/

#include<stdio.h>

int a[100], n, i;

void nhap(); // 1.
void xuat(); // 2.
int lonnhat(); // 3.
int vitrinhonhat(); // 4. 
int kiemtra2004(); // 5.
int demnguyento(); // 6.
int tongam(); // 7.
int saptang(); // 8.

int main() {
	int dem_uoc = 0, dem_snt = 0;
    nhap();
    xuat();
	lonnhat();
    vitrinhonhat();
    if (kiemtra2004()==1) printf("\nCo ton tai");
    else printf("\nKhong ton tai");
    demnguyento();
}

void nhap(){ // 1.
	int i;
 	printf("Nhap n = ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(){ // 2. 
	int i;
    for(i = 0; i < n; i++){
        printf("a[%d] = %d ", i, a[i]);
    }
    
}

int lonnhat()// 3.
{ 
    int	max = a[0];
	for (i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];	
		}
	}printf("\nGTLN la: %d", max);
}

int vitrinhonhat() // 4.
{	int vitrimin;

	a[vitrimin] = a[0];
	for (i = 1; i < n; i++){
		if(a[vitrimin] > a[i]){
			vitrimin = i;
		}
	}printf("\nVi tri khi co GTNN la: a[%d] ", vitrimin);
}
int kiemtra2004() // 5.
{
	for (i = 1; i < n; i++){
		if (a[i]%2==0 && a[i] <2004 ){
			return 1;
		}
	}
}

int demnguyento() // 6.
{
	int dem_uoc = 0, dem_snt = 0;
	
		for(i = 0; i <= n; i++){
			if( a[i] >=2 && a[i] % i == 0){	
				dem_uoc+=1;	}
			if(dem_uoc == 2 && a[i] < 100){ 
				dem_snt+=1;
		}
	}
	printf("\nSo luong snt <100 trong mang a la: %d ", dem_snt);
    
}
int tongam() // 7.
{
    
}
int saptang() // 8.
{
    
}
