#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

    if (argc != 3) {
        printf("prod requires two arguments");
        
        return 1;
    }

    double arg1 = stod(argv[1]);
    double arg2 = stod(argv[2]);
    double product = arg1 * arg2;

    cout << arg1 << " * " << arg2 << " = " << product << endl;

    return 0;
}


