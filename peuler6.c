#include <stdio.h>
#include <math.h>
int main(){
    int y=0;
    int x=0;
    int i,n;
    for (i = 1; i <=100 ; i++) {
        y=i+y;
    }
     y = pow(y,2);
    for (n = 1; n <=100 ; n++) {
        x=x+pow(n,2);
    }
    printf("%d",y-x);
    return 0;
}
