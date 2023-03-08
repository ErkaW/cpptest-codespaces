#include <iostream>
using namespace std;
int main (){
int pilihan, jumlah, harga, total, bayar;
string item;
cout << " ================================================ " << endl;
cout << " ====================SUPERINDO===================" << endl;
cout << " ------------------Retail&Grosir -----------------" << endl;
cout << " ==============BANYAK PILIHAN NYAAA!!============ " << endl;
cout << " ================>>Daftar barang<<=============== " << endl;
cout << " => 1. jagung manis - Rp. 5000 " << endl;
cout << " => 2. Chitato - Rp. 15000 " << endl;
cout << " => 3. PEPSODENT - Rp. 20000 " << endl;
cout << " => 4. Tobleron - Rp. 35000 " << endl;
cout << " => 5. Gatsby Pomade - Rp. 50000 " << endl;
cout << " => 6. Masker KN94 - Rp. 17000 " << endl;
cout << " => 7. Aqua - Rp. 3200 " << endl;
cout << " => 8. Kinder joy - Rp. 25000" << endl;
cout << " => 9. Sosis Kanzler - Rp 8000 " << endl;
cout << " => 10. Whiskas - Rp. 35500 " << endl;
cout << " => 11. Selesai " << endl;
cout << " ================================================ " << endl;
do{
cout << " pilihlah barang yang ingin kamu beli : ";
cin >> pilihan;
switch ( pilihan ){
case 1:
item = " Jagung Manis ";
harga = 5000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
break;
case 2:
item = " Chitato ";
harga = 15000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
break;
case 3:
item = " PEPSODENT ";
harga = 20000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
break;
case 4:
item = " Tobleron ";
harga = 35000;
cout << " jumlah barang : ";

cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
break;
case 5:
item = " Gatsby Pomade ";
harga = 50000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
break;
case 6:
item = " Masker KN94 ";
harga = 17000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
case 7:
item = " Aqua ";
harga = 3200;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
case 8:
item = " Kinder joy ";
harga = 25000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
case 9:
item = " Sosis Kanzler ";
harga = 8000;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
case 10:
item = " Whiskas ";
harga = 35500;
cout << " jumlah barang : ";
cin >> jumlah;
total += harga*jumlah;
cout << jumlah << " " << item << " = Rp. " << harga * jumlah << endl << endl;
break;
case 11:
cout << endl << endl;
cout << " ================================================ " << endl;
cout << " ==============********************============== " << endl;
cout << " ==============**Struk pembayaran**============== " << endl;
cout << " ==============*****SONY MART******============== " << endl;
cout << " ==============********************============== " << endl;
cout << " ================================================ " << endl;
cout << " ================================================ " << endl;

cout << " Jumlah total : " << total << endl;
cout << " Tunai : ";
cin >> bayar;
cout << " ==================================================================" << endl;
cout << " Kembalian : " << bayar - total << endl << endl;
cout << " " << endl;
cout << " Terima kasih dan selamat datang kembali- " << endl;
cout << " Jika anda tidak mendapatkan struk maka belanjaan anda akan GRATIS " << endl;
cout << " Complain dan saran silahkan Hubungi : 0821225150307 " << endl;
cout << " " << endl;
break;
default :
cout << " MOHON MAAF BARANG TIDAK ADA DI MENU KAMI! " << endl;
break;
}
} while ( pilihan != 11 );
}