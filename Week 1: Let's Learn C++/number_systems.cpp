#include <iostream>
#include <cmath>
using namespace std;

int deciamlToBinary(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        // int bit = n % 2; // division methods
        int bit = (n & 1); // Bitwise methods
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}
int main()
{
    int n;
    cin >> n;
    // int binary = deciamlToBinary(n);
    // cout<<binary<<endl;

    int deciaml = binaryToDecimal(n);
    cout << deciaml << endl;
}