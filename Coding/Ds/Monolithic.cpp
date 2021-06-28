#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
    int len=0,bre = 0;
    printf("Enter len and bre");
    cin>>len>>bre;

    int area = len*bre;
    int peri = 2*(len+bre);

    printf("Area=%d\nperimeter=%d\n",area,peri);

    return 0;

}