#include<iostream>
using namespace std;

int sum(int a, int b){
    int totalSum = a + b;
    return totalSum;
}

int getMultiNum(int x, int y, int z){
    int Total = x*y*z;
    return Total; 
}

void nameTenTimes(){
    for(int i = 1; i<11; i++){
        cout<<"Rohit Kumar"<<endl;
    }
}

void printMulti(int n){
    for(int i = 1; i<11; i++){
        cout<<n*i<<endl;
    }
}

void printMyName(){
    cout<<"Rohit Kumar"<<endl;
}

int convertIntoCel(int far){
    int cel = (far -32)*5/9;
    return cel;
}

char convertIntoUperCase(int ch){
    char answers = ch -'a' + 'A';
    return answers;
}
int main(){
// int result = sum(12, 4);
// cout<<result<<endl;
//printMyName();
// int result = getMultiNum(3, 4, 2);
// cout<<result<<endl;
//nameTenTimes();
//printMulti(2);
// int result = convertIntoCel(80);
// cout<<result<<endl;

char result = convertIntoUperCase('a');
cout<<result<<endl;

return 0;
}