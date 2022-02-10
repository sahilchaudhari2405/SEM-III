#include <iostream>
using namespace std;
struct node
{
  int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void toinput(node *&head, int val)
{
    node *n = new node(val);
    
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;   
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void todelete(node *&head, int value)
{
    node *temp = head;

    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
}
void display(node *head)
{ int count=0;
    node *temp = head;
    while (temp != NULL)
    { count++;
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"count of element="<<count<<endl;
    
}
int main()
{
    node *head = NULL;
    toinput(head, 1);
    toinput(head, 2);
    toinput(head, 3);
    toinput(head, 4);
   todelete(head,2);
    display(head);

    return 0;
}