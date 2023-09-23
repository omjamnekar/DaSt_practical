#include <iostream>
#include <cstdlib>
using namespace std;

#define max 5
int front1 = -1, rear = -1;
int q[max];

void insert_rear() {
    int val;
    cout << "\nEnter value: ";
    cin >> val;
    if ((rear + 1) % max == front1) {
        cout << "Queue is full" << endl;
    } else if (rear == -1) {
        rear = front1 = 0;
        q[rear] = val;
        cout << "Insertion successful" << endl;
    } else {
        rear = (rear + 1) % max;
        q[rear] = val;
        cout << "Insertion successful" << endl;
    }
}

void insert_front() {
    int val;
    cout << "\nEnter value: ";
    cin >> val;
    if ((rear + 1) % max == front1) {
        cout << "Queue is full" << endl;
    } else if (front1 == 0 && rear != max - 1) {
        front1 = max - 1;
        q[front1] = val;
        cout << "Insertion successful" << endl;
    } else {
        front1 = (front1 - 1 + max) % max;
        q[front1] = val;
        cout << "Insertion successful" << endl;
    }
}

void delete_front() {
    if (front1 == -1) {
        cout << "Queue is empty" << endl;
    } else if (front1 == rear) {
        int var = q[front1];
        front1 = rear = -1;
        cout << "Deleted value: " << var << endl;
    } else {
        int var = q[front1];
        front1 = (front1 + 1) % max;
        cout << "Deleted value: " << var << endl;
    }
}

void delete_rear() {
    if (rear == -1) {
        cout << "Queue is empty" << endl;
    } else if (front1 == rear) {
        int var = q[rear];
        front1 = rear = -1;
        cout << "Deleted value: " << var << endl;
    } else {
        int var = q[rear];
        rear = (rear - 1 + max) % max;
        cout << "Deleted value: " << var << endl;
    }
}

void display() {
    if (front1 == -1) {
        cout << "Queue is empty" << endl;
    } else {
        int i = front1;
        cout << "Queue is: ";
        while (i != rear) {
            cout << q[i] << " ";
            i = (i + 1) % max;
        }
        cout << q[rear] << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\nDouble Ended Queue" << endl;
        cout << "1. Insert from rear \t 2. Insert from front" << endl;
        cout << "3. Delete from rear \t 4. Delete from front" << endl;
        cout << "5. Display \t 6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert_rear();
                break;
            case 2:
                insert_front();
                break;
            case 3:
                delete_rear();
                break;
            case 4:
                delete_front();
                break;
            case 5:
                display();
                break;
            case 6:
                break;
            default:
                cout << "\nInvalid choice" << endl;
        }
    } while (choice != 6);

    return 0;
}
