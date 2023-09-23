//write a program to store the element in 1-D array perform sorting in acsending order

#include<iostream>
using namespace std;
#include<conio.h>
int main(){

    int arr[10],n,j,i,temp;
    cout<<"\n Enter the size of an Array:";
    cin>>n;

    for(i=0; i<n;i++){
        cout<<"\n Enter element["<<i+1<<"]:";
        cin>>arr[i];

    }

    cout<<"Unsorted array element are:";
    for(i=0; i<n ; i++){
        cout<<arr[i]<<'\t';

    }
    for(i=0; i<n; i++){
        for(j=i+1 ; j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }


    }
        cout<<"\n Sorting Array element are:";
        for(i=0;i<n;i++){
            cout<<arr[i]<<'\t';

        }

        return 0;
}
