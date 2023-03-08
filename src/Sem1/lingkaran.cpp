//buat lingkaran sempurna dengan diameter yang ditentukan
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int diameter;
    cout << "Masukkan diameter lingkaran: ";
    cin >> diameter;
    for(int i = 0; i < diameter; i++){
        for(int j = 0; j < diameter; j++){
            if(sqrt(pow(i-diameter/2,2)+pow(j-diameter/2,2)) <= diameter/2){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}