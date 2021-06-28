#include <iostream>

class diamat{
    int*A;
    int n;
    public:
    diamat(){
        n = 2;
        A = new int [2];
    }
    diamat(int n){
        this->n=n;
        A=new int [n];
    }
    
};