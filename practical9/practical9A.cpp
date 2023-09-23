//write a program to implement  the bubble sort

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i,j,temp,n,a[20];
    cout<<"\n Enter a size of array:";
    cin>>n;

    cout<<"\n Enter the array element:";
    for(i =0;i<n;i++){
        cin>>a[i];

    }
     for(j=1 ;j<=(n-1);j++){
        if(a[j]>a[j+1]){
            temp =a[j];
            a[j]= a[j+1];
            a[j+1]=temp;

        }
    }


    cout<<"Array after bubble sort:";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    return 0;
}
