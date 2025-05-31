#include <iostream>
#include "Lab.h"

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << subtract(a, b) << endl;
    }
    else if (a < b) {
        cout << add(a, b) << endl;
    }
    else {
		cout << multiply(a, b) << endl;
    }
}
