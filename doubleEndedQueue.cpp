#include <iostream>
using namespace std;

#define MAX 5  // Define maximum size of the deque

class Deque {
private:
    int arr[MAX];
    int front, rear;

public:
    // Constructor to initialize front and rear
    Deque() {
        front = -1;
        rear = -1;
    }

    // Check if the deque is full
    bool isFull() {
        return (front == 0 && rear == MAX - 1) || (front == rear + 1);
    }

    // Check if the deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Insert an element at the front of the deque
    void insertFront(int element) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at front.\n";
            return;
        }

        // If deque is empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // Circularly move front to the last position if it's at the beginning
        else if (front == 0) {
            front = MAX - 1;
        }
        // Move front to the previous position
        else {
            front = front - 1;
        }

        // Insert the element at the new front position
        arr[front] = element;
        cout << "Inserted " << element << " at front\n";
    }

    // Insert an element at the rear of the deque
    void insertRear(int element) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at rear.\n";
            return;
        }

        // If deque is empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // Circularly move rear to the first position if it's at the end
        else if (rear == MAX - 1) {
            rear = 0;
        }
        // Move rear to the next position
        else {
            rear = rear + 1;
        }

        // Insert the element at the new rear position
        arr[rear] = element;
        cout << "Inserted " << element << " at rear\n";
    }

    // Display the deque
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }

        cout << "Elements in deque are: ";
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % MAX;  // Circularly increment index
        }
        cout << arr[rear] << "\n";  // Print the last element
    }
};

// Main function to demonstrate the deque operations
int main() {
    Deque dq;
    int choice, element;

    do {
        cout << "\n1. Insert at Front\n2. Insert at Rear\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert at front: ";
                cin >> element;
                dq.insertFront(element);
                break;

            case 2:
                cout << "Enter element to insert at rear: ";
                cin >> element;
                dq.insertRear(element);
                break;

            case 3:
                dq.display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 4);

    return 0;
}
