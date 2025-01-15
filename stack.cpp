#include <iostream>
using namespace std;

#define MAX 10

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << " onto the stack." << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed onto the stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
        } else {
            cout << arr[top] << " popped from the stack." << endl;
            top--;
        }
    }

    void peep() {
        if (top == -1) {
            cout << "Stack is empty. No elements to peep." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty. Nothing to display." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. PEEP" << endl;
        cout << "4. DISPLAY" << endl;
        cout << "5. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peep();
            break;
        case 4:
            stack.display();
            break;
        case 5:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice! Please choose again." << endl;
        }
    }

    return 0;
}
