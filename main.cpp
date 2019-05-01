#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string wyraz;

    cout << "Podaj wyraz do odwrocenia: ";
    //cin >> wyraz;
    // pobierz cala linie razem ze spacja
    getline(cin,wyraz);

    int dlugosc = wyraz.length();

    for (int i=dlugosc-1; i>=0; i--)
    {
        cout << wyraz[i];
    }

    // konkatynacja = sklejanie wielu string
    string jeden="Ala ma ";
    string dwa="kota.";
    string trzy=jeden+dwa;

    cout << trzy;

    // zmiana liter na wielkie i male
    string napis="Ala ma kota.";

    transform(napis.begin(),napis.end(),napis.begin(),::toupper); // na wielkie
    cout << napis << endl;

    transform(napis.begin(),napis.end(),napis.begin(),::tolower); // na male
    cout << napis << endl;

    // wyszukiwanie
    string napis2="Ala ma kota.";
    string szukaj="kot";

    size_t pozycja=napis2.find(szukaj);

    if (pozycja != string::npos)
        cout << "Znaleziono na pozycji: " << pozycja;
    else cout << "Nie znaleziono.";

    // kasowanie znakow
    string napis3="Ala ma kota.";
    napis.erase(3,3); // kasowanie - zacznij od, wykasuj ile znakow
    cout << napis3;

    // wstawianie napisow
    string napis4="Ala ma kota";
    napis.insert(11, "Filemona."); // zacznij od, wstaw
    cout << napis4 << endl;

    // zastapianie napisow
    string napis5="Ala ma kota";
    napis.replace(4, 2, "nie ma"); // zacznij od, ile znakow zastapic,
    cout << napis5 << endl;

    // wyjmowanie i zapisywanie w nowej zmiennej
    string napis6="Ala ma kota";
    string nowynapis6=napis.substr(4,7); // zacznij od, ile znakow wyjac
    cout << napis6 << endl;

    return 0;
}
