#list of squares
squares = [x ** 2 for x in range(10)]
print(squares)

#cubes
cubes = [x ** 3 for x in range(10)]
print(cubes)

twos = [2 ** i for i in range(8)]
print(twos) # [1, 2, 4, 8, 16, 32, 64, 128]

#2D list
table = [[":(", ":)", ":(", ":)"],
         [":)", ":(", ":)", ":)"],
         [":(", ":)", ":)", ":("],
         [":)", ":)", ":)", ":("]]
print(table)
print(table[0][0])  # outputs: ':('
print(table[0][3])  # outputs: ':)'

#3d list
cube = [[[':(', 'x', 'x'],
         [':)', 'x', 'x'],
         [':(', 'x', 'x']],

        [[':)', 'x', 'x'],
         [':(', 'x', 'x'],
         [':)', 'x', 'x']],

        [[':(', 'x', 'x'],
         [':)', 'x', 'x'],
         [':)', 'x', 'x']]]

print(cube)
print(cube[0][0][0])  # outputs: ':('
print(cube[2][2][0])  # outputs: ':)'




