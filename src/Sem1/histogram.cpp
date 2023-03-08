#include <iostream>

using namespace std;

class Histogram{
    private:
        int *array;
        int size;
    public:
        Histogram(int *array, int size){
            this->array = array;
            this->size = size;
        }
        void print(){
            for (int i = 0; i < this->size; i++){
                if (this->array[i] < 10){
                    cout << " " << this->array[i] << " ";
                } else {
                    cout << " " << this->array[i] << "";
                }
            }
            cout << endl;
        }
        void printHistogram(){
            int biggest = 0;
            for (int i = 0; i < this->size; i++){
                if (this->array[i] > biggest){
                    biggest = this->array[i];
                }
            }
            for (int i = biggest; i > 0; i--){
                for (int j = 0; j < this->size; j++){
                    if (this->array[j] >= i){
                        cout << " # ";
                    } else {
                        cout << "   ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            this->print();
        }
};

int main() {
    int array[] = {20,13,2,32,8,10};
    int size = sizeof(array)/sizeof(array[0]);
    Histogram histogram(array, size);
    histogram.printHistogram();
    cout << endl;
    system("pause");
    return 0;
}