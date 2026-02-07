#include <stdio.h>
#include <stdbool.h>

int main() {
    // Arrays assumed to be initialized with 50 elements
    char names[50][30]; 
    int heights[50];
    bool can_live_in_shade[50];

    int minHeight;
    int shadeInput; // 1 for True, 0 for False

    printf("Enter minimum height required: ");
    scanf("%d", &minHeight);
    printf("Enter 1 if it needs shade, 0 if not: ");
    scanf("%d", &shadeInput);

    printf("\nMatching Plants:\n");
    for (int i = 0; i < 50; i++) {
        if (heights[i] >= minHeight && can_live_in_shade[i] == (bool)shadeInput) {
            printf("%s\n", names[i]);
        }
    }
    return 0;
}
