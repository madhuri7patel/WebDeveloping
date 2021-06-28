#include <stdio.h> // insert(4,15) 4 is the index,15 is the x.

struct insertarray // structure may hm alag alag datatype ko jaise srting int float ek hi naam se grouped krke rakh skte h.
{
    int A[10];
    int size;
    int length;
};

void Display(struct insertarray a)
{
    int i;
    printf("\nElements are\n");
    for(int i =0;i<a.length;i++){
        printf("%d \n",a.A[i]);
    }
};

void Append (struct insertarray*a,int x)
{
    if(a->length<a->size) a->A[a->length++]=x; // this condition check space is blamk or not.
};

void Insert (struct insertarray*a, int index,int x){
    int i;
    if(index>=0 && index <=a->length){
        for(i=a->length;i>index;i--){
            a->A[i]=a->A[i-1];
            a->A[index]=x;
            a->length++;
        }
    }
}

int Delete (struct insertarray*a,int index){
    int x=0;
    if(index>=0  && index<a->length){
        x=a->A[index];
        for(int i =index;i<a->length-1;i++){
            a->A[i]=a->A[i+1];   // this code is shift all ghe the element.amd arrow use because call by adresss.
            a->length--;
            return x;
        }
    }

    return 0;
}
void Swap(int* x,int* y){
    int temp;
    temp=*x;  // this swap method use tranpons this method use element find out ulte sidhe kahi se bhi.
    *x=*y;
    *y=temp;
}

int LinearSearch(struct insertarray a,int key){
    int i;
    for(int i =0;i<a.length;i++){ 
        if(key==a.A[i]){
            return i; // this code show element is found.if(key==a->A[i]) swap(&arr->A[i],&a->A[i-1]);
        }
        return-1; // this code show element is not found. and this code is not use > beacuse call by value not adress.
    }
}

int BinarySearch(struct insertarray a, int key){
    int low,midum,high;      //mid(l+h)/2
    low=0;
    high = a.length-1; // beczuse also check last element for the list.

    while(low<=high){
        midum=(low+high)/2;
        if(key==a.A[midum]){
            return midum;}
            else if(key<a.A[midum]){
                high=midum-1;
                
            }
             else{
                    low=midum+1;
                       
                   
                }
    }
                return -1;
}

 int main(){
     struct insertarray a = {{2,3,4,5,6},10,5};

        printf("%d\n", LinearSearch(a,3));

        printf("%d\n",BinarySearch(a,4));
      //  printf("%d \n", Delete(&a,3));
     //   Insert(&a,4,10);
      //  Append(&a,10);
        Display(a);

        return 0;
 }