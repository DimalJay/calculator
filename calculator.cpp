#include <iostream>
using namespace std;

class calculator {
    float num1, num2;

public:
    void addition(){
        float result;
        getInputs();
        result = num1 + num2;
        cout << "Answer " << num1 << " + " << num2 << " = " << result << endl;
    }

    void subtract(){
        float result;
        getInputs();
        result = num1 - num2;
        cout << "Answer " << num1 << " - " << num2 << " = " << result << endl;
    }

    void multiply(){
        float result;
        getInputs();
        result = num1 * num2;
        cout << "Answer " << num1 << " x " << num2 << " = " << result << endl;
    }

    void division(){
        float result;
        getInputs();
        result = num1 / num2;
        cout << "Answer " << num1 << " / " << num2 << " = " << result << endl;
    }

    void getInputs(){
        cout << "Enter First Number : ";
        cin >> num1;
        cout << "Enter Second Number : ";
        cin >> num2;
    }
};

int main() {
    int cmd;

    calculator cal;
    cout << "Enter Operation Number : " << endl;
    cout << " [1] - Addition (+)" << endl;
    cout << " [2] - Subtraction (-)" << endl;
    cout << " [3] - multiply (*)" << endl;
    cout << " [4] - devide (/)" << endl;
    cout << " [5] - Exit" << endl;
    cout << endl;

    cout << "Enter Number : ";
    cin >> cmd;

    switch (cmd){
    case (1):
        cal.addition();
        cout << endl;
        break;

    case (2):
        cal.subtract();
        cout << endl;
        break;

    case (3):
        cal.multiply();
        cout << endl;
        break;

    case (4):
        cal.division();
        cout << endl;
        break;

    case (5):
        cout << "Thank You !!!" << endl;
        return 0;

    default:
        cout << "Error" << endl;
        break;
    }
    main();
    return 0;
}


