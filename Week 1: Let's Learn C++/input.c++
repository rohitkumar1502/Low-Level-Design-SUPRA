#include <iostream>
using namespace std;
int main()
{
    // int marks;
    // bool marks;

    // cout<<"Enter Your marks: ";
    // cin>>marks;
    // cout<<"Your Marks is: "<<marks<<endl;

    // cin.ignore

    int n;
    char delimiter;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the char: ";
    cin >> delimiter;
    cout << "You Enter: " << n << " delimiter is: " << delimiter << endl;
    cin.ignore(n, delimiter);
    cout << "Reaming Output after ignoring ";
    char remaingChar;
    while (cin.get(remaingChar) && remaingChar != delimiter)
    {
        cout << remaingChar;
    }
    cout << endl;
    return 0;
}