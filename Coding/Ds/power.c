#include <stdio.h> //m ki power n =m*m*m..for n times.  formula= pow(m,n) = pow(m,n-1)*m. power for even number like 2power8 = (2power2)4 and power reduce half
// like (2*2)power4 and odd number 2 power9 = 2*(2power2)power4 not directly half power for odd number and directly half for even nimber

// power function = 

int power(int m, int n){
    if (n==0)
    return 1;
    return power(m,n-1)+m;
}

int power1(int m, int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return power1(m*m,n/2);
    return m*power1(m*m,(n-1)/2);
}

int main(){
    int r = power1(3,4);
    printf("%d" ,r);
    return 0;
}