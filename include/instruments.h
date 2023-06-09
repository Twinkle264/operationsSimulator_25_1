#pragma once

#include <iostream>

using namespace std;

struct coordinates {
    double x;
    double y;
};

void scalpel(vector<coordinates> &incisions) {
    coordinates cor;
    cout << "Enter the coordinates for scalpel:";
    cin >> cor.x >> cor.y;
    incisions.push_back(cor);
    cout << "an incision was made from " << cor.x << " to " << cor.y << endl;
    cout << endl;
}

void hemostat() {
    double x;
    cout << "Enter the point to hemostat" << endl;
    cin >> x;
    cout << "The hemostat is applied at the point " << x << endl;
    cout << endl;
}

void tweezers() {
    double x;
    cout << "Enter the point to tweezers" << endl;
    cin >> x;
    cout << "The tweezers is applied at the point " << x << endl;
    cout << endl;
}

void suture(vector<coordinates> &incisions) {
    coordinates cor;
    cout << "Incisions coordinates: " << endl;
    for (int i = 0; i < incisions.size(); ++i) {
        cout << "Incision (" << incisions[i].x << ' ' << incisions[i].y << ")" << endl;
    }

    cout << "Enter the coordinates for suturing: " << endl;
    cin >> cor.x >> cor.y;

    for (int i = 0; i < incisions.size(); ++i) {
        if ((cor.x == incisions[i].x and cor.y == incisions[i].y) or
            (cor.x == incisions[i].y and cor.y == incisions[i].x)) {
            incisions.erase(incisions.begin() + i);
            cout << "The incision (" << cor.x << " " << cor.y << ") is sutured" << endl;
            break;
        }
    }
    cout << endl;
}