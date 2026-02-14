#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    float ang1, ang2, ang3; // Declaring floating-point variables for angles of the triangle

    cout << "\n\n Find the third angle of a triangle :\n"; // Outputting a message indicating calculation of the third angle
    cout << "-----------------------------------------\n"; // Outputting a separator line

    cout << " Input the 1st angle of the triangle : "; // Prompting the user to input the 1st angle of the triangle
    cin >> ang1; // Taking input for the 1st angle from the user

    cout << " Input the 2nd angle of the triangle : "; // Prompting the user to input the 2nd angle of the triangle
    cin >> ang2; // Taking input for the 2nd angle from the user

    ang3 = 180 - (ang1 + ang2); // Calculating the third angle of the triangle: 180 - (sum of the 1st and 2nd angles)

    cout << " The 3rd of the triangle is : " << ang3 << endl; // Displaying the calculated third angle of the triangle
    cout << endl; // Outputting a blank line for better readability

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function
