#include <iostream>

using namespace std;

// Function 'test' calculates the sum of digits for all numbers between x and y (inclusive)
int test(int x, int y)
{
    int digit_sum = 0;
    for(int i = x; i <= y; ++i)
    {
        int p = i;
        // Loop to extract digits and calculate their sum for each number between x and y
        while(p > 0)
        {
            digit_sum += p % 10; // Extract the last digit of the number and add it to digit_sum
            p /= 10; // Remove the last digit from the number
        }
    }
    return digit_sum; // Return the total sum of digits between x and y
}

int main() {
   // Define the range of numbers to calculate the sum of their digits
   int n1 = 39;
   int n2 = 41;

   // Display the range of numbers and the sum of their digits using the 'test' function
   cout << "Add up all the digits between " << n1 << " and " << n2 << " is: ";
   cout << test(n1, n2) << endl;
}
