#include <iostream>

using namespace std;

void move(){
    bool error = true;
    
    if(error){
        throw "6789yguhk";
    }
}

int main(){
    try
    {
        move();
    }
    catch(int e){
        cout<<"Error code(int):" <<e<<endl; // this type code is wtite for int error.
    }
    catch( char const *e){
         cout<<"Error message(char*):" <<e<<endl; // this type code is write string.
    }
     catch( string e){
         cout<<"Error message(string):" <<e<<endl; // this type code is write string.
    }


    return 0;
    
    
}