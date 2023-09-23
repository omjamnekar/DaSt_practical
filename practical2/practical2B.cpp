//write a program to store an element in 1-D array and program binary search

#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int i,arr[20],j,mid,n,num,temp,start,end1,flag=0;


    cout<<"Enter a number for length of array:";
    cin>>n;



    for(i=0;i<n; i++){
        cout<<"Enter a number"<<i+1<<":";
        cin>>arr[i];
    }


    cout<<"Enter a number to be search:";
    cin>>num;
    start= 0;
    end1 =n-1;

   for(i=0; i<n; i++){
        for(j=i+1 ; j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }

    while(start<=end1){
        mid =(start+end1)/2;
        if(num ==arr[mid]){
            flag=1;
            cout<<"binary search is successful \n";
            cout<<"desired element is found at"<<mid+1<<"\n";
            break;
        }
        if(num > arr[mid]){
            start = mid+1;
        }
        else{
            end1=mid+1;
        }
    }
        if(flag ==0){
            cout<<"the element is not found in array";
        }

}
