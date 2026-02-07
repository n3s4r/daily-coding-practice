#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[50];
    int heights[50];
    bool can_live_in_shade[50];

    int minHeight;
    bool needsShade;

    cout << "Enter minimum height: ";
    cin >> minHeight;
    cout << "Needs shade? (1 for Yes, 0 for No): ";
    cin >> needsShade;

    for (int i = 0; i < 50; i++) {
        if (heights[i] >= minHeight && can_live_in_shade[i] == needsShade) {
            cout << names[i] << endl;
        }
    }
    return 0;
}
