#include <stdio.h> //5! = 1*2*3*4*5=120 formula=fact(n-1)*n.

int fact(int n)
    {
        if(n==0)
        return 1;
        return fact(n-1)*n;
    
    }

    int Ifact(int n){ // using for loop
        int f = 1;
        int i;
        for(i=1;i<=n;i++)
        f=f*i;
        return f;
    }

    int main(){
        int r;
        r=Ifact(4);
        printf("%d",r);
        return 0;
    }