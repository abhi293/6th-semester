#swap 1st and last, similarly 2nd and 2nd last and so on
my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]
length = len(my_list)
print('Original list:', my_list)
for i in range(length // 2):
    my_list[i], my_list[length - i - 1] = my_list[length - i - 1], my_list[i]  #python doesn't require a temp variable to swap

print('After swap : ',my_list)

