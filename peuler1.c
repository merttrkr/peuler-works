#include <stdio.h>
int main(){

    int i;
    int y =0;
    for (i = 0; i <1000 ; i++) {

if (i%3==0|| i%5==0 ){
    y=i+y;
}

    }
    printf("%d",y);
    return 0;
}
