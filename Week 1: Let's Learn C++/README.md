## Why C++ compiler round off the double value eg. 60.72699337 to 60.7270

### Sol:

In C++, the way floating-point numbers are displayed when printed to the console is often controlled by the default precision setting. When you output a double value to the console using std::cout in C++, it may get rounded or displayed with a limited number of decimal places, depending on the default precision.

        #include<iostream>
        int main() {
            double value = 60.72399337;
            std::cout << "Default precision: " << value << std::endl;
            return 0;
        }

In this example, the output may be something like:

Default precision: 60.7240

The default precision for displaying floating-point values is usually limited to a certain number of decimal places (often 6 or 8) for readability. If you need to control the precision, you can use the std::setprecision manipulator from the "iomanip" header:

            #include
            #include
            int main() {
                double value = 60.72399337;
                std::cout << "Custom precision: " << std::setprecision(10) << value << std::endl;
                return 0;
            }

In this example, the output will be:

Custom precision: 60.72399337

Here, std::setprecision(10) sets the precision to 10 decimal places. Adjust the argument to setprecision based on the level of precision you want in your output. Keep in mind that even though you set the precision for display, the actual precision and accuracy of the floating-point value are not changed. It only affects how the value is formatted when printed.

## Difference between High Level and Low level languages

Both High level language and low level language are the programming languages’s types. The main difference between high level language and low level language is that, Programmers can easily understand or interpret or compile the high level language in comparison of machine. On the other hand, Machine can easily understand the low level language in comparison of human beings. Examples of high level languages are C, C++, Java, Python, etc. Let’s see the difference between high level and low level languages:

