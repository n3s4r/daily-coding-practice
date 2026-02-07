# Assuming arrays 'names', 'heights', and 'can_live_in_shade' are pre-filled with 50 items
# Example initialization:
# names = ["Dahlia", "Fern", ...] 
# heights = [100, 45, ...]
# can_live_in_shade = [False, True, ...]

min_height = int(input("Enter minimum height required (cm): "))
needs_shade = input("Does it need to live in shade? (TRUE/FALSE): ").upper() == "TRUE"

print("\nPlants matching your requirements:")
found = False
for i in range(50):
    if heights[i] >= min_height and can_live_in_shade[i] == needs_shade:
        print(names[i])
        found = True

if not found:
    print("No plants found matching those criteria.")
