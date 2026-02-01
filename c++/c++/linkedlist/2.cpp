#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *link; 
};
int main(){
 Node *head =   NULL;
 head = new Node();
 head->data=25;
 head->link=NULL;

 Node *current = NULL;
 
 current = new Node();
 current->data = 45;
 current->link = NULL;

 head->link = current;

 current = new Node();
 current->data= 98;
 current->link= NULL;

 head->link->link = current;

 current = new Node();
 current->data= 58;
 current->link= NULL;

 head->link->link->link = current;

 Node *ptr = NULL;
 ptr = head;
 while (ptr != NULL)
 {
   cout << ptr->data<< endl;
   ptr = ptr->link;
 }
 
}