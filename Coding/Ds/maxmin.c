#include <stdio.h> 

struct maxmin 
{
    int A[10];
    int size;
    int length;
};

void Display(struct maxmin a)
{
    int i;
    printf("\nElements are\n");
    for(int i =0;i<a.length;i++){
        printf("%d \n",a.A[i]);
    }
};

int Get(struct maxmin a,int index){
    if(index>=0 && index<a.length){
        return a.A[index];

        return -1;
    }  
} 
void Set(struct maxmin *a, int index, int x){
    if(index>=0 && index<a->length){
        a->A[index] = x;  // change the value given index.  
    }
}

int Max(struct maxmin a){
    int max =a.A[0];
    int i;
    for(int i =0;i<a.length; i++){
        if(a.A[i]>max){
            max = a.A[i];
        }
    }
     return max;
}

int Min(struct maxmin a){
    int min =a.A[0];
    int i;
    for(int i =0;i<a.length; i++){
        if(a.A[i]<min){
            min = a.A[i];
        } 
    }
     return min;
}
int Sum(struct maxmin a){
    int s=0;
    int i;
    for(int i=0;i<a.length;i++){
        s+=a.A[i];
    }
    return s;
}

float Avg(struct maxmin a){
    return (float)Sum(a)/a.length;
}

int main(){
    struct maxmin a ={{2,3,4,5,6},10,5};

  //  printf("%d \n",Get(a,2));

 //   Set(&a,0,15);

  //    printf("%d \n",Max(a));

  //   printf("%d \n",Min(a));

//  printf("%d\n",Sum(a));

  printf("%f\n",Avg(a));

    Display(a);
    return 0;
}