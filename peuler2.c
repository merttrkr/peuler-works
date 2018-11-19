#include <stdio.h>
int main(){

    int i,third;
    int y =0;
    int first=1;
    int second = 1;

    for ( i = 1; first <4000000 ; i++) {

        third = first + second;
        second=first;
        first=third;
        if(first%2==0){
            y=first+y;

        }

    }
    printf("%d ",y);
    return 0;
}
