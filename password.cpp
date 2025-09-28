#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata, nonVokal = "", hasil = "";
    char sementara, huruf;
    int i, panjang, kodeASCII, adaVokal;

    cout << "Masukkan kata atau sandi: ";
    cin >> kata;

    adaVokal = kata.length();
    for (i = 0; i < kata.length(); i++)
    {
        huruf = tolower(kata[i]);
        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o')
        {
            adaVokal = i;
            break;
        }
    }

    if (adaVokal != kata.length())
    {
        for (i = 0; i < kata.length(); i++)
        {
            char vokal = tolower(kata[i]);
            if (vokal != 'a' && vokal != 'i' && vokal != 'u' && vokal != 'e' && vokal != 'o')
            {
                nonVokal += kata[i];
            }
        }

        panjang = nonVokal.length();
        for (i = 0; i < panjang / 2; i++)
        {
            sementara = nonVokal[i];
            nonVokal[i] = nonVokal[panjang - i - 1];
            nonVokal[panjang - i - 1] = sementara;
        }

        kodeASCII = kata[0];

        int tengah = nonVokal.length() / 2;
        string bagianAwal = nonVokal.substr(0, tengah);
        string bagianAkhir = nonVokal.substr(tengah);

        hasil = bagianAwal + to_string(kodeASCII) + bagianAkhir;
    }
    else
    {
        string sandi = "";
        for (i = 0; i < kata.length(); i++)
        {
            if (!isdigit(kata[i]))
            {
                sandi += kata[i];
            }
        }

        for (i = sandi.length() - 1; i >= 0; i--)
        {
            hasil += sandi[i];
        }
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}