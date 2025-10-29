#include <iostream>;
using namespace std;
int main() {
    int width, height, size;
    cout << "Vvedite razmer figur: ";
    cin >> width >> height >> size;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
