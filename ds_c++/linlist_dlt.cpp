#include <bits/stdc++.h>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;

    NODE(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void insertnode(NODE *&head, int data)
{
    NODE *newnode = new NODE(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    NODE *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertnodeathead(NODE* &head,int data)
{
    NODE* newnode=new NODE(data);
    newnode->next=head;
    head=newnode;
}

void delnode(NODE* &head,int n)
{
NODE *newnode = NULL;
    NODE *temp = head;
    while (n - 1 != 0)
    {
        temp = temp->next;
        n--;
    }
    newnode= temp->next;
    temp->next = newnode->next;
}


void printlist(NODE *head)
{
    NODE *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    NODE *head = NULL;
    int n;
    cin >> n;
    int data = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertnode(head, data);
    }
   // printlist(head);
    cin>>n;
    delnode(head,n);
    printlist(head);
}
