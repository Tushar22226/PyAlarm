#include <iostream.h>
#include <conio.h>
#include <string.h>

// base class declaration.
class Animal {
public:
    char color[10];
    Animal() {
	strcpy(color, "Black");
    }
};

// inheriting Animal class.
class Dog : public Animal {
public:
    Dog() {
	strcpy(color, "Grey"); // Initialize the color in the constructor
    }
};

// Driver code
int main() {
    clrscr();
    Animal *d = new Dog(); // Create a pointer to the base class and point it to a Dog object
    cout << d->color; // Access the field using the pointer
    delete d; // Remember to delete the dynamically allocated object
    getch();
}
