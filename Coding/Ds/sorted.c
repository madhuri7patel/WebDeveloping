#include <stdio.h> 

struct sorted
{
    int A[10];
    int size;
    int length;
};

void Display(struct sorted a)
{
    int i;
    printf("\nElements are\n");
    for(int i =0;i<a.length;i++){
        printf("%d \n",a.A[i]);
    }
};


void InsertSort(struct sorted *a, int x){
    int i=a->length-1;
    if(a->length==a->size){
        return;
    }
    while( i>=0 && a->A[i]>x){
            a->A[i+1]=a->A[i];
            i--;
    }
    a->A[i+1]=x;
    a->length++;
}

int isSorted(struct sorted a){
    int i;
    for(int i =0;i<a.length-1;i++){
        if(a.A[i]>a.A[i+1]){
            return 0;
        }
        return 1;
    }
}


// void Swap(int* x,int* y){
   //  int temp;
    // temp=*x;  // this swap method use tranpons this method use element find out ulte sidhe kahi se bhi.
    // *x=*y;
    // *y=temp;
// }
// void Rearrange(struct sorted *a){//
   // int i,j;//
    //i=0;//
    //j=a->length-1;//

    // while(i<j){
        // while(a->A[i]<0)i++;//
        // while(a->A[i]>=0)j--;//
        // if(i<j)Swap(&a->A[i], &a->A[j]);
    //}//
//}
int main(){
    struct sorted a ={{2,-3,25,10,-15,-7},10,5};

    // Rearrange(&a);

    printf("%d \n",isSorted(a));

  //  InsertSort(&a,21);

  Display(a);
    return 0;
}