#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next; 
};
int main(){
 Node *n1 = NULL;
 
 n1 = new Node();
 n1->data=25;
 n1->next=NULL;

 Node *n2 = NULL;

 n2 = new Node();
 n2->data=45;
 n2->next=NULL;

 n1->next = n2;
 Node *n3 = NULL;
 n3 = new Node();
 n3->data=95;
 n3->next=NULL;
 n2->next = n3;

 Node *n4 = NULL;
 n4 = new Node();
 n4->data=85;
 n4->next=NULL;
 n3->next = n4;

 Node *n5 = NULL;
 n5 = new Node();
 n5->data=65;
 n5->next=NULL;
 n4->next = n5;

 Node *n6 = NULL;
 n6 = new Node();
 n6->data=75;
 n6->next=NULL;

 n5->next = n6;
 cout << n1->data << " " << n1->next << endl;
 cout << n6->data << " " << n6->next << endl;
}