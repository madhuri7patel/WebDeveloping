#include <stdio.h> 

struct reverse
{
    int A[10];
    int size;
    int length;
};

void Display(struct reverse a)
{
    int i;
    printf("\nElements are\n");
    for(int i =0;i<a.length;i++){
        printf("%d \n",a.A[i]);
    }
};

void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Reverse(struct reverse *a){
    int i,j;
    for(i=0,j=a->length-1;i<j;i++,j--){
        swap(&a->A[i],&a->A[j]);  
    }
}


int main(){
    struct reverse a = {{2,3,4,5,6},10,5};
    
    Reverse(&a);
    Display(a);

    return 0;
}