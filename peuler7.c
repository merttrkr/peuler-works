#include <stdio.h>
#include <math.h>
int main(){
    int m=0;
    int i,j;
    int n =0;

    for (i = 3; n <10000 ; i++) {

        for (j = 2; j <i ; j++) {

            if (i%j==0){
                m++;
            }
        }
        if(m==0){
            printf("%d ",i);
            n++;
        }
        m=0;
    }
    return 0;
}
