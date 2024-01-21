#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

Node* reverse(Node* head) {
    Node* curr = head;
    Node* forward = NULL;
    Node* prev = NULL;
    while (curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* add_two_elements(Node* l1, Node* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    l1 = reverse(l1);
    l2 = reverse(l2);

    Node* t1 = l1;
    Node* t2 = l2;
    Node* dummy = new Node(0); // Changed from -99 to 0
    Node* t3 = dummy;
    int sum = 0, carry = 0, digit = 0;

    while (t1 != NULL || t2 != NULL) {
        int x = (t1 != NULL) ? t1->data : 0;
        int y = (t2 != NULL) ? t2->data : 0;

        sum = x + y + carry;
        digit = sum % 10;
        carry = sum / 10;

        Node* nn = new Node(digit);
        t3->next = nn;
        t3 = nn;

        if (t1 != NULL) t1 = t1->next;
        if (t2 != NULL) t2 = t2->next;
    }

    if (carry > 0) {
        Node* nn = new Node(carry);
        t3->next = nn;
    }

    return reverse(dummy->next);
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* first = new Node(9);
    Node* second = new Node(9);
    Node* third = new Node(9);
    Node* fourth = new Node(9);
    Node* fifth = new Node(9);
    Node* sixth = new Node(9);
    Node* seven = new Node(9);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seven;

    Node* l21 = new Node(9);
    Node* l22 = new Node(9);
    Node* l23 = new Node(9);
    Node* l24 = new Node(9);
    l21->next = l22;
    l22->next = l23;
    l23->next = l24;

    Node* ans = add_two_elements(first, l21);
    display(ans);

    return 0;
}
