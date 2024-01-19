#include <iostream>
using namespace std;
int main()
{
    char Grade;
    cout << "Enter Your Grade: ";
    cin >> Grade;
    // if(Grade == 'A'){
    //     cout<<"Your Grade might be between 90-100"<<endl;
    // }
    // else if(Grade == 'B'){
    //     cout<<"Your Grade might be between 80-90"<<endl;
    // }
    // else if(Grade == 'C'){
    //     cout<<"Your Grade might be between 70-80"<<endl;
    // }
    // else if(Grade == 'D'){
    //     cout<<"Your Grade might be between 60-70"<<endl;
    // }
    // else{
    //     cout<<"Your Grade might be between 0-60"<<endl;
    // }

    switch (Grade)
    {
    case 'A':
        cout << "Your Grade might be between 90-100" << endl;
        break;
    case 'B':
        cout << "Your Grade might be between 80-90" << endl;
        break;
    case 'C':
        cout << "Your Grade might be between 70-80" << endl;
        break;
    case 'D':
        cout << "Your Grade might be between 60-70" << endl;
        break;

    default:
        cout << "Your Grade might be between 0-60" << endl;
        break;
    }
    return 0;
}