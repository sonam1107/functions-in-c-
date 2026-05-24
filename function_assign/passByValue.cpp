#include<iostream>
using namespace std;

        int multiply(int a, int b){
            int product=a*b;
            cout<<"product is :"<<product<<endl;
            return product;
        }

int main(){

    int a = 5, b =30;
    int result= multiply(a,b);
    cout<<result<<endl;
    cout<<"a not changed :"<<a<<endl;
    cout<<"also b not changed :"<<b<<endl;   


    return 0;
}