/*BTTL01: Viet chuong trinh tim so lon nhat va so nho nhat
trong 3 so thuc a, b, c.
*/
#include<stdio.h>
int main() {
    float a, b, c, max, min;
    printf("Nhap 3 so a , b, c:");
    scanf("%f%f%f", &a, &b, &c);
    
    max = min = a;
    
    //Tim so lon nhat
    if(b>max) max = b;
    if(c>max) max = c;
    printf("\nSo lon nhat la: %.1f", max);	
	
    //Tim so nho nhat	
    if(b<min) min = b;
    if(c<min) min = c;
    printf("\nSo nho nhat la: %.1f", min);	
}
