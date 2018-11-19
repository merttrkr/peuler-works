#include <stdio.h>
int main(){
    int pal,n,x1,x2,i;
    int t =0;
    x1=999;
    x2=999;
    for (i = 0; i <1000; i++) {
        t=0;
        pal=x1*x2;
        n=pal;
        while(pal!=0){
            t=t*10;
            t=t+pal%10;
            pal=pal/10;
        }
        if(n==t){
            printf("%d ",n);
            x2--;
            if(x2==900){
                x2=x1;
                x1=x1-1;

            }
        }
        else{
            x2--;
            if (x2==900){
                x2=x1;
                x1=x1-1;
            }
        }
    }

    return 0;
}
