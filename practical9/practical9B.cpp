//write a program to implement selection sort

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

        int i,j,n,min,loc,temp,a[20];
        cout<<"Enter a number of elements:";
        cin>>n;

        cout<<"Enter a value in array:\n";
        for(i=0;i<n;i++){
            cin>>a[i];

        }


         cout<<"The original elements are:";
        for(i=0 ; i<n;i++){

            cout<<" "<<a[i];
        }

        for(i=0;i<n;i++){

          min = a[i];
          loc =i;

            for(j=i+1;j<n;j++){
                if(min> a[j]){
                    min = a[j];
                    loc =j;
                }

            }

            temp =a[i];
            a[i] = a[loc];
            a[loc] =temp;
        }

        cout<<"\nThe sorted elements are:";
        for(i=0 ; i<n;i++){

            cout<<" "<<a[i];
        }


}
