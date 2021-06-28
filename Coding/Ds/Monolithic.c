#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
    int len=0,breadth = 0;
    printf("Enter len and breadth");
    cin>>len>>breadth;

    int area = len*breadth;
    int peri = 2*(len+breadth);

    printf("Area=%d\nPerimeter=%d\n",area,peri);

    return 0;

};