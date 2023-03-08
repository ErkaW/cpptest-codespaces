#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m,o,Xf,Yf;
string c;
string d[1019];

int main() {
    //Nama: Wafi Athanusa Sakti
    //NIM: 225150307111004
    
    cin>>n;
    for(int i=0;i<n;j++)
    {
        cin>>m;
        cin>>c;
        for(int j=0;j<m;j++,o++)
        {
            d[o]=c;
        }
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        m--;
        if(d[m]=="atas")
        {
            Yf++;
        }
        else if(d[m]=="bawah")
        {
            Yf--;
        }
        else if(d[m]=="kanan")
        {
            Xf--;
        }
        else if(d[m]=="kiri")
        {
            Xf++
        }
    }
    co​ut<<"Koordi​nat ​robot saat ini : ("<<X​f<<","<<Yf<<")";
}