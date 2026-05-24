#include<iostream>
using namespace std;

    int  num(int a,int b, int c=10)
    {
         return a+b*c;    
        
    }

int main(){

    int a=3, b=5;
    cout<<num(a,b)<<endl;     // here c is a default argument and its value is 10

    return 0;
}