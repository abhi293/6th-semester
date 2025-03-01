my_list = [1, 2, 4, 4, 1, 4, 2, 6, 2, 9]
#
# Write your code here.
#
list = []  #creating an empty list
for i in my_list:
    if i not in list: #checking if element is already present in list
        list.append(i) #if not present, then append it to list
del my_list[:]  #deleting content of my_list
my_list = list[:] #copying list to my_list
del list #deleting list
print("The list with unique elements only:")
print(my_list)

