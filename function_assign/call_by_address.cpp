#include <iostream>
using namespace std;

// void add(int *a, int *b){
//     *a=*a+2;
//     int sum = *a+*b;
//     cout<<"sum is:"<<sum<<endl;
// }

    int swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b= temp;
        return temp;
    }


    int main(){
        // int a=44, b=3;
        // add(&a,&b);
        // cout<<"a :"<<a<<endl;


        int a,b;
        cin>>a>>b;
        cout<<"before swapping: "<<a<<" "<<b<<endl;
        swap(&a,&b);
        cout<<"after "<<a<<" "<<b<<endl;
        cout<<a;


        return 0;

    }