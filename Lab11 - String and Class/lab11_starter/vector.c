#include <iostream>

using namespace std;

class SimpleVector
{
    int size;
    int num;
    int *array;
public:
    void initArray(int _size = 0);
    // TODO:
    // Construct an array with specified size. Default set size as 0.

    void deleteArray();
    // Destructor. Delete the storage used by the array. 

    void expand();
    // TODO:
    // This will be called by insert and set function when 
    // the size of array is not enough. When size=0, set size of array to 1.
    // Otherwise, set size as size*2. 

    void insert(int x);
    // TODO:
    // Append an element x in the array. 

    void set(int pos,const int &x);
    // TODO:
    // Set i-th element in the array as x. The index starts from 1.

    void printVec();
    // Print the information for the current vector;
};

void SimpleVector::printVec() {
    cout << "This vector has size=" << this->size;
    cout <<" and num=" << this->num << endl;
    for(int i = 0 ; i < num ; ++ i )
        cout << this->array[i] << " ";
    if(num > 0)
        cout << endl;
}

// The comments show the expected output
int main()
{
    SimpleVector vec1,vec2;

    vec1.initArray();
    vec1.printVec(); 
    // This vector has size=0 and num=0
    vec1.insert(1);
    vec1.insert(2);
    vec1.insert(3);
    vec1.printVec();
    vec1.deleteArray();
    // This vector has size=4 and num=3
    // 1 2 3

    vec2.initArray(3);
    vec2.printVec();
    // This vector has size=3 and num=0
    vec2.insert(1);
    vec2.insert(2);
    vec2.insert(3);
    vec2.set(2,0);
    vec2.set(2,5);
    vec2.printVec();
    // This vector has size=3 and num=3
    // 1 5 3
    vec2.set(7,5);
    vec2.printVec();
    vec2.deleteArray();
    // This vector has size=12 and num=7
    // 1 5 3 0 0 0 5
    
    return 0;
}
