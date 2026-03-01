#include <stdio.h>
#include <string.h>

// Define the attributes of a cat
struct Cat {
    char name[20];
    int age;
    int is_territorial;
    int is_intruder;
};

void check_home_status(struct Cat resident, struct Cat newcomer) {
    printf("--- Home Security Report ---\n");
    
    if (newcomer.is_intruder) {
        printf("ALERT: %s has entered the home!\n", newcomer.name);
        printf("Status: %s is hiding on the rooftop.\n", resident.name);
        
        // Logic for the conflict you described
        if (resident.is_territorial) {
            printf("Result: Fight initiated. The bucket is occupied.\n");
            printf("Action: Resident cat's peace of mind is 0%%.\n");
        }
    } else {
        printf("Status: Home is quiet. %s is napping safely.\n", resident.name);
    }
}

int main() {
    // Your 6+ year old resident cat
    struct Cat myCat = {"Senior Queen", 6, 1, 0};
    
    // The "Teenager" cat from the bucket
    struct Cat bucketCat = {"Bucket Intruder", 1, 1, 1};

    printf("Simulating the last 48 hours...\n\n");

    // Phase 1: The Intrusion
    check_home_status(myCat, bucketCat);

    printf("\n--- Executing Cleanup Protocol ---\n");
    printf("1. Emptying the bucket.\n");
    printf("2. Applying enzymatic_cleaner.exe to the bed.\n");
    printf("3. Relocating %s to a distant sector.\n", bucketCat.name);

    // Phase 2: The Resolution
    bucketCat.is_intruder = 0; // The intruder is gone
    printf("\nUpdate: Intruder removed from local environment.\n\n");

    check_home_status(myCat, bucketCat);

    printf("\nFinal Output: %s has returned from the rooftop. System Stabilized.\n", myCat.name);

    return 0;
}
