//Viet chuong trinh giai va bien luan phuong trinh bat nhat ax+b=0
#include<stdio.h>
int main() {
	
	
    float a, b, x;
    printf("Nhap vao a, b= ");
    scanf("%f%f", &a, &b);
    
	// Xu ly va in ra ket qua.
//Gom 2 truong hop a khac 0 va a bang 0	

	if(a!=0) x = -b/a; //Neu a khac khong thi ptr co 1 nghiem
		printf("\nPtrinh co nghiem x = %f", x);	 
	
	if(a==0) //Neu a bang 0 thi ptr co 2 truong hop:
	
	//TH1 neu b bang 0.
		if(b==0)
		printf("\nPtrinh vo so nghiem");
		
	//TH2 neu b khac 0.	
		else if(b!=0)
		printf("\nPtrinh vo nghiem");		
	
}
