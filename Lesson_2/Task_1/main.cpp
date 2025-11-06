#include <iostream>
using namespace std;
int main() {
    float arr[10]{ 0 };
    int nomerscheta;
    int deystvie;
    float snyatie;
    float popolnenie;
    cout << "Vvedite nomer sceta (0-9): ";
    cin >> nomerscheta;
    while (nomerscheta < 0 || nomerscheta > 9)
    {
        if (nomerscheta < 0 || nomerscheta > 9)
        {
            cout << "Oshibka: nomer scheta dolzhen byt' ot 0 do 9." << endl;
            cout << "Vvedite nomer sceta zanovo: ";
            cin >> nomerscheta;
        }
    }
    cout << "Vash balans: " << arr[nomerscheta] << endl;
    do {
        cout << "Viberete sleduyushchee deystvie: " << endl << "'1' sniat' den'gi" << endl
             << "'2' popolnit' balans" << endl << "'3' Vivesty balans vseh schetov" << endl
             << "'4' Vibrat' drugoy schet" << endl << "'5' zavershit' rabotu" << endl;
        cin >> deystvie;
        switch (deystvie) {
        case 1: {
            cout << "Vvedite sumu dlya snyatiya: ";
            cin >> snyatie;
            if (snyatie > arr[nomerscheta]) {
                cout << "Ne dostatochno sredstv" << endl;
            }
            else {
                arr[nomerscheta] -= snyatie;
                cout << "Uspeshno, vash tekushiy balans: " << arr[nomerscheta] << endl;
            }
            break;
        }
        case 2: {
            cout << "Vvedite summu dlya popolneniya:";
            cin >> popolnenie;
            arr[nomerscheta] += popolnenie;
            cout << "Uspeshno, vash tekushiy balans: " << arr[nomerscheta] << endl;
            break;
        }
        case 3: {
            for (int vsescheta = 0; vsescheta < 10; vsescheta++) {
                cout << "Nomer scheta: " << vsescheta << "Balans: " << arr[vsescheta] << endl;
            }
            break;
        }
        case 4: {
            cout << "Vvedite nomer sceta (0-9): ";
            cin >> nomerscheta;
            while (nomerscheta < 0 || nomerscheta > 9)
            {
                if (nomerscheta < 0 || nomerscheta > 9)
                {
                    cout << "Oshibka: nomer scheta dolzhen byt' ot 0 do 9." << endl;
                    cout << "Vvedite nomer sceta zanovo: ";
                    cin >> nomerscheta;
                }
            }
        }
        case 5: {
            cout << "Rabota zavershena. Horeshego dnya!" << endl;
            break;
        }

        default: {
            cout << "Neizvestnoe deystvie" << endl;
            break;
        }
        }
    } while (deystvie != 5);
}



