#include<iostream>
using namespace std;

class Complex {
public:
    int i,j;
    Complex() : i(0), j(0){}
    Complex(int i, int j){
        this->i = i;
        this->j = j;
    }

    Complex operator +(Complex &obj){
        Complex temp;
        temp.i = i + obj.i;
        temp.j = j + obj.j;
        return temp;
    }
};

int main() {
    Complex com(12,15),com2(18,20);
    Complex com3 = com + com2;
    cout<<com3.i<<" + i"<<com3.j<<endl;
    return 0;
}
