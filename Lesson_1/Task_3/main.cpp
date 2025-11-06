#include <iostream>
using namespace std;
int main() {
    int width, height, size;
    cout << "Vvedite razmer figur: ";
    cin >> width >> height >> size;
    for (int numRow = 0; numRow < height; numRow++) {
        for (int numCollon = 0; numCollon < width; numCollon++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int numRow = 1; numRow <= size; numRow++) {
        for (int numCollon = 0; numCollon < numRow; numCollon++) {
            cout << "*";
        }
        cout << endl;
    }
}

