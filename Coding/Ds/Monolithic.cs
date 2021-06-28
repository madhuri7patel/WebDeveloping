#include<iostream>
#include <stdio.h>

using namespace std;

int area (int len,int breadth){
    return len*breadth;
}

int Perimeter(int length, int breadth){
    int p;
    p=2*(len+breadth);
    return p;
}
int main(){
    int len=0,breadth = 0;
    printf("Enter len and breadth");
    cin>>len>>breadth;

    int a = area(len,breadth);
    int peri = Perimeter(len,breadth);

    int area = len*breadth;
    int peri = 2*(len+breadth);

    printf("Area=%d\nPerimeter=%d\n",a,peri);

    return 0;

};