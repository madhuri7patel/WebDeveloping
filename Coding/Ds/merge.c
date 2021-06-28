#include <stdio.h> 

struct merge 
{
    int A[10];
    int size;
    int length;
};

void Display(struct merge a)
{
    int i;
    printf("\nElements are\n");
    for(int i =0;i<a.length;i++){
        printf("%d \n",a.A[i]);
    }
};
void Merge(struct merge *a,struct merge *b){
    int i,j;
  //  struct merge *c3 =(struct merge *)
//}

 int main(){
     struct merge a = {{2,3,4,5,6},10,5};
     struct merge b = {{3,4,7,18,20},10,5}
  //   struct merge *c3;

     //  Display(a);

        return 0;
 }