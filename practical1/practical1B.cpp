//write a program to store the element in 1-D array and perform sorting  in descending order


#include<iostream>
using namespace std;

int main()
{

    int i,j,n,arr[20],temp;
    cout<<"Enter length of the Array:";
    cin>>n;


    for(i = 0; i<n;i++){
    cout<<"Enter a number "<<i+1<<":";
    cin>>arr[i];
    }

    cout<<"Unsorted list before Sortation:";
        for(i = 0; i<n;i++){
        cout<<arr[i];
    }

cout<<"\n";

    for(i=0; i<n ; i++){
        for(j=i+1 ; j<n;j++){
            if(arr[i]<arr[j]){
                temp =arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }

     cout<<"Sorted list in Descending order:";
        for(i = 0; i<n;i++){
        cout<<arr[i];
    }



}
