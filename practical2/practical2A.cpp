// write program to store the element in 1-D array and program linear search

#include<iostream>

using namespace std;

int main(){

 int i,j,arr[20],search1,n,c=0;

  cout<<"Enter a number of length of the array:";
  cin>>n;

  for(i=0;i<=n;i++){
  cout<<"Enter a number:"<<i+1<<":";
  cin>>arr[i];
  }

  cout<<"Enter a number to be search:";
  cin>>search1;
  for(i=0; i<=n; i++){
    if(search1 ==arr[i]){

        cout<<"the "<<search1<<" is at "<<i+1<<" position";
        c++;
        break;
    }

 }


 if(c == 0)
    cout<<"the number is not found in array";

}
