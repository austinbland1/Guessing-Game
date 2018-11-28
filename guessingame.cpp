#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    int number;
    number = rand() % 1000 + 1;
    int guess;
    do {
        cout << "Enter your estimate: ";
        cin >> guess;
        if (guess < number)
        cout << "Higher!" << endl;
        else if (guess > number)
        cout << "Lower!" << endl;
        else
        cout << "Correct!" << endl;
        } while (guess != number);
        return 0;
}