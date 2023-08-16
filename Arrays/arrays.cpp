#include <iostream>

using namespace std;

void arr(string name)
{
    cout << "Hello " << name << endl;
    int luckyNums[] = {3, 4, 5, 6, 7, 8, 9};
    cout << luckyNums[1] << endl;
    luckyNums[3] = 200;
    cout << luckyNums[3] << endl;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
int subtract(int num1, int num2)
{
    return num1 - num2;
}
int multiply(int num1, int num2)
{
    return num1 * num2;
}
int divide(int num1, int num2)
{
    return num1 / num2;
}
int cube(int num1)
{
    return num1 * num1;
}

int main()
{
    cout << "add " << add(1, 2) << endl;
    cout << "subtract " << subtract(5, 2) << endl;
    cout << "multiply " << multiply(3, 2) << endl;
    cout << "divide " << divide(10, 2) << endl;
    cout << "cube " << cube(4) << endl;
    arr("The Choosen One");
    return 0;
}
