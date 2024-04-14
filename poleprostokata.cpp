#include <iostream>
#include <vector>

using namespace std;

struct Prostokat
{
    float dlugosc;
    float szerokosc;
};

int main()
{
    vector<Prostokat> prostokaty;

    while (true)
    {
        Prostokat prostokat;
        cout << "Podaj dlugosc prostokata (0 aby zakonczyc): ";
        cin >> prostokat.dlugosc;
        if (prostokat.dlugosc == 0)
            break;
        cout << "Podaj szerokosc prostokata: ";
        cin >> prostokat.szerokosc;
        prostokaty.push_back(prostokat);
    }

    for (int i = 0; i < prostokaty.size(); ++i)
    {
        cout << "Prostokat " << i + 1 << ": dlugosc = " << prostokaty[i].dlugosc
             << ", szerokosc = " << prostokaty[i].szerokosc << endl;
    }

    return 0;
}
