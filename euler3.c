#include <stdio.h>
int main(){
    int i;
    int m=0;
    int n =0;
    int j =2;
    for (i = 2; i <600851475143 ; i++) {
if(600851475143%i==0){
    n=i;
    for (j = 2; j <i ; j++) {
        if(n%j==0){
            m++;
        }
    }
    if(m==0){
        printf("%d ",n);
    }
}

    }

    return 0;
}
