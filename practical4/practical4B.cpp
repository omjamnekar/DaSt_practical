
//write a code of making and inserting and displaying linked list

#include<iostream>
#include<cstdlib>
using namespace std;
void display();
void insert(int n);
void search(int num,int i);
struct node{

    int info;
    struct node*next;
} *begin1;



int main(){


 int num,i,n,srch;
 cout<<"Enter a number of nodes:";
 cin>>n;
 insert(n);
 cout<<"Enter a number to be search:";
 cin>>srch;
 search(srch,n);
 cout<<" the element in link list is:";
 display();
 return 0;
 }


 void insert(int n){

    struct node  *new_node, *ptr;
    int num,i;

    begin1 =(struct node*)malloc(sizeof(struct node));

    if(begin1 == NULL){
           cout<<"\n Memory cannot be allocated:";
    }

    else{

    cout<<"Enter element in linkList 1:";
    cin>>num;
    begin1->info = num;
    begin1->next = NULL;
    ptr = begin1;
    for(i=2; i<=n;i++){
        new_node =(struct node*)malloc(sizeof(struct node));

        if(new_node ==NULL){

        cout<<"link list is empty";

        }
    else{
        cout<<"Enter element in linkList "<<i<<":";
        cin>>num;
       new_node->info = num;
       new_node->next = NULL;
       ptr ->next = new_node;
        ptr =ptr ->next;
    }
    }
    }
 }

 void display(){

    struct node*ptr;

    if(begin1 ==NULL){
        cout<<"There is no memory in linked list \n";
    }
    else{

    ptr =begin1;
    while(ptr->info!= NULL){
        cout<<ptr->info<<" ";
        ptr= ptr->next;
      }
    }

 }



void search(int num,int n){

    struct node*ptr;
    int flag =1,i;
    if(begin1 ==NULL){
        cout<<"link list is empty";
    }
    else{
        ptr = begin1;
       for(i=0;i<=n;i++){
        if(ptr->info == num){
            cout<<"the element is at position["<<i+1<<"]:"<<num<<endl;
            flag=0;
            break;
        }
       else{
        flag++;
       }
        ptr =ptr ->next;
       }
        if(flag ==n){
            cout<<"the link list is not have searching element";
        }
    }
}
