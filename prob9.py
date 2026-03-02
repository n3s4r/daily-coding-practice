count = 0

number = int(input("Enter a number: "))

for i in range(1, number + 1):
    count = count + 1

if number % 5 == 0:
    print("Divisible by 5")

if number % 7 == 0:
    print("Divisible by 7")

print("Count is", count)
