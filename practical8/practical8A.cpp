#include<iostream>
#include<conio.h>
using namespace std;


class queue{

    int *arr;
    int rear,front1;
    int MAX;
public:
    queue(int maxsize  =10);
    void addq(int data);
    int delq();
    void display();

};

queue::queue(int maxsize){

    MAX= maxsize;
    arr =new int[MAX];
    front1 =rear= -1;
    for(int i =0; i<MAX;i++){

        arr[i]=0;
    }
}

void queue ::addq(int data){
if((rear +1)%MAX == front1){

    cout<<"\n Queue is full";
    return;
}

    rear =(rear+ 1)%MAX;
    arr[rear] =data;
    if(front1 == -1){
        front1 =0;

    }
}

int queue::delq(){
    int num;
    if(front1== -1){
        cout<<"\n Queue is empty";
        return -1;
    }
    num = arr[front1];
    arr[front1] =0;
    if(front1 == rear){
        front1 =-1;
        rear =-1;

    }
    else{
        front1 =(front1 +1 )%MAX;

    }
    return num;
}

void queue::display(){
    cout<<"\n";
    for(int i =0; i<MAX ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    queue c(10);
    c.addq(10);
    c.addq(11);
    c.addq(12);
    c.addq(13);
    c.addq(14);
    c.addq(15);

    cout<<"\n Element in the circular queue are:";
    c.display();
    int i =c.delq();
    cout<<"\n Data Deleted is:"<<i;
    i = c.delq();
     cout<<"\n Data Deleted is:"<<i;
     cout<<"\n Element in the circular queue before deletion:";
     c.display();
c.addq(1);
c.addq(2);
c.addq(3);
c.addq(4);
c.addq(5);
cout<<"\n Element in the circular queue after addition:";
    c.display();
    return 0;
    }






