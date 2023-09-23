//write a code of making and inserting and displaying linked list

#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

void display();

struct node{

    int info;
    struct node*next;

}*begin1;





void insert(int n);
int main(){

    int n;
    cout<<"\n Enter a number of nodes:";
    cin>>n;
    insert(n);
    cout<<"\n The linked list is :";
    display();
    return 0;

}



void insert(int n){

    struct node *new_node, *ptr;
    int num,i;
    begin1= (struct node*) malloc(sizeof(struct node));

    if(begin1 ==NULL){
        cout<<"\n Memory cannot be allocated:";
    }

    else{
        cout<<"\n input data for node 1:";
        cin>>num;
        begin1 ->info = num;
        begin1 ->next =NULL;
        ptr = begin1;
        for(i=2; i<=n; i++){
            new_node = (struct node*)malloc(sizeof(struct node));
            if(new_node ==NULL){
                cout<<"\n Memory cannot be allocated";
            }
            else{
                cout<<"\n input data for node"<<i<<":";
            }

            cin>>num;
            new_node ->info = num;
            new_node -> next =NULL;
            ptr ->next =new_node;
            ptr =ptr ->next;

        }
    }
}





void display(){

    struct node*ptr;
    if(begin1 == NULL){
        cout<<"\n Link list is empty";

    }
    else{
        ptr =begin1;
        while(ptr -> info != NULL){
                cout<<ptr->info<<" ";
                ptr =ptr->next;
        }
    }
}


