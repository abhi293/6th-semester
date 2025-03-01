#reference to same list
list_1 = [1]
list_2 = list_1
list_1[0] = 2
print(list_2)

#copy of list
list_1 = [1]   
list_2 = list_1[:]#[:] is used to copy the list [start:end:step] includes start but not end index, 3rd argument is optional
# .copy is also used in the similar way, eg list_2 = list_1.copy()
list_1[0] = 2
print(list_2)

#using start an end index, including negative index.... note negative index starts from -1 denoting last element
list_1 = [1,2,3,4,5,6,7,8,9]
list_2 = list_1[2:6] #2nd index to 6th index
print(list_2)
list_2 = list_1[-7:-3] #2nd index to 6th index
print(list_2)
list_2 = list_1[2:] #2nd index to end
print(list_2)
list_2 = list_1[:6] #start to 6th index
print(list_2)
list_2 = list_1[-7:] #2nd index to 6th index
print(list_2)

#deleting elements from list
list_1 = [1,2,3,4,5,6,7,8,9]
del list_1[2:6] #deletes 2nd index to 6th index
print(list_1)

#deleting content of list vs deleting list
list_1 = [1,2,3,4,5,6,7,8,9]
del list_1 [:]  #deletes content of list
print(list_1)
list_1 = [1,2,3,4,5,6,7,8,9]
del list_1  #deletes list
#print(list_1)  #will give error as list is deleted