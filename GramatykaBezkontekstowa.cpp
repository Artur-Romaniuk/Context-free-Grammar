#include <iostream>
#include <string>
using namespace std;

string fromS(string in, int poz, bool k) //funkcja dla przejścia z S, pozycja w stringu do zamienienia, bool czy do AA czy do 0
{
    if (in[poz] == 'S')
    {
        if (k)
        {
            in.replace(poz, 1, "AA");
        }
        else
        {
            in.replace(poz, 1, "0");
        }
    }
    return in;
}

string fromA(string in, int poz, bool k) //funkcja dla przejścia z A, pozycja w stringu do zamienienia, bool czy do S czy do 1
{
    if (in[poz] == 'A')
    {
        if (k)
        {
            in.replace(poz, 1, "S");
        }
        else
        {
            in.replace(poz, 1, "1");
        }
    }
    return in;
}

string decToBin(int a, int z)
{
    string binary;
    for (int i = 0; i < z; i++)
        binary += "0";
    int i = z-1;
    while (a > 0)
    {
        binary[i] = (a % 2 == 0 ? '0' : '1');
        a /= 2;
        i--;
    }
    return binary;
}

        


int main()
{
    cout << "Gramatyka bezkontekstowa\n";
    cout << "S-->AA|0      A-->S|1\n";
    cout << "Prosze podac liczbe lancuchow do wypisania.\n";
   
    /*string slowo = "S";
    const int n = 10;
    string tablica[n];

    string pom;

    cout << fromS(slowo, 0, false)<<"\n";

    slowo = fromS(slowo, 0, true); //wydluzenie

    pom = fromA(slowo, 0, true);
    pom = fromA(pom, 1, true);
    pom = fromS(pom, 0, false);
        pom = fromS(pom, 1, false);
        cout << pom << "\n";

    pom = fromA(slowo, 0, true);
    pom = fromA(pom, 1, false);
    pom = fromS(pom, 0, false);
    cout << pom << "\n";

    pom = fromA(slowo, 1, true);
    pom = fromA(pom, 0, false);
    pom = fromS(pom, 1, false);
    cout << pom << "\n";

    pom = fromA(slowo, 0, false);
    pom = fromA(pom, 1, false);
    cout << pom << "\n"; */
    int n=100;
    cin >> n;
    string zera = "0";
    cout << "\n0\n";
    n--;
    int pot = 2;
    while (n > 0)
    {
        zera += "0";
        cout << zera << "\n";
        n--;
        for (int i = 1; i < pow(2,pot); i++)
        {
            if (n == 0)
                break;
            cout << decToBin(i, pot) << "\n";
            n--;
        }
            
        pot++;
    }


    return 0;
}
