#include <iostream>
using namespace std;

int main()
{
    int warnaSiklus, detik, siklusAsli, hijau = 103, kuning = 3, merah = 83, mulaiSiklus = 45;
    string warna;

    cout << "Masukkan detik: ";
    cin >> detik;

    mulaiSiklus = mulaiSiklus - hijau;
    siklusAsli = detik - mulaiSiklus;
    warnaSiklus = siklusAsli % 103;

    if (warnaSiklus < kuning)
    {
        warna = "kuning";
    }

    else if (warnaSiklus < merah)
    {
        warna = "merah";
    }

    else
    {
        warna = "hijau";
    }

    cout << "Warna lampu: " << warna << endl;
    return 0;
}