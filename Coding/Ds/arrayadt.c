#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[20];
    int size; 
    int length;
};
    void Display (struct Array a){
        int i;
        printf("\nElements are\n");
        for(int i=0;i<a.length;i++){
            printf("%d" ,a.A[i]);
        }
    }
int main(){
    struct Array a={2,3,4,5},20,5};
   // int n,i;
   // printf("Enter size of an array");
    //scanf("%d",&a.size);
    //a.A=(int*)malloc(a.size*sizeof(int));
    //a.length=0;

  //  printf("Enter number")
   // scanf("%d",&n);

   // for(int i =0;i<n;i++){
     //   scanf("%d",&a.A[i]);
        Display(a);

        return 0;
    


};
