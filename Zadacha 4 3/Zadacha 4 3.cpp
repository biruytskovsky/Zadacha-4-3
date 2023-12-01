#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "write 1 or -1 :";
    cin >> x;

    if (x == -1) {
        cout << "Negative number" << endl;
    }
    else if (x == 1) {
        cout << "Positive number" << endl;
    }
    else {
        cout << "error, write 1 or -1" << endl;
    }

    return 0;
}