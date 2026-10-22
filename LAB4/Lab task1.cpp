/*
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
 
 
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int a, b;
    char comma;

    cout << "Enter two numbers: ";
    cin >> a;

    if (cin.peek() == ',') {
        cin >> comma;
    }
    cin >> b;
    if (a > b) {
        cout << a << " is larger";
    }
    else if (b > a) {
        cout << b << " is larger";
    }
    else {
        cout << "Both numbers are equal";
    }
    return 0;
}




#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 12; i++) {
        cout << i << " ";
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << i << " ";
        i++;
    }

    return 0;
}

*/




#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}












