#include <iostream>

using namespace std;

int main()
{
    int first, second;
    string op;
    cout << "First number" << endl;
    cin >> first;
    cout << "Operator" << endl;
    cin >> op;
    cout << "Second number" << endl;
    cin >> second;

    if (op == "+") {
        cout << "Result: " << first + second;
    }
    else if (op == "-") {
        cout << "Result: " << first - second;
    }
    else if (op == "/") {
        cout << "Result: " << first / second;
    }
    else if (op == "%") {
        cout << "Result: " << first % second;
    }
    else 
        cout << "Incorrect use" << endl;
    return 0;
}

