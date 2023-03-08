#include <iostream>
using namespace std;
int main(){
    int baris,kolom;
    int matriks[100][100];
    cout << "Masukkan jumlah baris matriks A: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> kolom;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << "Masukkan data baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> matriks[i][j];
        }
    }
    cout << "Matriks A = " << endl;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Tekan enter untuk menunjukkan Matriks Identitas dari Matriks A" << endl;
    cin.get();
    cin.get();
    cout << "Matriks Identitas dari Matriks A = " << endl;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            if(i==j){
                if(matriks[i][j]==1){
                    cout << "1 ";
                }else{
                    cout << "0 ";
                }
            }else{
                if(matriks[i][j]==0){
                    cout << "1 ";
                }else{
                    cout << "0 ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}