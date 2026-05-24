  #include<iostream>
  using namespace std;

        int number(int arr[],int size){
            for(int i=0;i<size;i++){
             cout << arr[i] << " ";
            }
        }


  int main(){
      int num[]={30,2,33,21,3,11};
      int size=sizeof(num)/sizeof(int);
      number(num,size); 

    return 0;
  }
