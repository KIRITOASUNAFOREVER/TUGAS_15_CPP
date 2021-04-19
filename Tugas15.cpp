#include <iostream>
using namespace std;

int hasilkali(int *px, int *py){
    int hasil;
    hasil = *px * *py;
    return hasil;
}

int main(){
    int x, y;
    cout << "Inputkan X : " ;
    cin >> x;
    cout << "Inputkan X : " ;
    cin >> y;
    cout << "Hasil : " << hasilkali(&x, &y) << endl;
    return 0;
}
