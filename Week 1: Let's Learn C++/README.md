## Why C++ compiler round off the double value eg. 60.72699337 to 60.7270

### Sol:

In C++, the way floating-point numbers are displayed when printed to the console is often controlled by the default precision setting. When you output a double value to the console using std::cout in C++, it may get rounded or displayed with a limited number of decimal places, depending on the default precision.

        #include

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