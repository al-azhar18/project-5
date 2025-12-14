
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = { 12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19 };

    cout << "Isi vector awal:\n";
    for (int i : v) {
        cout << i << " | ";
    }
    cout << endl << endl;
     
    sort(v.begin(), v.end());
    cout << "Isi vector setelah sorting ASC:\n";
    for (int i : v) {
        cout << i << " | ";
    }
    cout << endl << endl;

    sort(v.begin(), v.end(), greater<int>());
    cout << "Isi vector setelah sorting DESC:\n";
    for (int i : v) {
        cout << i << " | ";
    }
    cout << endl;

    return 0;
}

