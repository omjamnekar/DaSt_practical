//write a program to implement insertion sort
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

        int i,j,temp,n,a[20];

        cout<<"Enter a number of element:";
        cin>>n;
        cout<<"Enter a element:";
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=2 ; i<=n;i++){

             temp=a[i];
             j = i-1;
            while((temp <a[j])&& (j>=0)){
                    a[j+1] = a[j];
                    j=j-1;
            }
            a[j+1] =temp;
        }
    for( i = 0 ; i< n; i++){
        cout<<" "<<a[i];
    }


        }
