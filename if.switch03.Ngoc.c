// Viết chương trình giải và biện luận phương trình bậc nhất ax + b = 0
#include<stdio.h>

int main() {
    
//khai bao bien
    float a, b, x;
    printf("Nhap vao a, b= ");
    scanf("%f%f", &a, &b);
    
// Xu ly va in ra ket qua.

  //Gom 2 truong hop a khac 0 va a bang 0	
     
    //Neu a khac 0 co 2 truong hop
    
     //TH1: b bang 0
    if(a!=0){
        if(b==0){
            printf("\n Ptrinh co nghiem x = 0");
        }
     //TH2: b khac 0 
	    else{
	        x = -b/a; 
	    	printf("\nPtrinh co nghiem x = %f", x);	 
	    }
    } 
	//Neu a bang 0 co 2 truong hop:
	if(a==0) {
    	//TH1 neu b bang 0.
	    if(b==0){
	    	printf("\nPtrinh vo so nghiem");
	    }
    	//TH2 neu b khac 0.	
	    else
	    	printf("\nPtrinh vo nghiem");		
	    
	    
	}
}
