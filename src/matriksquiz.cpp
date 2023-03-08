#include <iostream>
using namespace std;
class Matriks{
    public:
        int baris, kolom;
        int data[100][100];
        Matriks(int baris, int kolom){
            this->baris = baris;
            this->kolom = kolom;
        }
        void input(){
            for (int i = 0; i < this->baris; i++){
                for (int j = 0; j < this->kolom; j++){
                    cout << "Masukkan data baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
                    cin >> this->data[i][j];
                }
            }
        }
        void output(){
            cout << "Matriks A = " << endl;
            for (int i = 0; i < this->baris; i++){
                for (int j = 0; j < this->kolom; j++){
                    cout << this->data[i][j] << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    int a,b;
    cout << "Masukkan jumlah baris matriks A: ";
    cin >> a;
    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> b;
    Matriks A(a,b);
    A.input();
    A.output();
    return 0;
}