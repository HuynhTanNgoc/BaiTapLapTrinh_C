//Tim uoc chung lon nhat cua hai so nguyen duong a va b.
#include<stdio.h>
#include"math.h"
int main() {
	//Khai bao bien
    int a, b, UCLN;
    scanf("%d%d", &a, &b);
    a=abs(a); // Tra ve gia tri tuyet doi cua a
    b=abs(b);
    //TH1
    if(a==0 || b==0){
    	UCLN = (a+b);
    	
   	}else if(a!=0 && b!=0){
	//TH2   	
   		while(a!=b){ //Vong lap while se thuc hien phep tinh phia sau no cho den khi a==b. 
   			if (a>b)
   				a = a-b;
			   
   			else //(b>a)
   				b=b-a;	   
		}	
		UCLN = a; //hoac cung co the gan gia tri UCLN = b deu duoc.
	}
	printf("UCLN = %d", UCLN);
}
