#include <iostream>
using namespace std;

int main(){

    char str[]="Hello, World!";
    char *ptr = str;

    cout<<"Address of first element : "<<(void*)ptr<<endl;
    cout<<"Value of first element : "<<*ptr<<endl;
    cout<<"Value of Second element : "<<*(ptr + 1)<<endl;

    *(ptr + 1)='w';
    cout<<"Value Of STR : "<<str<<endl;
    

    return 0;
}