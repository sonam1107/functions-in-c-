#include <iostream>
using namespace std;

    int add(int a, int b){
        return a+b;
    }

    double add(int a, double b ){
        return a+b;
    }

int main(){
    cout<<add(4,5)<<endl;
    cout<<add(4,5.4)<<endl;
    
    return 0;
}