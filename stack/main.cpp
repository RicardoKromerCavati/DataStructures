#include <iostream>
#include "stack.h"

using namespace std;

void showMenu()
{
    cout << "[0] Stop\n";
    cout << "[1] Push\n";
    cout << "[2] Pop\n";
    cout << "[3] Print stack\n";
    cout << "[4] Verify length\n";
    cout << "[5] Verify is empty\n";
    cout << "[6] Verify is full\n";
}

int main()
{
    Stack stack1;

    StackItem item;

    int option;

    cout << "Stack program :)\n";

    do
    {
        showMenu();

        cin >> option;

        //TODO Continue here

    } while (option != 0);

    cout << "Shuting down successfully";

    return 0;
}