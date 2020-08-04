#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    /* load a string */
    string str = "-19 39 109 2 A 33";
    istringstream iss;
    iss.str(str);

    int cnt=0, num;
    while(iss >> num){
        // bool isIssNotEmpty = (bool)(iss >> num);
        cout << num << " "; // -19 39 109 2 
        cnt+=num;
        if(iss.fail()) break;
    }
    iss.clear();

    return 0;
}