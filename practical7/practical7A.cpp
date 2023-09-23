
#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;




class queue{
    int arr[3];
    int rear,front1;
    public:
        queue(){
            rear =-1;
            front1=-1;
        }


void insert(int x){
    if(rear >=2){
        cout<<"\n Queue Overflow";
        front1 =rear= -1;
        return;

    }
    arr[++rear] =x;
}

void delet(){

    if(front1 ==rear){
        cout<<"\n Queue UnderFlow";

    }
    else{

    cout<<"\n Delete element"<<arr[front1];
    }
}


void display(){
if(rear == front1){
    cout<<"Queue is Empty"<<endl;
    return;
}
for(int i =front1 +1;i<=rear;i++ )
    cout<<arr[i]<<" ";

cout<<endl;
}

};

int main(){
    int ch,num;
    queue q;
    while(1){
       cout<<"\n 1.Insert \n 2.Delete \n 3.Display \n 4.exit" <<endl;
       cout<<"Enter your choice:";
       cin>>ch;
       switch(ch){

    case 1:
        cout<<"Enter a value to insert:";
        cin>>num;
        q.insert(num);
        break;
    case 2:
        q.delet();
        break;
    case 3:
        q.display();
        break;
    case 4:
        exit(0);
    default:
        cout<<"\n Invalid choice! Please try again"<<endl;
       }

    }
    return 0;
}
