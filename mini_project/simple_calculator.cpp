#include <iostream>
using namespace std;

int main(){
    float a,b,hasil;
    char aritmatika;

    cout << "selamat datang di simple kalkulator " << endl;

    // input user
    cout << "masukkan nilai: " ;
    cin >> a;
    cout << "pilih operator +,-,*,/: " ;
    cin >> aritmatika;
    cout << "masukkan nilai kedua: " ;
    cin >> b;

    cout << "\nHasil perhitungan: ";
    cout << a << aritmatika << b ;

    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else if (aritmatika == '/'){
        hasil =  a / b;
    } else {
        cout << "error" << endl;
    }

    cout << " = " << hasil << endl;

    return 0;
}