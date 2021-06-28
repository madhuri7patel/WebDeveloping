#include <stdio.h>
#include <stdlib.h>
struct loweTM{
    int *A;
    int n;
};


  void Set(struct loweTM *l,int i,int j,int x){
     if(i>=j){
         l->A[i*(i-1)/2+j-1]=x;
     }

}
int Get(struct loweTM l,int i, int j){
    if(i>=j){
        return l.A[i*(i-1)/2+j-1];

    }else{
        return 0;
    }
    
}

void Display(struct loweTM l){
     int i, j;
     for( i=1;i<=l.n;i++){
         for(j=1;j<=l.n;j++){
             if(i>=j){
                 printf("%d ",l.A[i*(i-1)/2+j-1]);
             }else{
                 printf("0 ");
             }

             printf("\n");
         }
     }
 }


int main(){
    struct loweTM l;
    int i,j,x;
    printf("Enter Dimension");
    scanf("%d" ,&l.n);
    l.A=(int*)malloc(l.n*(l.n+1)/2*sizeof(int));

    printf("enter all elements");
    for( i=1;i<=l.n;i++){
        for(j=1;j<=l.n;j++){
            scanf("%d",&x);
            Set(&l,i,j,x);
        }
    }

    printf("\n\n");
    Display(l);
    return 0;
}