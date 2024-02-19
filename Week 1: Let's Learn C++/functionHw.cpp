#include <iostream>
#include <cmath>
using namespace std;

// Write a function to print 1 to 100 counting
void oneToHun()
{
    for (int i = 1; i < 101; i++)
    {
        cout << i << endl;
    }
}

// Write a function to print simpple interest
int simpleInterest(int p, int r, int t)
{
    int Total = p * r * t / 100;
    return Total;
}

// Write a function to print prime number from 1 to 100; *^+++++++
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrimes()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

// Write a function to check some one eligible for voting or not
bool checkVotingEli(int age)
{
    return (age >= 18) ? true : false;
}

// Write a SIP calculator by usin function 


int main()
{
    // oneToHun();
    // int result = simpleInterest(200, 10, 3);
    // cout<<result;
    // printPrimes();
   // int age = 17;
    //cout << (checkVotingEli(age) ? "You are Eligible" : "You are not eligible");

    // input a;
   

    return 0;
}