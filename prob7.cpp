#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // Input text from the user

    cout << "Original text: " << str; // Display original text

    // Iterate through the string
    for (int j = 0; j < (int)str.size(); j++) {
        string key = str.substr(j, 3), repl; // Extract a substring of length 3
        if (key == "fox") { // Check if the extracted substring matches "fox"
            repl = "cat"; // If matched, replace with "cat"
            for (int k = 0; k < 3; k++) {
                str[j + k] = repl[k]; // Replace the matched substring in the original text
            }
        }
    }

    cout << "\nNew text: " << str << endl; // Display the modified text

    return 0;
}
