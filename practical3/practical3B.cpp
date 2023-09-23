
// write a program for addition of two matrix

#include<iostream>
#include<conio.h>
using namespace std;
void cin1(int mar1[20][20],int r,int c);
void cout1(int mar1[20][20],int r,int c);

int main(){

    int i,j,mar1[20][20], max1[20][20],mar2[20][20],r,c;

    cout<<"Enter a number of rows:";
    cin>>r;
    cout<<"Enter a number of columns:";
    cin>>c;
    cout<<"Enter a values for Matrix 1:\n";
    cin1(mar1,r,c);
    cout<<"Enter a values for Matrix 2:\n";
    cin1(mar2,r,c);
    cout1(mar1,r,c);
    cout<<"\n";
    cout1(mar2,r,c);

     for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            max1[i][j]=mar1[i][j] *mar2[i][j];
        }
    }

    cout<<"the Multiplication of two matrix is:";
    cout<<"\n";
    cout1(max1,r,c);
}



void cin1(int mar1[20][20],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter value for ["<<i<<"]["<<j<<"]:";
            cin>>mar1[i][j];
        }
    }

}


void cout1(int mar1[20][20],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mar1[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
