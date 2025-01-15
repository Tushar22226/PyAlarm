#include <iostream>
using namespace std;

#define MAX 10

class simpleQueue{
    private: 
        int Queue[MAX];
        int front,rear;
    
    public:
        simpleQueue() : front(-1),rear(-1){}
        bool isEmpty(){
            return front == -1;        
        }

        bool isFull(){
            return rear == MAX-1;
        }

        void Enqueue(int e){
            if (isFull())
            {
                cout<<"\n Queue OverFlow!"<<endl;
            }else{
                if (front == -1)
                {
                    front = front +1;
                }
                Queue[++rear]=e;
                cout<<"\nElement inserted successfully : "<<e<<endl;
            }
        }\

        void Dequeue(){
            if (isEmpty())
            {
                cout<<"\nQueue UnderFlow!"<<endl;
            }else{
                int item = Queue[front];
                if (front >= rear)
                {
                    front = rear = -1;
                }else{
                    front = front + 1;
                }
                cout<<"\nItem Dequeued : "<<item<<endl;
            }
        }
        
        void Display(){
            if (isEmpty())
            {
                cout<<"\n Queue UnderFlow!"<<endl;
            }else{
                cout<<"\n Elements in Queue : ";
                for(int i = front; i<=rear; i++){
                    cout<<Queue[i]<<" ";
                }
            }
        }

        void Peek(){
            if (isEmpty())
            {
                cout<<"Queue UnderFlow!"<<endl;
            }else{
                cout<<"Element at Peek : "<<Queue[front]<<endl;
            }
            
        }
};

int main(){
    int ch;
    simpleQueue sq;

    do
    {
        cout<<"\nSimple Queue Operations : \n 1. Enqueue \n"<<" 2. Dequeue \n 3. Display \n 4. Peek \n 5. Exit"<<endl;
        cout<<"Enter Your Choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            int element;
            cout<<"Enter Element : ";
            cin>>element;
            sq.Enqueue(element);
            break;
        
        case 2: 
            sq.Dequeue();
            break;

        case 3: 
            sq.Display();
            break;

        case 4: 
            sq.Peek();
            break;

        default:
            cout<<"Invalid Choice! Choose Again.";
            break;
        }
    } while (ch != 5);
    
    return 0;
}