[GFG Doc](https://www.geeksforgeeks.org/difference-between-high-level-and-low-level-languages/)

low level languages are much closer to machine code which is in the form of binary that makes it harder to understand but the memory allocation is highly efficient.
low level languages are machine dependent and difficult to maintain
while high level languages are easy to understand and platform independent means we can use it on any platoform it just need compiler or interpreter to execute.
c++ is considered as a balanced language which provides a balance between high level and low level language as it provides feature of high level as well as low level

## Return -1 in C++

In C++, the return -1; statement is commonly used to indicate an error or failure in a function that returns an integer. When a function encounters an error condition, it can return -1 (or any other negative value) to signal that something went wrong.

                int divide(int a, int b) {
                if (b == 0) {
                // Error: Division by zero
                return -1;
                } else {
                return a / b;
                }
              }
                int main() {
                int result = divide(10, 2);
                if (result == -1) {
                    std::cout << "Error: Division by zero occurred." << std::endl;
                } else {
                    std::cout << "Result: " << result << std::endl;
                }
                return 0;
                }
             </code>

if we pass the 0 in function divide(10,0) like this
Then the error will occur

## How Data is stored in C++?

### int:

Say, 25 is to be stored. Then its binary equivalent is 11001. 25 is integer, hence 4 bytes will be allocated to it.
[00000000 00000000 00000000 00011001]
If -25 is to be stored. Then we take its 2's Complement.
(25)base10 = [00000000 00000000 00000000 00011001]
=> 1's complement => [11111111 11111111 11111111 11100110] => 2's complement => [11111111 11111111 11111111 11100111]

### Char:

In C/C++, char data type follows ASCIl codes, hence for each character there is mapped value. For eg. A= 65, a =97, etc.
BY using char compiler understands 1 byte of memory is to be allocated and conversion occurs similarly like integer and remapped to the char.
similarly, all the data types is stored.

[en.wikipedia.org Doc](https://en.wikipedia.org/wiki/Computer_data_storage#:~:text=A%20modern%20digital%20computer%20represents,byte%2C%20equal%20to%208%20bits.)

## Decimal to Binary conversion

//include "bitset" Library
int decimalNum;
cout << "Enter Your Decimal Number Which one you want to covert: ";
cin >> decimalNum;
bitset<32> binaryRepresntation(decimalNum);
cout << "Binary Representation " << binaryRepresntation << endl;

## What is cin.ignore()

In C++, cin.ignore() is a function that is used to discard or ignore characters in the input buffer. It is often used after reading input using cin to clear any additional characters, such as newline characters, that may be left in the input buffer.

The basic syntax is as follows:

                 #include `<iostream>`
                 int main() {
                 // some code that reads from cin
                 cin.ignore(); // Ignores one character in the input buffer
               // rest of the code
                 return 0;
               }

It's important to note that cin.ignore() without any arguments ignores only one character. If you want to ignore a specific number of characters or until a specific delimiter, you can provide additional arguments.

For example, cin.ignore(n) will ignore the next 'n' characters in the input buffer. And cin.ignore(n, delimiter) will ignore up to 'n' characters or until the specified delimiter is encountered.

Here's an example:

              #include `<iostream>`
              int main()
               {
                   int n;
                   char delimiter;
                   std::cout << "Enter a number: ";
                   std::cin >> n;
                   std::cout << "Enter a delimiter: ";
                   std::cin >> delimiter;
                   std::cout << "You entered: " << n << " and delimiter: " << delimiter << std::endl;
                   // Ignore n characters or until the delimiter is encountered
                   std::cin.ignore(n, delimiter);
                   std::cout << "Remaining input after ignoring: ";
                   char remainingChar;
                   while (std::cin.get(remainingChar)) {
                       std::cout << remainingChar;
                   }
                   std::cout << std::endl;
                   return 0;
               }

If the user enters 123,456, the program will ignore the first 3 characters ('1', '2', '3') because n is set to 3, and it will stop ignoring characters when the delimiter (',') is encountered. The remaining input, '456', will be processed by the rest of the code.

              Enter a number: 123
              Enter a delimiter: ,
              You entered: 123 and delimiter: ,
              Remaining input after ignoring: 456

## What is cin.fail()
In C++, cin.fail() is a function that is used to check the state of the input stream (cin). It returns true if a previous input operation failed, and false otherwise.

Here's a common use case for cin.fail(): when you attempt to read data of a specific type (e.g., an integer) from the standard input using cin, and the input does not match the expected type, the input stream enters a fail state. cin.fail() can then be used to check if the failure occurred.



                         #include `<iostream>`
                         int main() {
                         int number;
                         std::cout << "Enter an integer: ";
                         std::cin >> number;

                         if (std::cin.fail()) {
                             std::cout << "Invalid input. Please enter a valid integer." << std::endl;
                             // Clear the fail state to allow further input attempts
                             std::cin.clear();
                             // Ignore any remaining characters in the input buffer
                             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                             } else {
                             std::cout << "You entered: " << number << std::endl;
                         }
                         return 0;
                      }


In this example, if the user enters a non-integer value (e.g., a character), cin.fail() will return true, and the program prints an error message. It also uses cin.clear() to clear the fail state, allowing further input attempts, and cin.ignore() to discard any remaining characters in the input buffer.

Example 1: Valid Input
Enter an integer: 42
You entered: 42

Example 2: Invalid Input
Enter an integer: abc
Invalid input. Please enter a valid integer.

## getline(cin, str)
The getline() function in C++ is used to read a line of text from the input stream. The general syntax is getline(cin, str), where cin is the input stream (typically std::cin for standard input) and str is a string variable where the line of text will be stored.

           #include <iostream>
           #include <string>
           int main() {
               std::string input;

                std::cout << "Enter a line of text: ";
                // getline(cin, str) reads a line of text from cin into the string variable 'input'
                std::getline(std::cin, input);
                 std::cout << "You entered: " << input << std::endl;
                return 0;
            }
In this example, std::getline(std::cin, input) reads a line of text from the standard input (cin) and stores it in the string variable input. The program then prints the entered text.

If you want to limit the number of characters read, you can use the third argument, which specifies the delimiter. For example, std::getline(std::cin, input, '\n') reads characters until a newline character ('\n') is encountered.

## Why we don't use case " "

Cannot use non-constant expressions, floating-point numbers, strings, objects, or variable declarations. The case labels must be constants integral or enumeration and also we can't add the declaration of any variable

## <code>for(; ;)</code> How It's Work

                      int i =51;
                      for(; ;){
                        if(i<91){
                          cout<<i<<endl;
                           i++;
                        }
                     }

## Loops

                  //print 1 to 100
                   for (int i = 1; i <= 100; i++)
                   {
                       cout << i;
                   }

                  // 100 to 1
                   int i =100;
                   while(i>=1){
                       cout<<i;
                       i--;
                   }

                   //Name 50 Times
                   int i = 1;
                   while (i<51)
                   {
                       cout<<"Number: "<<i<<" Rohit Kumar"<<endl;
                       i++;
                   }
    
                   //print 0 to -10 
                   for(int i = 0; i > -11; i--){
                       cout<<i<<endl;
                   }

                   //7 ka Table 
                   for(int i = 1; i < 11; i++){
                       cout<<7*i<<endl;
                   }

                  //   A to Z 
                   for(char ch = 'A'; ch<='Z'; ch++){
                       cout<<ch<<endl;
                   }

                   //a to z 

                   for(char ch = 'a'; ch <= 'z'; ch++){
                       cout<<ch<<endl;
                   }

## What Happen When you write for loop like this 

                 for(int i =0; i<5; i++); // warning: for loop has empty body [-Wempty-body]
                 {
                   cout<<i<<endl; // error: use of undeclared identifier 'i'
                 }



                 int i;
                 if(cin>>i){
                 cout<<i<<endl;   // print i the value
                 }



                  int i;
                  if(cout<<"Rohit "){
                      cout<<"kemar";   // printing both char cout 
                  }