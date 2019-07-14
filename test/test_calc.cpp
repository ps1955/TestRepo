#include <iostream>

using namespace std;
void calc();

int main ()
{
    calc();
    return 0;
}

void calc()
{
    int a , b; char c;
    int sum , diff , quotient , remainder , product ;
    cout << "enter A NUMBER " << endl;
    cin >> a;
    cout << "enter Another NUMBER " << endl;
    cin >> b;
    sum = a+b;
    diff = a-b;
    quotient = int (a/b);
    remainder = a%b;
    product = a*b;
    cout << "enter the operator " << endl;
    cin >> c ;
    if (c=='+')
        cout << "the sum of those numbers is " << sum <<  endl;
    else if (c=='-')
        cout << "the diff of those numbers is " << diff <<  endl;
    else if (c=='/')
        cout << "the quotient of those numbers is " << quotient <<  endl;
    else if (c=='%')
        cout << "the remainder of those numbers is " << remainder <<  endl;
    else if (c=='*')
        cout << "the product of those numbers is " << product <<  endl;
    else
        cout << " the operator is not present in the calculator" << endl ;
}
