#include <iostream>
using namespace std;

int main()
{
    float liczba1, liczba2, liczba3;
    cout << "Podaj trzy liczby" << endl;
    cin >> liczba1;
    cin >> liczba2;
    cin >> liczba3;

    if ((liczba1 > liczba2) && (liczba1 > liczba3))
            {
        cout << "Liczba nr 1 o wartosci: " << liczba1 << " jest najwieksza" << endl;
            }
            else if ((liczba2 > liczba1) && (liczba2 > liczba3))
                    {
                    cout<< "Liczba nr 2 o wartosci: " << liczba2 << " jest najwieksza" << endl;
                    }
                    else
                        { 
                         cout<< "Liczba nr 3 o wartosci: " << liczba3 << " jest najwieksza" << endl;
                        }

    return 0;
}