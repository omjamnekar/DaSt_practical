//perform push,pop,exit and display operation in STACK

#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
#define MAX 3
int stack[MAX],top=-1;


void push(int val){

    //step
    if(top== MAX -1 )
    {
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top =top +1;
        stack[top] =val;
    }
}

void pop(){

    if(top == -1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<"the Popped element is:"<<stack[top]<<endl;
        top--;
    }
}

void display()
{


    if(top>=0){
        cout<<"Stack element are:"<<endl;
        for(int i =top; i>=0;i--){
            cout<<stack[i]<<" ";
            cout<<endl;
        }
    }
    else{
        cout<<"Stack is Empty";
    }
}


int main(){

    int ch,val;
    cout<<"1.push on element in stack"<<endl;
    cout<<"2.pop on element in stack"<<endl;
    cout<<"3.display the stack"<<endl;
    cout<<"4.exite"<<endl;

    do{

        cout<<"\n Enter a value:";
        cin>>ch;
        cout<<endl;
        switch(ch){

        case 1:
            cout<<" Enter the value to be pushed:";
            cin>>val;
            push(val);
            break;

        case 2:
           pop();
           break;

        case 3:
            display();
            break;

        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    while(ch!=4);
    return 0;
}
