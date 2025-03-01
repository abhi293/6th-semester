def is_prime(num):
    #
    # Write your code here.
    #
    for i in range(2,num): #checking if number is divisible by any number from 2 to num-1
        if num%i==0:
            return False
    return True

num = int(input("Enter max range : "))
for i in range(1, num): #checking for prime numbers from 1 to 20
    if is_prime(i + 1):
        print(i + 1, end=" ")
print()
