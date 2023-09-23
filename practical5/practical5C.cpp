// write a program to search and display the element in a doubly linked list

#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

void display();
void search(int srch);
void create(int n);
struct node{

    int info;
    struct node *next;
    struct node *pre;
}*begin1,*end1;

int main(){

    int n,num;
    cout<<"Enter a length of the doubly link list:";
    cin>>n;
    create(n);
    cout<<"Enter a element to be search:";
    cin>>num;
    search(num);
    display();
    return 0;


}

void create(int n){

    struct node *new_node;
    int num,i;
    if(n>=1){
        begin1 =(struct node*)malloc(sizeof(struct node));
        if(begin1 !=NULL)
        {


        cout<<"Enter element [1]:";
        cin>>num;
        begin1 ->info =num;
        begin1 ->next=NULL;
        begin1 ->pre =NULL;
        end1= begin1;

        for(i=2;i<=n;i++){
            new_node= (struct node*)malloc(sizeof(struct node));
            if(new_node !=NULL){
                cout<<"Enter element ["<<i<<"]:";
                cin>>num;
                new_node ->info = num;
                new_node ->next = NULL;
                new_node ->pre =end1;
                end1->next = new_node;
                end1 =new_node;

            }
            else{
                cout<<"\n memory can not be allocated";
                break;
            }

        }
        }
        else{
             cout<<"\n memory can not be allocated";

        }


    }
}

void display(){

    struct node *ptr;
    if(ptr !=NULL){
        ptr = begin1;
        cout<<"\n All elements in list";
        cout<<"\n";
        while(ptr!=NULL){

            cout<<ptr->info<<" ";
            ptr =ptr ->next;
        }
    }
    else{
        cout<<"The doubly link list is empty";
    }
}


void search(int srch){
    int flag =0;
    struct node *ptr;
    if(begin1 !=NULL){
            ptr =begin1;
            while(ptr!=NULL){

        if(ptr->info == srch){

           cout<<"the search element found "<<srch;
           flag=1;
              break;
        }
        ptr=ptr->next;
          }

          if(flag ==0){
            cout<<"search element is not found";

          }
    }
    else{
        cout<<"memory is not allocated";

    }
}
