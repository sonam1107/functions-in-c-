#include <iostream>
using namespace std;

int add(const int a,int b=5){
    int sum =a+b;
   // b=2    error because b is constant and we cannot change the value of b
    return sum;
}


int main(){

  cout<<add(3,5)<<endl;
  cout<<add(5)<<endl;

    return 0;
}