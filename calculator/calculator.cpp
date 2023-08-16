#include <iostream>

using namespace std;
string user = "Hallo";

int main()
{
    double num1 = 0, num2 = 0;
    char type;
    cout << "Enter your first Number: " << endl;
    cin >> num1;
    cout << "Enter your math type: " << endl;
    cin >> type;
    cout << "Enter your second Number: " << endl;
    cin >> num2;
    if (type == '+')
    {
        cout << num1 + num2;
    }
    if (type == '-')
    {
        cout << num1 - num2;
    }
    if (type == '*')
    {
        cout << num1 * num2;
    }
    if (type == '/')
    {
        cout << num1 / num2;
    }
    return 0;
}
