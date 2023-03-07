#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    int b;
    cout << "Masukkan rating makanan yang anda suka dalam batas 1-10 : ";
    cin >> b;
    switch(b){
        case 1:
            a = "Anda sangat tidak suka makanan ini";
            break;
        case 2 ... 4:
            a = "Anda tidak suka makanan ini";
            break;
        case 5 ... 7:
            a = "Anda suka makanan ini";
            break;
        case 8 ... 10:
            a = "Anda sangat suka makanan ini";
            break;
        default:
            a = "Rating yang anda masukkan tidak valid";
            break;
    }
    cout << a << endl;
    return 0;
}