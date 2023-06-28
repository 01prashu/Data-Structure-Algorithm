#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node(int x)
  {
    this->data = x;
    this->next = NULL;
  }
};
void insert_first(int x, node *&head)
{
  node *nn = new node(x);
  nn->next = head;
  head = nn;
}
void insert(int x, int position, node *&head)
{
  if (position == 1)
  {
    insert_first(x, *&head);
    return;
  }
  else
  {
    node *temp = head;
    int c = 1;
    while (c < position - 1)
    {
      temp = temp->next;
      c++;
    }
    node *nn = new node(x);
    nn->next = temp->next;
    temp->next = nn;
  }
}
void display(node *&head)
{
  node *t = head;
  while (t != NULL)
  {
    cout << t->data << "->";
    t = t->next;
  }
  cout << endl;
}
void reverse(node *&head)
{
  node *prev = NULL;
  node *curr = head;
  if (curr == NULL)
  {
    head = curr;
  }
  else
  {
    node *forward;
    while (curr != NULL)
    {
      forward=curr->next;
      curr->next=prev;
      prev=curr;
      curr=forward;
    }
    head=prev;
  }
}
void remove_head(node *&head )
{

  node *t=head;
  head=head->next;
  t->next=NULL;
  delete t;
}
void remove(node *&head ,int pos )
{
  node *temp=head;
  if(pos==1)
  {
    remove_head(head );
  }
  
  else
  {
    int c=1;
    node *t=head;
    node *prev=NULL;
    while(c < pos )
    {
      prev=t;
      t=t->next;
      c++;
    }
    prev->next=t->next;
    t->next=NULL;
    delete t;

  }
}
int main()
{
  node *first = new node(10);
  node *head = first;
  node *tail=first;
  insert(20, 1, head);
  display(head);
  insert(40, 1, head);
  display(head);
  insert(100, 2, head);
  display(head);
  insert(30, 3, head);
  insert(40, 4, head);
  insert(50, 5, head);
  display(head);
  insert(80, 8, head);
  display(head);
  // reverse(head);
  // display(head);
  remove(head , 1);
  display(head);
  remove(head ,2);
  display(head);
  remove(head , 6);
  display(head);
  return 0;
}