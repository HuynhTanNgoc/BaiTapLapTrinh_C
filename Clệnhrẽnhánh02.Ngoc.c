/*BTLT02:Viet chuong trinh nhap vao 2 so thuc. 
kiem tra xem chung co cung dau hay khong*/
#include<stdio.h>
int main() {
	//Khai bao bien
    float a, b;
    printf("Nhap vao hai so a va b: ");
    scanf("%f%f", &a, &b);
//Cach 1:    
   
  /*
    if(a>0 && b>0 || a<0 && b<0)  //Neu a va b cung lon hoac cung be hon 0 thi cung dau.
    	printf("%.1f va %.1f cung dau", a, b);
    	
    if (a<0 && b>0 || a>0 && b<0) 	//Neu a va b khong cung be hoac lon hon 0 thi khac dau.
		printf("%.1f va %.1f khac dau", a, b);	*/
		
//Cach 2:
    if(a*b>0) //Neu 2 so am nhan voi nhau thi cung ra so duong
        printf("\n%.1f va %.1f cung dau", a, b);
        
    else if(a*b<0) //Neu 1 so am va 1 so duong nhan nhau thi luon ra so am
        printf("\n%.1f va %.1f khac dau", a, b);
        
}
