#include <iostream>
#include <math.h> // for mathematics functions
using namespace std;
int main()
{
    int choice, num3, num4; // integer variables
    float num1, num2, result, floor_result; // float variables
    while(true)  // while loop to make sure the menu works till the user doesn't quit
    {
        cout << "Calculator Menu" << "\n";
        cout << "1. Addition" << "\n";
        cout << "2. Subtraction" << "\n";
        cout << "3. Multiplication" << "\n";
        cout << "4. Division" << "\n";
        cout << "5. Modulus" << "\n";
        cout << "6. Floor Division" << "\n";
        cout << "7. Square" << "\n";
        cout << "8. Square root" << "\n";
        cout << "9. Cube" << "\n";
        cout << "10. Quit" << "\n";
        cout << "Enter a choice: ";
        cin >> choice;
        if(choice == 1) // addition
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            result = num1 + num2;
            cout << "The result is " << result;
            cout << "\n";
        }
        else if(choice == 2) // subtraction
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            result = num1 - num2;
            cout << "The result is " << result;
            cout << "\n";
        }
        else if(choice == 3) // multiplication
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            result = num1 * num2;
            cout << "The result is " << result;
            cout << "\n";
        }
        else if(choice == 4) // division
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            if(num2 == 0)
            {
                cout << "Can't divide a number by zero" << "\n";
                cout << "Enter number 2 again:" << "\n";
                cin >> num2;
            }
            result = num1 / num2;
            cout << "The result is " << result;
            cout << "\n";
        }
        else if(choice == 5) // modulus division
        {
            cout << "Enter a number:" << "\n";
            cin >> num3;
            cout << "Enter another number:" << "\n";
            cin >> num4;
            if(num4 == 0)
            {
                cout << "Can't modulo divide a number by zero" << "\n";
                cout << "Enter number 2 again:" << "\n";
                cin >> num4;
            }
            result = num3 % num4;
            cout << "The result is " << result;
            cout << "\n";
        }
        else if(choice == 6)  // floor division
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            cout << "Enter another number:" << "\n";
            cin >> num2;
            if(num2 == 0)
            {
                cout << "Can't divide a number by zero" << "\n";
                cout << "Enter number 2 again:" << "\n";
                cin >> num2;
            }
            result = num1 / num2;
            floor_result = floor(result);
            cout << "The result is " << floor_result;
            cout << "\n";
        }
        else if(choice == 7) // square
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            result = num1 * num1;
            cout << "The square of " << num1 << " is " << result;
            cout << "\n";
        }
        else if(choice == 8) // square root
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            result = sqrt(num1);
            cout << "The square root of " << num1 << " is " << result;
            cout << "\n";
        }
        else if(choice == 9) // cube
        {
            cout << "Enter a number:" << "\n";
            cin >> num1;
            result = num1 * num1 * num1;
            cout << "The cube of " << num1 << " is " << result;
            cout << "\n";
        }
        else if(choice == 10) // quit
        {
            cout << "Thanks for visiting!";
            break;
        }
        else
            cout << "Wrong choice";
            cout << "\n" << "\n";
    }
    return 0;
}
