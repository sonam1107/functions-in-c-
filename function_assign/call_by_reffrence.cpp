#include<iostream>
using  namespace std;

// call by address or call by reference
// void change(int *a){
//     *a=*a+20;
//     cout<<"a: "<<*a <<endl;
// }

// .................                ..............................                .......................

    // int multiply(int &a, int &b){
    //     int result = a * b;
    //     a=a+10;
    //     return result;
    // }
// ....................              ...................................            ..........................

// void swap(int &a, int &b){
//     int temp =a;
//     a=b;
//     b= temp;

// }


   int add(int &a, int &b){
    a=a+10;
    return a+b;

   }
int main(){
    // int num=100;
    // cout<<"num before change: "<<num <<endl;
    // cout<<"after change: "<<endl; 
    // change(&num);
    // cout<<"num after change: "<<num <<endl;
    // int a=10;
    // int &b=a; // reference variable
    // b=b+40;
    // cout<<"a: "<<a <<endl;

//....................... .................... ........................... .............................

    // int a,b;
    // cin>>a>>b;
    // cout<<"before multiplication: "<<a<<" "<<b<<endl;
    // cout<<"after multiplication: "<<multiply(a,b)<<endl;
    // cout<<a<<" "<<b;

//........................                ............               ...............................

    // int x=12; int y=2;
    // swap(x,y);
    // cout<<x<<" "<<y<<endl;

    int a, b;
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<add(a,b)<<endl;


    return 0;
}