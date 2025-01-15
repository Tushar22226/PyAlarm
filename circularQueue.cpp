#include <iostream>
using namespace std;

#define MAX 5

class CircularQueue{
    private:
        int cq[MAX];
        int front, rear;
    public:
    CircularQueue(){
        front  = -1;
        rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return (rear + 1) % MAX == front;
    }

    void Enqueue(int element){
        if (isFull())
        {
            cout<<"Overflow!"<<endl;
        }else{
            if (front == -1)
            {
                front = 0;
            }
            rear = (rear +1)% MAX;
            cq[(rear + 1)%MAX] = element;
            cout<<"Enqueue Successful"<<endl;
        }
    }

    void Dequeue(){
        if (isEmpty())
        {
            cout<<"Queue UnderFlow!";
        }else{
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }else{
                front = (front + 1)%MAX;
                cout<<"Dequeue Successful!"<<endl;
            }
            
        }
        
    }
};

int main(){
    CircularQueue cq;
    cq.Dequeue();
    cq.Enqueue(1);
    for (int i = 0; i < 11; i++){
        cq.Enqueue(i);
    }

     for (int i = 0; i < 11; i++){
        cq.Dequeue();
    }
}