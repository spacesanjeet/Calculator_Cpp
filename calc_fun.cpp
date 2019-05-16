#include <iostream>
#include <math.h> // for mathematics calculations
using namespace std;

// function declarations

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
int modulo(int a, int b);
float floor_division(float a, float b);
float square(float a);
float square_root(float a);
float cube(float a);

int main()
{
    float num1, num2, result; // float variables
    int choice, num3, num4;  // integer variables
    while(1 == 1)  // while loop to make sure program runs until the user chooses to quit
    {
        cout << "Calculator Menu" << "\n";  // the option menu for calculations
        cout << "1. Addition" << "\n";
        cout << "2. Subtraction" << "\n";
        cout << "3. Multiplication" << "\n";
        cout << "4. Division" << "\n";
        cout << "5. Modulus" << "\n";
        cout << "6. Floor Division" << "\n";
        cout << "7. Square" << "\n";
        cout << "8. Square Root" << "\n";
        cout << "9. Cube" << "\n";
        cout << "10. Quit" << "\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 1)  // addition
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            result = addition(num1, num2);
            cout << "The result is: " << result << "\n";
            cout << "\n";
        }
        else if(choice == 2)  // subtraction
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            result = subtraction(num1, num2);
            cout << "The result is: " << result << "\n";
            cout << "\n";
        }
        else if(choice == 3)  // multiplication
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another:" << "\n";
            cin >> num2;
            result = multiplication(num1, num2);
            cout << "The result is: " << result << "\n";
            cout << "\n";
        }
        else if(choice == 4)  // division
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            try  // exception handler
            {
                if(num2 == 0)
                    throw num2;
                else
                    result = division(num1, num2);
                    cout << "The result is: " << result << "\n";
                    cout << "\n";
            }
            catch(float x)
            {
                cout << "Can`t divide by " << x << "\n";
                cout << "\n";
            }
        }
        else if(choice == 5)  // modulus division
        {
            cout << "Enter a number:" << "\n";
            cin >> num3;
            cout << "Enter another number:" << "\n";
            cin >> num4;
            try  // exception handler
            {
                if(num4 == 0)
                    throw num4;
                else
                    result = modulo(num3, num4);
                    cout << "The result is: " << result << "\n";
                    cout << "\n";
            }
            catch(int x)
            {
                cout << "Can`t modulo divide by " << x << "\n";
                cout << "\n";
            }
        }
        else if(choice == 6)  // floor division
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            try  // exception handler
            {
                if(num2 == 0)
                    throw num2;
                else
                    result = floor_division(num1, num2);
                    cout << "The result is: " << result << "\n";
                    cout << "\n";
            }
            catch(float x)
            {
                cout << "Can`t floor divide a number by " << x << "\n";
                cout << "\n";
            }
        }
        else if(choice == 7)  // square
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            result = square(num1);
            cout << "The square of " << num1 << " is " << result << "\n";
            cout << "\n";
        }
        else if(choice == 8)  // square root
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            result = square_root(num1);
            cout << "The square root of " << num1 << " is " << result << "\n";
            cout << "\n";
        }
        else if(choice == 9)  // cube
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            result = cube(num1);
            cout << "The cube of " << num1 << " is " << result << "\n";
            cout << "\n";
        }
        else if(choice == 10)  // quit
        {
            cout << "Thanks for visiting!" << "\n";
            break;
        }
        else  // unknown input
        {
            cout << "Wrong choice!" << "\n";
            cout << "\n";
        }
    }
    return 0;
}

// function definitions

float addition(float a, float b)
{
    return(a+b);
}
float subtraction(float a, float b)
{
    return(a-b);
}
float multiplication(float a, float b)
{
    return(a*b);
}
float division(float a, float b)
{
    return(a/b);
}
int modulo(int a, int b)
{
    return(a%b);
}
float floor_division(float a, float b)
{
    return(floor(a/b));
}
float square(float a)
{
    return(a*a);
}
float square_root(float a)
{
    return(sqrt(a));
}
float cube(float a)
{
    return(a*a*a);
}
