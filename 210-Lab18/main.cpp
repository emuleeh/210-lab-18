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
    
    
    
}
