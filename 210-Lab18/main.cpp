//COMSC 210 | Lab 18 |Emily
#include <iostream>
using namespace std;

//Struct for node containing a rating and comment
struct Node {
    float rating;
    string comment;
    Node* next;
};

//function prototype for function to output list
void output(Node *);

int main() {
    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;
    cout << "Choice: ";
    int choice;
    cin >> choice;
    
    Node *head = nullptr;
    Node *newVal = new Node;
    if (choice == 1) {
        //add node at head
        if (!head) {
            head = newVal;
            newVal->next = nullptr;
            cout << "Enter review rating 0-5: ";
            cin >> newVal->rating;
            cout << "Enter reviewer comments: ";
            cin >> newVal->comment;
        }
        else {
            newVal->next = head;
            cout << "Enter review rating 0-5: ";
            cin >> newVal->rating;
            cout << "Enter reviewer comments: ";
            cin >> newVal->comment;
            head = newVal;
            }
    }
    else {
        //add node at tail
        Node *newVal = new Node;
        if (!head) {
            head = newVal;
            newVal->next = nullptr;
            cout << "Enter review rating 0-5: ";
            cin >> newVal->rating;
            cout << "Enter review comments: ";
            cin >> newVal->comment;
        }
    }
    //output linked list
    output(head);
}

//function to output linked list
void output(Node *head) {
    if (!head) {
        cout << "No review to display.\n" << endl;
        return;
    }
    //traverse linked list to output nodes
    Node *current = head;
    int count = 1;
    while (current) {
        cout << "Review #" << count << ": ";
        cout << current->rating << " " << current->comment << endl;
        current = current->next;
        count++;
    }
    cout << endl;
}
