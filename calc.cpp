#include <iostream>
using namespace std;

class parentClass{
    public:
        virtual void  disp(){
            cout<<"Its Parent Class"<<endl;
        }
};

class childClass: public parentClass{
    void disp(){
        cout<<"Its Child Class"<<endl;
    }
};

int main(){
    childClass pc;
    pc->disp();
    return 0;
}

