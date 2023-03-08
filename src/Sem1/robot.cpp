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
    int N;
    string C;
    string D[1019];
    int P = 0;
    int H;
    long long x = 0, y = 0;
    int M;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> C >> H;
        for(int j = 0; j < H; j++, P++)
        {
            D[P] = C;
        }
    }
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>M;
        M--;
        if(D[M]=="atas")
        {
            y++;
        }
        else if(D[M]=="bawah")
        {
            y--;
        }
        else if(D[M]=="kanan")
        {
            x++;
        }
        else if(D[M]=="kiri")
        {
            x--;
        }
    }
    cout << "Koordinat robot saat ini : (" << x << "," << y << ")" << endl;
    return 0;
}
