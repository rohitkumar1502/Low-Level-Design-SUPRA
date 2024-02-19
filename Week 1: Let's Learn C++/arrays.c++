#include <iostream>
using namespace std;
void sumArrays(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << endl;
    }
}

void storeMultipleOfTen(int tableArray[], int size)
{
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        tableArray[i] = 2 * count;
        count++;
    }
}
void printArray(int tableArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << tableArray[i] << endl;
    }
}

void flipArray(int flip[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (flip[i] == 0)
        {
            flip[i] = 1;
        }
        else
        {
            flip[i] = 0;
        }
    }
}

void printFlipArray(int flip[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << flip[i] << endl;
    }
}

void print2DArray(int twoDArray1[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << twoDArray1[i][j] << " ";
        }
        cout << endl;
    }
}

void reverseArray(int arrayResvese[10], int size)
{
    int start = 0;
    int end = size -1;

    while(start < end ){
        // swap(arrayResvese[start] , arrayResvese[end]);
        int tem = arrayResvese[start];
        arrayResvese[start] = arrayResvese[end];
        arrayResvese[end]= tem;
        start++;
        end--;
    }
   

}
int main()
{
    // //declarations
    // int rohit[100];
    // //intialization
    // int array[]={2,4,5,6};
    // int array1[4]={2,4,5,6};
    // int array3[4]={2,4,5};

    // int arr[10]= {2, 4, 5, 51, 34, 56, 2, 67, 8, 89};
    // //cout<<arr[2];
    //  //traverse
    //  for(int i = 0; i<10; i++){
    //     cout<<arr[i]<<endl;
    //  }

    // Taking input in array
    // int arr[10];
    // for(int i = 0; i<10; i++){
    //     cin>>arr[i];
    //     cout<<arr[i]<<endl;
    // }
    // int arr[5]={10,20,30,40,50};
    // int sum =0;
    // for(int i =0; i<5; i++){

    //     sum = sum + arr[i];
    // }
    // cout<<sum;

    // pass array in function
    // int n = 5;
    // int arr1[5] = {1}; // 100000
    // int arr1[]= {0}  // 000000
    // int arr1[5]= {-1}; //-10000
    // int arr1[5];  // garbaze value

    // sumArrays(arr1, n);

    // multiplications Table
    // int size = 10;

    // int tableArray[10];
    // storeMultipleOfTen(tableArray, size);
    // printArray(tableArray, size);

    // Flip 1 to 0 and 0 to 1 in an Array
    // int size = 8;
    // int flip[8] = {0, 1, 1, 0, 0, 1, 1, 0};
    // flipArray(flip, size);

    // printFlipArray(flip, size);

    // 2D arrays;
    //     int twoDArray[][3] = {{1, 2, 3},
    //                           {4, 5, 6}};
    //     cout << twoDArray[1][0];

    //     // print 2D array
    //     int twoDArray1[3][4] = {{1, 2, 3, 4},
    //                             {5, 6, 7, 8},
    //                             {9, 10, 11, 12}};
    // int row = 3;
    // int col = 4;
    // for(int i = 0; i<row; i++){
    //     for(int j = 0; j<col; j++){
    //         cout<<twoDArray1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // print2DArray(twoDArray1, row, col);

    // Print Sum of entire array elements
    // int arraySum[] = {1,2,3,4,5,6};
    // int sum = 0;
    // int size = 6;
    // for(int i =0; i< 6; i++){
    //  sum = arraySum[i] + sum;
    // }
    // cout<< sum;

    // Initialise an Array with -1 in each block

    // int arrayOfAnyNumber[10];
    // fill(arrayOfAnyNumber, arrayOfAnyNumber + 10, -1);

    // for(int i = 0; i< 10; i++){
    //     cout<<arrayOfAnyNumber[i]<<endl;
    // }

    // Write a Function to Reverse an Array
    const int size = 10;
    int arrayResvese[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout<<"Original Array "<<endl;
    for(int i = 0; i< size; i++){
        cout<< arrayResvese[i]<<endl;
    }
    reverseArray(arrayResvese, size);

    cout<<"Reversed Array"<<endl;
    for(int i = 0; i< size; i++){
        cout<<arrayResvese[i]<<endl;
    }
    
    return 0;
}