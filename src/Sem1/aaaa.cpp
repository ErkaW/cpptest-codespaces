// Nama : Mohammad Amrizal Kurniansyah
// Absen : 04
// NIM : 225150300111003
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int halaman, aktif, range, awal, akhir;
    cin >> halaman >> aktif >> range;
    if (awal > 1){
        cout << "Prev ";
    }
    range = range / 2;
    if(awal != 1 && akhir != halaman){
        awal = aktif - range;
        akhir = aktif + range;
    }else if (awal == 1 && akhir != halaman){
        awal = 1;
        akhir = awal + range + range;
    }else if (awal != 1 && akhir == halaman){
        akhir = halaman;
        awal = akhir - range - range;
    }
    for (int i = awal; i <= akhir; i++){
        cout << i << " ";
    }
    if (akhir <= halaman){
        cout << "Next";
    }
    cout << awal << " " << akhir << endl;
    return 0;
}