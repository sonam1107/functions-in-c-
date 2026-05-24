#include<iostream>
using namespace std;

   inline  void display(){
        cout<<"inline function calling "<<endl;
    }
int main(){
    display();
    display();
    display();
    
    return 0;
}