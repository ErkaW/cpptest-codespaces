#include <iostream>
using namespace std;
int main(){
    int x=2, y=0;
    for (y=0; y<10; y++){
        if (y%x==0){
            continue;
        }else if(y==8){
            break;
        }else{
            cout << y << endl;
        }
    }
}