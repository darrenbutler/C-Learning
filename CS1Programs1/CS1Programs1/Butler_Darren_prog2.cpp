//------------------------------------------------------------------------------
//
// Name: Darren Butler
//
// Course: CS 1063-202, Spring 19, Wuthrich
//
// Purpose: This program allows the user to choose a dog's name, size, and 
// breed.
//------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

/*
    Dog will have name, size, and breed.
    Name, size, and breed can be changed
    Dog can run and bark.
*/

class Dog
{
private:
    string name, size, breed;//attributes
public:
    Dog() {
        name = "no name";
        size = "no size set";
        breed = "no breed set";

    }//Default constructor for default values

    // Parameterized constructor
    Dog(string dogName, string dogSize, string dogBreed) {
        if (dogName == "") {
            dogName = "no name";
        }

        if (dogSize == "") {
            dogSize = "no size";
        }

        if (dogBreed == "") {
            dogBreed = "no breed";
        }

    }
    // Implementation of getters
    string getSize() {
        return size;
    }

    string getName() {
        return name;
    }

    string getBreed() {
        return breed;
    }
    //Implementation of setters

    //Size entered must be large, small, or medium
    void setSize(string s) {
        
        if (s == "large" || s == "small" || s == "medium")
            size = s;
        else
            size = "";        
    }

    //Name can be anything
    void setName(string n) {        
        name = n;
    }

    //Breed can be anything
    void setBreed(string b) {
        breed = b;
    }

    void bark() {
        cout << name << " is barking excitedly!\n";
    }

    void run() {
        cout << name << " is running so fast!\n";
    }

    ~Dog()
    {
        cout << "In the destructor\n";
        system("pause");
    }
};

int main(){
    Dog newDog;
    string name, size, breed;
    cout << "Darren Butler\n\n";
   
    //Choose size
    cout << "How big a dog do you want? (large, small, medium) Enter exactly: ";
    
    //Make the user enter values until the use correct input
    bool correctInput = false;
    while (!correctInput) 
    {
        cin >> size;
        newDog.setSize(size);
        if (size == "large" || size == "small" || size == "medium")
            correctInput = true;
        else
            cout << "Please enter exactly as prompted.\n";
    }    
    cout << "Cool. You want a " << newDog.getSize() << " dog\n";

    //Choose breed
    cout << "What breed of dog do you want?: ";
    cin >> breed;
    newDog.setBreed(breed);
    cout << newDog.getBreed() << "s are cool!\n";
    system("pause");

    //Choose name
    cout << "Enter a name for your dog: ";
    cin >> name;
    newDog.setName(name);
    cout << newDog.getName() << " is an awsome name!\n";
    system("pause");

    cout << "Here's your new dog, " << newDog.getName() << "\n";
    newDog.bark();
    newDog.run();

    cout << "Enjoy your new dog!\n";
    
    system("pause");
    return 0;
}