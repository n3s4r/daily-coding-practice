/*Write a Java program to reverse a string.
Input Data:
Input a string: The quick brown fox

Expected Output:
Reverse string: xof nworb kciuq ehT
*/

class Main {
    public static void main(String[] args) {
        String[] test = {"T", "h", "e", " ", "q", "u", "i", "c", "k", " ", "b", "r", "o", "w", "n", " ", "f", "o", "x"};
        
        for(int i = test.length - 1; i >= 0; i--)
        {
            System.out.print(test[i]);
        }
    }
}
