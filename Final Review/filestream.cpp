#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ifs;
    ifs.open("a.txt");
    if(!ifs){ // fail to open the file; int most cases the file doesn't exist in the current directory
        cout << "Cannot open a.txt\n";
        return -1;
    }

    int digit;
    ifs >> digit;

    string line;
    getline(ifs, line);

    ofstream ofs;
    ofs.open("a_out.txt");
    ofs << digit;

    ifs.close();
    ofs.close();
    return 0;
}
