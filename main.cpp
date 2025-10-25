#include <iostream>;
#include <math.h>;
using namespace std;
int main() {
    double num1, num2, result;
    int operation;
    setlocale(LC_ALL, "Rus");

    cout << "Viberite operaciyu (+, -, *, /,^, sqrt): " << endl;
    cout << "\nViberite odnu iz dostupnih operaciy:" << endl;
    cout << "  '1' - Slozhenie" << endl;
    cout << "  '2' - Vichitanie" << endl;
    cout << "  '3' - Umnozhenie" << endl;
    cout << "  '4' - Delenie" << endl;
    cout << "  '5' - Vozvedenie v stepen'" << endl;
    cout << "  '6' - Kvadratniy koren'\n ";
    cout << "Vash vibor: ";
    cin >> operation;
    switch (operation) {
    case 1: '1';
        cout << "Vvedite pervoe chislo:\n ";
        cin >> num1;
        cout << "Vvedite vtoroe chislo:\n ";
        cin >> num2;
        result = num1 + num2;
        cout << "Rezul'tat: " << result;
        break;
    case 2: '2';
        cout << "Vvedite pervoe chislo: ";
        cin >> num1;
        cout << "Vvedite vtoroe chislo: ";
        cin >> num2;
        result = num1 - num2;
        cout << "Rezul'tat: " << result;
        break;
    case 3: '3';
        cout << "Vvedite pervoe chislo: ";
        cin >> num1;
        cout << "Vvedite vtoroe chislo: ";
        cin >> num2;
        result = num1 * num2;
        cout << "Rezul'tat: " << result;
        break;
    case 4: '4';
        cout << "Vvedite pervoe chislo: ";
        cin >> num1;
        cout << "Vvedite vtoroe chislo: ";
        cin >> num2;
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Rezul'tat: " << result;
        }
        else {
            cout << "Oshibka";
        }
        break;
    case 5: '5';
        cout << "Vvedite chislo: ";
        cin >> num1;
        cout << "Vvedite chislo v kotoroe hotite vozvesti stepen': ";
        cin >> num2;
        result = pow(num1, num2);
        cout << "Rezul'tat: " << result;
        break;
    case 6: '6';
        cout << "Vvedite chislo: ";
        cin >> num1;
        if (num1 >= 0) {
            result = sqrt(num1);
            cout << "Rezul'tat: " << result;
        }
        else {
            cout << "Oshibka";
        }
        break;
    default:
        cout << "Vi vibrali ne sushestvuyushuyu operaciyu";
    }
}
