#include <iostream>;
using namespace std;
int main() {
	float arr[10]{ 0 };
	int nomerscheta;
	int deystvie;
	float snyatie;
	float popolnenie;
	cout << "Vvedite nomer sceta (1-10): ";
	cin >> nomerscheta;
	cout << "Vash balans: " << arr[nomerscheta] << endl;
	cout << "Viberete sleduyushchee deystvie: " << endl << "'1' sniat' den'gi" << endl
		<< "'2' popolnit' balans" << endl << "'3' Vivesty balans vseh schetov" << endl
		<< "'4' zavershit' rabotu" << endl;
	cin >> deystvie;
	switch (deystvie) {
	case 1: {
		cout << "Vvedite sumu dlya snyatiya: ";
		cin >> snyatie;
		if (snyatie > arr[nomerscheta]) {
			cout << "Ne dostatochno sredstv" << endl;
		}
		else {
			cout << "Uspeshno, vash tekushiy balans: " << arr[nomerscheta] - snyatie << endl;
		}
		break;
	case 2: {
		cout << "Vvedite summu dlya popolneniya:";
		cin >> popolnenie;
		cout << "Uspeshno, vash tekushiy balans: " << arr[nomerscheta] + snyatie << endl;
		break;
	}
	case 3: {
		for (int vsescheta = 0; vsescheta < 10; vsescheta++) {
			cout << "Nomer sheta: " << vsescheta << "Balans: " << arr[vsescheta] << endl;
		}
	}
	case 4: {
		cout << "Rabota zavershena. Horesego dnya!" << endl;
		break;
	}

	default: {
		cout << "Neizvestnoe deystvie" << endl;
		break;
	}
	}
	}

}

