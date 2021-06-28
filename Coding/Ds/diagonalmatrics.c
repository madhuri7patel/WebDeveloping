#include <stdio.h> // all these element must be zero.
struct diagonalmatrics{
    int A[10];
    int n;
}

 Set(struct diagonalmatrics *m,int i,int j,int x){ // irow,j colum, x element.
    if(i==j){
        m->A[i-1]=x; // this formula acessing the element.
    }
}

int  Get(struct diagonalmatrics m ,int i,int j){
  if(i==j){
        return m.A[i-1];
    }else{              
        return 0;
    }
}
 void Display(struct diagonalmatrics m){
     int i, j;
     for(int i=0;i<m.n;i++){
         for(int j=0;j<m.n;j++){
             if(i==j){
                 printf("%d ",m.A[i-1]);
             }else{
                 printf("0 ");
             }

             printf("\n");
         }
     }
 }
int main(){
    struct diagonalmatrics m;
    m.n=4;
    Set(&m, 1,1,5);Set(&m, 2,2,8);Set(&m,3,3,9);Set(&m,4,4,12);
    printf("%d \n",Get(m,2,2));  

    Display(m);
    return 0;

}


