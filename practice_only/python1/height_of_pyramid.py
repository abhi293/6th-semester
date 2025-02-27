blocks = int(input("Enter the number of blocks: "))

#
# Write your code here.
#
count,height = 0,0
for i in range(1,blocks+1):
    count+=i
    if count > blocks:
        height=i-1
        break
print("The height of the pyramid:", height)

