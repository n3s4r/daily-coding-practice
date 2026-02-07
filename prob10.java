import java.util.Scanner;

public class PlantSearch {
    public static void main(String[] args) {
        String[] names = new String[50];
        int[] heights = new int[50];
        boolean[] canLiveInShade = new boolean[50];

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter minimum height required: ");
        int minHeight = scanner.nextInt();
        System.out.print("Needs shade? (true/false): ");
        boolean needsShade = scanner.nextBoolean();

        System.out.println("Matching plants:");
        for (int i = 0; i < 50; i++) {
            if (heights[i] >= minHeight && canLiveInShade[i] == needsShade) {
                System.out.println(names[i]);
            }
        }
    }
}
