#include <iostream>
using namespace std;
int main()
{
    // Variable define
    //  int age = 22;
    //  cout<<"My age is "<<age<<endl;

    // decalartion
    // int age;
    // cout<<age<<endl; // By default the datatype store generic value in my compiler give me 1

    // int age = 21;
    // cout << age << endl; // redecalartion not allow

    // manipulation
    // age = 26;
    // cout<< age <<endl;

    // int count = 5;
    // float shere = 3.04;
    // char alpha = 'A';
    // double wqeight = 60.72699337;
    // bool isMale = true; // false or 1 and 0

    // cout << count << endl;
    // cout << shere << endl;
    // cout << alpha << endl;
    // cout << wqeight << endl;
    // cout << isMale << endl;
    // int age = 12;
    // cout << sizeof(age);
    // redifiniion
    int age = 12;
    {
        int age = 13;
    }
    {
        int age = 15;
        {
            int age = 17;
        }
    }
    return 0;
}