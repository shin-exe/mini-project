#include <iostream>
using namespace std;

int main()
{
    float a,b,result;
    char aritmatika;

    cout << "wellcome to simple calculator " << endl;

    // input user
    cout << "input number: " ;
    cin >> a;
    cout << "select operator +,-,*,/: " ;
    cin >> aritmatika;
    cout << "input second number: " ;
    cin >> b;

    cout << "\nResult: ";

    switch(aritmatika)
    {
    case '+': result = a + b;
        cout << a << aritmatika << b << " = " << result << endl;
    break;
    case '-': result = a - b;
        cout << a << aritmatika << b << " = " << result << endl;
    break;
    case '*': result = a * b;
        cout << a << aritmatika << b << " = " << result << endl;
    break;
    case '/': result = a / b;
        cout << a << aritmatika << b << " = " << result << endl;
    break;
     default: cout << "wrong operator" << endl;
    }


    return 0;
}
