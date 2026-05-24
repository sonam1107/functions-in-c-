#include<iostream>
using namespace std;

void add(int a, int b){
    a=a+40;
    cout<<"a: "<<a <<endl;
    int sum = a+b;
    cout<<"sum: "<<sum<<endl;
}

int main(){

      int a= 10;
      int b =30;
      add(a,b);
      cout<<"a: "<<a <<endl;
   

      return 0;
}