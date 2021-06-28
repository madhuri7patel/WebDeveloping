#include <stdio.h> //sum of natural number using recursion(sum(n) =1+2+3+4+....(n-1)+n) or sum(n)=sum(n-1)+n.formula= n(n+1)/2

int sum (int n){
    if(n==0){
     return 0;
     return sum(n-1)+n;
    }
  
}

int Isum(int n){  // use for loop
    int s =0;
    int i;
    for ( i = 1; i <=n; i++)
    {
        s=s+i;
        return s;
    }
    
}

int main(){
    int r;
    r=sum(5)
   // printf("%d ",r);
   // return 0;
}