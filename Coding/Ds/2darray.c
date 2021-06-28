#include <stdio.h> // int A[3][4] this is a declare 2d array.{1,2,3,4},{3,4,5,},{6,7,9} this is intialise 2d array.
#include <stdlib.h>

// acessing for 2darray use for loop two .

int main(){
    int A[3][4] ={{1,2,3,4},{3,4,5,6},{1,3,5,7}};
    int i,j;
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            printf("%d ",A[i][j]);
        }
    }
        
    
}