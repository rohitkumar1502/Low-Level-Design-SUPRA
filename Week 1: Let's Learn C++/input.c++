#include<iostream>
using namespace std;
int main(){
    // int marks;
    // bool marks;


    // cout<<"Enter Your marks: ";
    // cin>>marks;
    // cout<<"Your Marks is: "<<marks<<endl;

    // cin.ignore

    int n;
    char someChar;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the char: ";
    cin.ignore(n, someChar);
    
    return 0;
}