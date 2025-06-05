#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;

    mp["aman"] = 25;
    mp["aryan"] = 19;
    mp["papa"] = 55;
    mp["mum"] = 51;

    // insert
    mp["dog"] = 5;

    // erase
    mp.erase("aman");

    // size
    cout << "Size of map: " << mp.size() << endl;

    // count check
    if (mp.count("aryan") == 1) {
        cout << "aryan exists" << endl;
    } else {
        cout << "aryan does not exist" << endl;
    }

    // find example
    auto it = mp.find("dog");
    if (it != mp.end()) {
        cout << "Found using find(): " << it->first << " -> " << it->second << endl;
    } else {
        cout << "dog not found\n";
    }

    // print all map contents
    cout << "Contents of map:\n";
    for (auto it : mp) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}
