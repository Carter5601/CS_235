#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

    if (argc != 3) {
        printf("prod requires two arguments");
        
        return 1;
    }

    int arg1 = stoi(argv[1]);
    int arg2 = stoi(argv[2]);
    int product = arg1 * arg2;

    cout << arg1 << " * " << arg2 << " = " << product << endl;

    return 0;
}


