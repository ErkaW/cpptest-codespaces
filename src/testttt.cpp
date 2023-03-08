#include <iostream>
#include <string>
using namespace std;

string isi(int b){
    string a;
    switch(b){
        case 1:
            a = "Apa/Bukan";
            break;
        case 2:
            a = "Pilihan/Ganda";
            break;
        default:
            a = "STOP";
            break;
    }
    return a;
}

// pisah string berdasarkan delimiter tertentu
// contoh: "Apa/Bukan" -> "Apa" dan "Bukan"
// contoh: "Pilihan/Ganda" -> "Pilihan" dan "Ganda"
// contoh: "Tidak Ada" -> null
string* pisah(string a){
    string* b = new string[2];
    int i = 0;
    for(int j = 0; j < a.length(); j++){
        if(a[j] == '/'){
            i++;
        }else{
            b[i] += a[j];
        }
    }
    return b;
}
int batas(){
    int b;
    for(int i = 1; i <= 100; i++){
        if(isi(i) == "STOP"){
            b = i;
            break;
        }
    }
    return b;
}
int main(){
    string c[100];
    string d[100];
    int a = batas();
    for(int i = 1; i <= a; i++){
        string b;
        b = isi(i);
        c[i] = pisah(b)[0];
        d[i] = pisah(b)[1];
    }
    for(int i = 1; i <= a; i++){
        cout << c[i] << endl;
        cout << d[i] << endl;
    }
    cout << a;
    return 0;
}