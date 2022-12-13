// Viet chuong trinh tinh tong S cac gia tri le nguyen duong nho hon N
#include<stdio.h>

int main() {
    int S, N, i;
    S = 0;
    printf("Gia tri N= ");
    scanf("%d", &N);
    
    for(i=1; i<N; i++){
        if(i%2!=0){
         S = S+i;
        }
    }
    printf("\nS= %d", S);
    
} 
