#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x;
};


int main(){
       
        struct Rectangle r1 = {10,6};

        r1.length= 15;
        r1.breadth=56;

        cout<<r1.length<<endl;
        cout<<r1.breadth<<endl;

      //  printf("%d",sizeof(r1));
        return 0;
    }