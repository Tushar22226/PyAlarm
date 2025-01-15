#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class parentClass {
    private:
        int id;
        char name[50];
    public:
        parentClass() {
            id = 12;
            strcpy(name, "Tushar Shah"); 
        }
    protected:
        void getData() {
            cout << id << " " << name << endl; 
        }
};

class childClass : public parentClass {
    public:
        void showData() {
            getData();
        }
};

int main() {
    childClass c;
    c.showData(); 
    return 0;
}
