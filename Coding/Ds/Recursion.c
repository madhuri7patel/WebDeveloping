#include <stdio.h>

void fun(int n){
    if(n>0){
         fun(n-1); // y print krta hai sidhe number like 1,2,3,4
        printf("%d ", n);
         fun(n-1);// aur yhi cheij yaha likhdo to y print krta h ulte number like 4,3,2,1
       
    }
}
int main(){
    int x =4;
    fun(x); 
    return 0;
}