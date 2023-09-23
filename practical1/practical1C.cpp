
// write a program to store element in 1-d ARRAY  print the element in the reverse order

#include<iostream>
using namespace std;

int main(){

    int i,n,arr[20];

    cout<<"Enter a length of the array:";
    cin>>n;


    for(i = 0; i<n; i++){
        cout<<"Enter a number:"<<i+1<<":";
        cin>>arr[i];
    }


     cout<<"The origin of the given number:";
   for(i = 0; i<n;i++){
        cout<<arr[i];
    }

    cout<<"\n";
    cout<<"The reverse of the given number:";
   for(i = n-1; i>=0;i--){
        cout<<arr[i];
    }


}
