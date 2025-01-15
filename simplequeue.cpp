#include <iostream>
using namespace std;

#define MAX 10

class Queue{
    int q[MAX];
    int front,rear;

    public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void Enqueue(){
        int element;
        cout<<"Enter the value to be inserted in queue : "<<endl;
        cin>>element;

        if (rear == MAX -1)
        {
            cout<<"Queue Overflow!"<<endl;
        }
        else{
            if (front == -1)
            {
                front =0;
            }
            
            q[++rear] = element;
            cout<<"Enqueue successfull!"<<endl;
        }
        
    }

    void Dequeue(){
        if (front == -1 || front >> rear)
        {
            cout<<"Queue Underflow!"<<endl;
        }
        else{
            int element = q[front];
            if (front == 0)
            front++;
            
            
            cout<<"Dequeue Successful "<<element<<endl;
        }
    }

    void displayElements(){
        for(int i = 0; i<MAX; i++){
            cout<<q[i]<<" "<<endl;
        }
    }
};

int main(){
    int ch;
    Queue q1;
    do
    {
       cout<<" 1. ENQUEUE"<<endl<<" 2. DEQUEUE"<<endl<<" 3. DISPLAY"<<endl<<" 4. EXIT"<<endl;
       cout<<"Enter Your Choice : ";
       cin>>ch;
       switch (ch)
       {
       case 1:
        q1.Enqueue();
        break;

        case 2:
        q1.Dequeue();
        break;

        case 3:
        q1.displayElements();
        break;

        case 4:
        cout<<"Quiting the program.";
        break;
       
       default:
        cout<<"Invalid Choice!  Retry."<<endl;
        break;
       }
    } while (ch != 4);
    
    return 0;
}