#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
        cout<<v.at(i)<< " "; // this knows where is element.

    }
    cout<<endl;
    
}
int main(){
    // ways to a  vector

    vector<int> vec1; //zero lemgth integar vector.
    vector<char> vec2(4); // 4 element character vextor. 

    int element, size = 5;
    for (int i = 0; i <4; i++)
    {
        cout<<"Enter the element to add this vector";
        cin>>element;
        vec1.push_back(element); // this method element is fillup.

    }
  //  vec1.pop_back();  this means given element 5 but print only 4 beacuse one element ko nikal lege.//
  display(vec1);
  vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,5, 566); // this iter add element first place then second place add so write the iter+1; 5is work 5 times add 566.
    display(vec1);
    
    return 0;
}