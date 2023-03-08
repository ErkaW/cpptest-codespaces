#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;
string records[100], produk[100];
int id[100],harga[100], keranjang[100];
int banyak = 0,total = 0, kembalian, uang;
string line, pilihan;
void isi(){
    ifstream file;
    file.open("produk.txt");
    while (getline(file, line)){
        records[banyak] = line;
        banyak++;
    }
    file.close();
    for (int i = 0; i < banyak; i++){
        int pos = records[i].find("/");
        id[i] = stoi(records[i].substr(0, pos));
        records[i] = records[i].substr(pos + 1);
        pos = records[i].find("/");
        produk[i] = records[i].substr(0, pos);
        records[i] = records[i].substr(pos + 1);
        harga[i] = stoi(records[i]);
    }
}
void beli(){
    do{
        int idpil, jumlah;
        cout << " Masukkan ID produk yang ingin dibeli : ";
        cin >> idpil;
        cout << " Masukkan jumlah produk yang ingin dibeli : ";
        cin >> jumlah;
        cout << " ================================" << endl;
        cout << " Nama produk : " << produk[idpil - 1] << endl;
        cout << " Harga produk : " << harga[idpil - 1] << endl;
        cout << " Jumlah produk : " << jumlah << endl;
        cout << " Total harga : " << harga[idpil - 1] * jumlah << endl;
        cout << " ================================" << endl;
        keranjang[idpil - 1] = jumlah;
        cout << "Apakah anda ingin membeli produk lain? (y/n) : ";
        cin >> pilihan;
    }while(pilihan == "y");
}
void bayar(){
    for (int i = 0; i < banyak; i++){
        total += harga[i] * keranjang[i];
    }
    cout << " Total harga : " << total << endl;
    cout << " Masukkan uang yang dibutuhkan : ";
    cin >> uang;
    if (uang < total){
        cout << " Uang anda kurang" << endl;
        bayar();
    } else {
        kembalian = uang - total;
        cout << " Kembalian anda : " << kembalian << endl;
    }
}
void nota(){
    cout << endl << endl;
    cout << " ================================================ " << endl;
    cout << " ==============********************============== " << endl;
    cout << " ==============**Struk pembayaran**============== " << endl;
    cout << " ==============*****SUPER INDO*****============== " << endl;
    cout << " ==============********************============== " << endl;
    cout << " ================================================ " << endl;
    cout << " ================================================ " << endl;
    for(int i = 0; i < banyak; i++){
        if (keranjang[i] != 0){
            cout << " " << produk[i] << " " << keranjang[i] << " " << harga[i] * keranjang[i] << endl;
        }
    }
    cout << " ================================================ " << endl;
    cout << " Total : " << total << endl;
    cout << " Uang : " << uang << endl;
    cout << " Kembalian : " << kembalian << endl;
    cout << " ================================================ " << endl;
    cout << " Terima kasih dan selamat datang kembali- " << endl;
    cout << " Jika anda tidak mendapatkan struk maka belanjaan anda akan GRATIS " << endl;
    cout << " Complain dan saran silahkan Hubungi : 0821225150307 " << endl;
    cout << " " << endl;
}
int main (){
    isi();
    cout << " ================================================ " << endl;
    cout << " ====================SUPERINDO===================" << endl;
    cout << " ------------------Retail&Grosir -----------------" << endl;
    cout << " ==============BANYAK PILIHAN NYAAA!!============ " << endl;
    cout << " ================>>Daftar barang<<=============== " << endl;
    for (int i = 0; i < banyak; i++){
        cout << " => " << i + 1 << ". " << produk[i] << " " << harga[i] << endl;
    }
    cout << " ================================================ " << endl;
    beli();
    bayar();
    nota();
    return 0;
}