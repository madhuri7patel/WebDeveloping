#include <stdio.h> // how to increase size of array.

int main(){
    int*p,*q;

    p=(int *)malloc(5*sizeof(int));
    p[0]=3;p[1]=5; p[4];
    
    q=(int*) malloc(10*sizeof(int));
    for(int i=0;i<4;i++)
    q[i]=p[i]; // copying the element 

    for(int i=0;i<4;i++)
    printf("%d \n",p[i]);

    return 0;

}