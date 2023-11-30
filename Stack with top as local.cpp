#include <iostream>
#define MAX 5
using namespace std;

int stack[MAX];

int push(int t, int x) {
    if (t == MAX - 1)
        cout << "\nOverflow";
    else {
        t++;
        stack[t] = x;
    }
    return t;
}

int pop(int t) {
    if (t == -1)
        cout << "Underflow";
    else {
        cout << "Deleted element is: " << stack[t];
        t--;
    }
    return t;
}

void display(int t) {
    cout << "Array elements:" << endl;
    for (int i = t; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    int ch, ele, top = -1;
    do {
        cout << "\nEnter 1 for push ";
        cout << "\nEnter 2 for pop ";
        cout << "\nEnter 3 for display ";
        cout << "\nEnter 4 for exit ";
        cout << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter value to be entered: ";
            cin >> ele;
            top = push(top, ele);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            display(top);
            break;
        }
    } while (ch != 4);

    return 0;
}
