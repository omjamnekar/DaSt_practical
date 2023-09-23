// write a program to implement the concept of queue push(),pop(),display(),using link list

#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

struct node{

    int info;
    struct node *next;
};
struct node *front1=NULL;
struct node *rear=NULL;
struct node *temp;


void insert()
{

    int val;
    cout<<"Enter a element to be added:";
    cin>>val;

    if(rear == NULL){
        rear = (struct node*)malloc(sizeof(struct node));

        rear ->next =NULL;
        rear ->info = val;
        front1 =rear;
    }
    else{
        temp=(struct node*)malloc(sizeof(struct node));
        temp ->next =NULL;
        temp ->info =val;
        rear ->next =temp;
        rear = temp;
    }
}

void delete1(){
    temp =front1;
    if(front1 == NULL){
        cout<<"Queue Underflow"<<endl;
        return;
    }
    else{
        if(temp ->next!=NULL){

            temp =temp->next;
            cout<<"Element delete from queue is:"<<front1->info<<endl;
            free(front1);
            front1 =NULL;
            rear=NULL;
        }

    }

}

void display(){
    temp =front1;
     if(front1 ==NULL && rear == NULL){
        cout<<"Queue is empty";

     }
     else{

     cout<<"Queue element are:";
     while(temp!=NULL){
        cout<<temp->info<<" ";
        temp =temp ->next;
     }
     cout<<endl;
     }
}


int main(){
    int ch;
    cout<<"1. Insert "<<endl;
    cout<<" 2.Delete all element of queue"<<endl;
    cout<<" 3.display all element of queue"<<endl;
    cout<<" 4.exit"<<endl;


    do{

        cout<<"\n Enter a choice:";
        cin>>ch;
        switch(ch){
        case 1:
            insert();
            break;
        case 2:
            delete1();
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
    }while(ch!= 4);
    return 0;
}







