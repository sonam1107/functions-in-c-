#include<iostream>
using namespace std;

    int a=10;
    int & num(){

        return a;
    }

int main(){

    num()=12;
    num()=14;
    cout<<num()<<endl;

    return 0;
}