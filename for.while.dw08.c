//Viet chuong trinh kiem tra mot so co phai la so nguyen to hay khong.
//Mot so lon hon 1, chi chia het cho 1 va chinh no thi do la so nguyen to.
#include"stdio.h"
int main(){
	//khai bao bien
	int N, i, dem_uoc= 0;
	printf("Nhap N = ");
	scanf("%d", &N);
	
	//Xu ly va in ra ket qua:
	
	if(N<2){ // Neu N nho hon 2
		printf("\n%d khong phai la so nguyen to", N);
	}else{
		for(i = 1; i <= N; i++){//Cho i chay tu 1 den N.
			if(N % i == 0){	//kiem tra uoc cua N
				dem_uoc+=1; //(dem_uoc = dem_uoc + 1), dem so luong uoc cua N.	
			}
		}
		if(dem_uoc == 2){ //Neu dem_uoc bang 2 (N co 2 uoc)
			printf("\n%d la so nguyen to", N);
		}else{ //Nguoc lai neu dem_uoc != 2;
			printf("\n%d khong phai la so nguyen to", N);			
		}
	}	
}

