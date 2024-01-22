#include<iostream>
using namespace std;

// Write a function to print 1 to 100 counting
void oneToHun(){
    for(int i = 1; i<101; i++){
        cout<<i<<endl;
    }
}

// Write a function to print simpple interest
int simpleInterest(int p, int r, int t){
    int Total = p * r * t/100;
    return Total;
}

int main(){
    //oneToHun();
   int result = simpleInterest(200, 10, 3);
   cout<<result;

}