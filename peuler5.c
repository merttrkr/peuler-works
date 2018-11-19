#include <stdio.h>
int main(){
	int i;
    for (i = 0; i < 1000000000; i++) {
        if(i%5==0 && i%7==0 && i%16==0 && i%9==0 && i%11==0 &&i%13==0 && i%17==0 && i%19==0){
          printf("%d ",i);
        }
    }

    return 0;
}
