#include<iostream>
#include<cstdlib>

using namespace std;

struct node {
    int info;
    struct node* next;
} *begin1;

void display();
void reverse();
void insert(int n);

int main() {
    int n;
    cout << "Enter the number of nodes to be added: ";
    cin >> n;
    insert(n);

    cout << "\nThe linked list is: ";
    display();

    cout << "\nReversed linked list elements: ";
    reverse();
    display();

    return 0;
}

void insert(int n) {
    struct node* new_node, * ptr;
    int num, i;
    begin1 = NULL;

    if (begin1 == NULL) {
        cout << "Enter a number 1: ";
        cin >> num;
        begin1 = (struct node*)malloc(sizeof(struct node));
        begin1->info = num;
        begin1->next = NULL;
        ptr = begin1;

        for (i = 2; i <= n; i++) {
            cout << "Enter a number " << i << ": ";
            cin >> num;
            new_node = (struct node*)malloc(sizeof(struct node));

            if (new_node == NULL) {
                cout << "Link list is empty";
            }
            else {
                new_node->info = num;
                new_node->next = NULL;
                ptr->next = new_node;
                ptr = ptr->next;
            }
        }
    }
}

void reverse() {
    struct node* prev = NULL;
    struct node* current = begin1;
    struct node* next_node = NULL;

    while (current != NULL) {
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }

    begin1 = prev;
}

void display() {
    struct node* ptr = begin1;
    if (ptr == NULL) {
        cout << "Link list is empty";
    }
    else {
        while (ptr != NULL) {
            cout << ptr->info << " ";
            ptr = ptr->next;
        }
    }
}

