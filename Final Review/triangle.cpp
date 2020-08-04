#include <iostream>
using namespace std;

class Triangle {
 private:
    /* Private Attributes */
    double a;
    double b;
    double c;

    /* Private Methods */
    void printEdge(){
        cout << this->a << " " << this->b << " " << this->c << endl;
    }
 public:
    /* constructor */
    Triangle(double a_in, double b_in, double c_in){
        a=a_in; b=b_in; c=c_in;
    }
    /* Public Methods */
    
    double perimeter() const {
        return this->a + this->b + this->c;
    }
    void scale(double s) {
        cout << "original edges: ";
        printEdge();
        this->a *= s;
        this->b *= s;
        this->c *= s;
        cout << "new edges: ";
        printEdge();
    }
    Triangle operator+ (const Triangle him){ // operator overloading
        this->a += him.a;
        this->b += him.b;
        this->c += him.c;
        return *this;
    }
};
// ...
int main(){
    Triangle a(1,1,1), b(2,2,2); // two instances of class Triangle
    cout << a.perimeter() << endl;
    a = a + b; // operator overloading
    cout << a.perimeter() << endl;
	a.scale(0.5);
    // a.printEdge(); // Wrong: member function printEdge is private
    return 0;
}