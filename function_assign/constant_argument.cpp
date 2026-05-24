#include<iostream>
using namespace std;


    int  num(const int c){

     //   c=10; error: assignment of read-only parameter 'c'
        return c;
        
    }

int main(){

      cout<<num(5)<<endl;

    return 0;
}