#include <iostream>
#include <string>

using namespace std;

void generatePattern(int num) {
    for (int i = 1; i <= num; ++i) {
        string spaces(num - i, ' ');
        string stars(i, '*');
        string pluses(i - 1, '+');
        cout << spaces << stars << pluses << endl;
    }
}

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if (num == 5) {
        generatePattern(num);
    } else {
        int new_num = (num % 5) + 5;
        generatePattern(new_num);
    }

    return 0;
}
