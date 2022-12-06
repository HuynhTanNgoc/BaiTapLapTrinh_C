/*Nhap vao thang cua mot nam. 
Cho biet thang thuoc qui may trong nam.
*/
#include<stdio.h>
int main() {
	//Khai bao bien
	
    int thang;
    printf("Thang ");
    scanf("%d", &thang);
    
    //Xu ly va in ra ket qua
 /* 
 Cach 1:
 
    if(thang>0 && thang <=3)
    	printf("\nThang %d thuoc qui 1", thang);
    if(thang>3 && thang <=6)
		printf("\nThang %d thuoc qui 2", thang);
	if(thang>6 && thang <=9)
		printf("\nThang %d thuoc qui 3", thang);
	if(thang>9 && thang <=12)
		printf("\nThang %d thuoc qui 4", thang);
*/

// Cach 2:   	
    switch(thang)
    {
    case 1:
    case 2:
    case 3:
        printf("Thuoc qui 1"); break;
    case 4:
    case 5:
    case 6:
        printf("Thuoc qui 2"); break;
    case 7:
    case 8:
    case 9:
        printf("Thuoc qui 3"); break;
    case 10:
    case 11:
    case 12:
        printf("Thuoc qui 4"); break;
        
    default:    
        printf("Nhap vao thang sai. Vui long nhap lai!");
    }    
}
