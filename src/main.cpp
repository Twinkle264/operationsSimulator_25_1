#include <iostream>
#include "../include/instruments.h"
#include <string>

using namespace std;

int main() {
    cout << "\tOperations Simulator" << endl;
    cout << "To start the operation, enter \"scalpel\"" << endl;
    string command;

    cin >> command;

    if (command == "scalpel") {
        vector<coordinates> incisions;
        scalpel(incisions);

        while (true) {
            cout << "Enter the name of operation (scalpel, hemostat, tweezers, suture): ";
            cin >> command;

            if (command == "scalpel") {
                scalpel(incisions);
            } else if (command == "hemostat") {
                hemostat();
            } else if (command == "tweezers") {
                tweezers();
            } else if (command == "suture") {
                suture(incisions);
                if (incisions.empty()) {
                    break;
                }
            }
        }
    }
    cout << endl << "\tThe operation is finished!";
    return 0;
}
