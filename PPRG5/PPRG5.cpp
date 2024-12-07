#include <iostream>
#include <vector>
using namespace std;

void zad5_1() {
    int liczbaElementow;
    cout << "Wpisz liczbe elementow wektora: ";
    while (true) {
        cin >> liczbaElementow;
        if (liczbaElementow > 0) {
            break;
        }
        else {
            "\nPodana wartosc musi byc dodatnia liczba calkowita. Sprobuj jeszcze raz: ";
        }
    }

    vector<int> wektor(liczbaElementow);

    for (int i = 0; i < liczbaElementow; i++) {
        int element;
        cout << "Wpisz " << i + 1 << ". element wektora: ";
        cin >> element;
        wektor[i] = element;
    }

    int wartoscMax = wektor[0];
    for (int i = 0; i < liczbaElementow;i++) {
        if (wektor[i] > wartoscMax) {
            wartoscMax = wektor[i];
        }
    }

    vector<int> indeksyMax;
    for (int i = 0; i < liczbaElementow;i++) {
        if (wektor[i] == wartoscMax) {
            indeksyMax.push_back(i);
        }
    }

    cout << "\nWartosc maksymalna wektora to " << wartoscMax << "." << endl;
    cout << "Indeks(y) wartosci maksymalnej to: ";
    for (int x : indeksyMax) {
        cout << x << " ";
    }
    cout << endl;
}

void zad5_2() {
    vector<int> tablica = { 2,4,6,8,3,5,7,7 };
    cout << "Aktualny rozmiar tablicy: " << tablica.size() << endl;
    cout << "Elementy tablicy: ";
    for (int x : tablica) {
        cout << x << " ";
    }
    cout << endl;

    int polowa = tablica.size() / 2;
    for (int i = 0; i < polowa; i++) {
        int pomocnicza = tablica[i];
        if (tablica.size() % 2 == 0) {
            tablica[i] = tablica[i + polowa];
            tablica[i + polowa] = pomocnicza;
        }
        else {
            tablica[i] = tablica[i + polowa + 1];
            tablica[i + polowa + 1] = pomocnicza;
        }
    }

    cout << "Elementy tablicy po odwroceniu: ";
    for (int x : tablica) {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    zad5_1();
    zad5_2();
    return 0;
}