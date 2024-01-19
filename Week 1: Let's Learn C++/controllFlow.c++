#include <iostream>
using namespace std;
int main()
{
    // int budget;
    // cout << "Enter You budget: ";
    // cin>>budget;
    // if (budget > 200000)
    // {
    //     cout << "You have enough money to buy car" << endl;
    // }
    // else
    // {
    //     cout << "you dot't have much money to buy a car" << endl;
    // }

    // int age = 10;
    // if (age >= 18){
    //     cout<<"You are eligible Vote"<<endl;
    // }
    // else{
    //     cout<<"You are not eligible to Vote"<<endl;
    // }
    // int marks = 50;
    // if(90<marks){
    //     cout<<"Grade is A"<<endl;
    // }
    // else if(70<marks){
    //     cout<<"Grade is B"<<endl;
    // }
    // else if(50<marks){
    //     cout<<"Grade is C"<<endl;
    // }
    // else{
    //     cout<<"Grade is D"<<endl;
    // }

    //Nested id
    int height;
    cout<<"Enter the Height: "<<endl;
    cin>>height;

    int weight;
    cout<<"Enter the weightL "<<endl;
    cin>>weight;
    if(height>5.5){
        if(weight>80){
            cout<<"You have good BMI"<<endl;
        }
        else{
            cout<<"Man go for Exercise"<<endl;
        }
    }
    else{
        cout<<"man go for Running on the dailly basis"<<endl;
    }

    return 0;
}