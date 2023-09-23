//write a program to create and display the element in a doubly link list
#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

struct node{

    int info;
    struct node *pre;
    struct node *next;
}*begin1,*end1;


void display();
void create(int n);

int main()
{
    int n;
        cout<<"Enter a length of doubly link list:";
        cin>>n;
        create(n);

        cout<<"Entered elements:";
        display();
}

void create(int n)
{
    struct node *new_node;
    int num ,i;
    if(n>=1){
        begin1 =(struct node*)malloc(sizeof(struct node));
        if(begin1 !=NULL){
            cout<<"\n Input data for need 1:";
            cin>>num;
            begin1 ->info = num;
            begin1 ->next =NULL;
            begin1 ->pre =NULL;
            end1 =begin1;
          for(i=2; i<=n;i++){
            new_node= (struct node*)malloc(sizeof(struct node));
            if(new_node !=NULL){
                cout<<"\n Input data for need "<<i<<":";
                cin>>num;
                new_node ->info =num;
                new_node ->next =NULL;
                new_node ->pre =end1;
                end1 -> next =new_node;
                end1 =new_node;
            }
            else{
                cout<<"\n Memory Cannot be allocated";
                break;
            }
          }
        }

        else{
            cout<<"\n Memory cannot be allocated";
        }
    }
}

void display(){

    struct node *ptr;
    if(begin1 !=NULL){

        ptr= begin1;
    while(ptr!=NULL){
            cout<<ptr->info<<" ";
            ptr= ptr->next;
    }


    }
    else{
        cout<<"\n List is empty";
    }
}
