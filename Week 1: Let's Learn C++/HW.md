  HW

Why C++ compiler round off the double value eg. 60.72699337 to 60.7270
======================================================================

Sol:
----

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