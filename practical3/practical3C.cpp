// write a code to transpose of matrix

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int i,j,r,c,arr[5][5],temp[5][5];
    cout<<"Enter a number rows of matrix:";
    cin>>r;
    cout<<"Enter a number column of matrix:";
    cin>>c;
    cout<<"Enter a number in matrix:"<<endl;
    for(i=0;i<r; i++){
            for(j=0;j<c;j++){

        cout<<"Enter a number at ["<<i+1<<"]["<<j+1<<"]:";
        cin>>arr[i][j];
            }}


            for(i=0;i<r; i++){
            for(j=0;j<c;j++){

            temp[i][j] = arr[j][i];
            }

  }
          for(i=0;i<r; i++){
            for(j=0;j<c;j++){

       cout<<arr[i][j]<<"\t";
            }
            cout<<"\n";
            }
cout<<"\n";
cout<<"the transpose of the matrix is:"<<endl;
          for(i=0;i<r; i++){
            for(j=0;j<c;j++){

       cout<<temp[i][j]<<"\t";
            }
            cout<<"\n";
            }

}


