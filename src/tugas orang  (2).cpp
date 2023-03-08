#include <iostream>
using namespace std;
int baris, kolom;
int matriksA[100][100], matriksIdentitas[100][100];
int isiMatriksA(){
    cout << "Masukkan jumlah baris matriks A : ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks A : ";
    cin >> kolom;
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << "Masukkan data baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> matriksA[i][j];
        }
    }
    return 0;
}
int showMatriksA(){
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
int identitasMatriks(){
    if (baris == kolom){
        for (int i = 0; i < baris; i++){
            for (int j = 0; j < kolom; j++){
                if (i == j){
                    matriksIdentitas[i][j] = 1;
                } else {
                    matriksIdentitas[i][j] = 0;
                }
            }
        }
        cout << "Matriks identitas dari matriks A : " << endl;
        for (int i = 0; i < baris; i++){
            for (int j = 0; j < kolom; j++){
                cout << matriksIdentitas[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matriks A bukan matriks identitas" << endl;
    }
    return 0;
}
int main(){
    cout << "Matriks A dan Matriks Identitas dari Matriks A" << endl;
    isiMatriksA();
    cout << "Matriks A : " << endl;
    showMatriksA();
    cout << "Tekan enter untuk melihat matriks identitas dari matriks A" << endl;
    cin.get();
    identitasMatriks();
    return 0;
}