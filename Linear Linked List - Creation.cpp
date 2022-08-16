#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};
void display(Node* n)
{
    while(n!=NULL)
    {
        cout<< n->value;
        if(n->Next!=NULL)
            cout<<" -> ";
        n=n->Next;
    }

//    while (n != NULL)
//
//    {
//
//        cout << n->value;
//
//        cout << "->";
//
//    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head -> value = 16;
    second -> value = 13;
    third -> value = 1;
    fourth -> value = 9;
    fourth -> value = 2;

//    head -> value = 35;
//    second -> value = 27;
//    third -> value = 46;
//    fourth -> value = 70;
//    fourth -> value = 18;
//    fourth -> value = 27;




    head ->Next = second;
    second ->Next = third;
    third ->Next = fourth;
    fourth ->Next = NULL;


    display(head);




}
