#include <iostream>
#include <string>
using namespace std;

class Bird {
 private:
    int age;
    string name;

 public:
    Bird(const string &nameIn){
        age = 0;
        name = nameIn;
    }
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    void haveBirthday() {
        ++age;
    }
    virtual void talk() const {
        cout << "tweet" << endl; // we use a virtual keyword to override member functions even there is no compile-time information about the actual type of the class
    }
};

class Chicken : public Bird {
 private:
    int roadsCrossed;
 public:
    // since name is a private method of the bird, we use a member-initializer list to implement the constructor
    Chicken(const string &nameIn) : Bird(nameIn), roadsCrossed(0) { }

    void crossRoad() {
        cout << "Chicken " << this->getName() << " crosses a road." << endl;
    }
    void talk() const {
        cout << "chee" << endl;
    }
};

class Duck : public Bird {
 private:
    int numDucklings;
 public:
    // since name is a private method of the bird, we use a member-initializer list to implement the constructor
    Duck(const string &nameIn) : Bird(nameIn), numDucklings(0) { }

    void haveBabies() {
        numDucklings += 7;
    }
    void talk() const {
        cout << "quack" << endl;
    }
};

int main(){
    Bird b("1");
    b.talk(); // tweet
    Chicken c("2");
    c.talk(); // chee
    Duck d("3");
    d.talk(); // quack

    Bird *ptrB = &b;
    Bird *ptrC = &c;
    Bird *ptrD = &d;
    ptrB->talk();
    ptrC->talk();
    ptrD->talk();

    return 0;
}