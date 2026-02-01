#include<iostream>
using namespace std;
//queue
class stack{

     private:
     int *arr;
     int rear;
     int front;
    //  int top;
     int capacity;
     int count;


     public:
      stack(int capacity){
    this->arr = new int[capacity];
    this->front = -1;
    this->rear = -1;
    this->capacity = capacity;
    this->count = 0;
      }

      void inque(int element){
           if (this->rear == -1 && this->front == -1) 
           {
              this->front++;
              this->rear++;
              this->arr[this->rear] = element;
              this->count++;
           }
       else{
        this->rear++;
        this->arr[this->rear] = element;
       this->count++;        
    }
      }

      void deque(){
         if (this->rear == -1 && this->front == -1)
         {
           cout << "Queue is empty";
         }
         else
         {
            this->front++;
         }
      }
       void front1(){
          if (this->capacity == this->count)
         {
           cout << endl << "stack is empty !!" << endl << endl;
         }
         else
         {
            cout << endl <<"peek Element is :" << this->arr[this->front] << endl << endl;
         }
      }
       void rear2(){
        for (int i=this->front; i>=0; i++)
        {
     cout << this->arr[i] << endl;
        }
        
      }
       void isEmpty(){
        if (this->front == -1)
        {
         cout << endl << "Stack is empty !! " << endl << endl;
        }
        else
        {
         cout << endl << "Stack is not Empty !!" << endl << endl;
        }
      }
       void isFull(){
        if (this->capacity == this->count)
        {
         cout << endl << "stack is full !!" << endl << endl;
        }

        else
        {
         cout << endl << "stack is not full !!" << endl << endl;
        }
        
      }
       void size(){
        if (this->front == -1)
        {
         cout << endl << "Stack is full !!" << endl << endl;
        }

        else {
         cout << this->count << endl << endl;
        }
        
      }
};
int main(){
stack  Stack(5);

 int choice,element;
 do
 {
    cout << "Press 1 for push" << endl;
    cout << "Press 2 for deque" << endl;
    cout << "Press 3 for peek" << endl;
    cout << "Press 4 for display" << endl;
    cout << "Press 5 for isEmpty" << endl;
    cout << "Press 6 for isFull" << endl;
    cout << "Press 7 for size" << endl;
    cout << "Press 0 for exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
       cout << "Enter the element : ";
       cin >> element;
       Stack.inque(element);
        break;
        case 2 :
        Stack.deque();
          break;
          case 3 :
        Stack.front1();
          break;
          case 4 :
        Stack.rear2();
          break;
          case 5 :
        Stack.isEmpty();
          break;
          case 6 :
        Stack.isFull();
          break;
          case 7 :
        Stack.size();
          break;
          case 0 :
          cout << "exited successfully !" << endl;
          break;
    
    default:
     cout << "Invalid Choice";
        break;
    }
 } while (choice!=0);
 
}