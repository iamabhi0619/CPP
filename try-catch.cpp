#include <iostream>
using namespace std;
void checkTemp(int temp) {
    if (temp < 14) {
        throw "The temperature is already too low!";
    } else if (temp > 50) {
        throw "Please enter a correct temperature 14-15.";
    }
}

int main() {
    cout << "Enter the temperature: ";
    int temp;
    cin >> temp;

    try {
        checkTemp(temp);
        cout << "AC is turned ON." << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    return 0;
}
