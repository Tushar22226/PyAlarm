#include <iostream>
using namespace std;

class Stack{
    int top;
    int max;
    int arr[10];

public:
    Stack(){
        top =-1;
        max = 10;
    }

    void Push(){
        int element;
        if (top>=max-1)
        {
            cout<<"Stack Overflow!"<<endl;
        }else{
            top = top+1;
            cout<<"ELement To be inserted in Stack : ";
            cin>>element;
            arr[top]=element;
        }
    }

    void Pop(){
        if (top == -1)                                      
        {
            cout<<"Stack UnderFlow!"<<endl;
        }else{
            cout<<"Pop Element : "<<arr[top]<<endl;
            top =  top-1;
        }
    }

    void Peek(){
        if (top == -1)
        {
            cout<<"Stack UnderFlow!"<<endl;
        }else{
            cout<<"Element at the top : "<<arr[top]<<endl;
        }
        
    }

    void CheckUf(){
        if (top == -1)
        {
            cout<<"Stack is UnderFlow!"<<endl;
        }else{
            cout<<"Stacl isnt  UnderFlow!"<<endl;
        }
        
    }

    void CheckOf(){ if (top>=max-1){cout<<"Stack Overflow!"<<endl;}else{cout<<"Stack isn't Overflow!"<<endl;}}
};

int main(){
    int ch;
    Stack st;
    do{
        cout<<"1. Insert Element in Stack! \n"<<"2. Pop Element in Stack!\n"<<"3. Peek Element in Stack! \n"<<"4. Check for UnderFlow \n"<<"5. Check for Overflow. \n"<<"6. Exit \n";
        cout<<"Enter Your Choice : "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            st.Push();
            break;
        case 2: 
            st.Pop();
            break;
        case 3:
            st.Peek();
            break;
        case 4: 
            st.CheckUf();
            break;
        case 5:
            st.CheckOf();
            break;
        case 6:
            cout<<"Ending up the program"<<endl;
        default:
            cout<<"Invalid Choice! Choose Again."<<endl;
            break;
        }
    }while (ch != 6);
    
    return 0;
}