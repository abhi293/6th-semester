import random

def display_board(board):
    for row in board:
        print("+-------+-------+-------+")
        print("|       |       |       |")
        print(f"|   {row[0]}   |   {row[1]}   |   {row[2]}   |")
        print("|       |       |       |")
    print("+-------+-------+-------+")

def enter_move(board):
    free_fields = make_list_of_free_fields(board)
    while True:
        try:
            move = int(input("Enter your move: "))
            if (move < 1 or move > 9):
                raise ValueError
            row, col = (move - 1) // 3, (move - 1) % 3
            if (row, col) in free_fields:
                board[row][col] = 'O'
                break
            else:
                print("This field is already occupied! Try again.")
        except ValueError:
            print("Invalid input! Enter a number between 1 and 9.")

def make_list_of_free_fields(board):
    return [(r, c) for r in range(3) for c in range(3) if board[r][c] not in ['X', 'O']]

def victory_for(board, sign):
    for row in board:
        if all(cell == sign for cell in row):
            return True
    for col in range(3):
        if all(board[row][col] == sign for row in range(3)):
            return True
    if all(board[i][i] == sign for i in range(3)) or all(board[i][2 - i] == sign for i in range(3)):
        return True
    return False

def draw_move(board):
    free_fields = make_list_of_free_fields(board)
    if free_fields:
        row, col = random.choice(free_fields)
        board[row][col] = 'X'

def main():
    board = [[str(3 * r + c + 1) for c in range(3)] for r in range(3)]
    board[1][1] = 'X'
    display_board(board)

    while True:
        enter_move(board)
        display_board(board)
        if victory_for(board, 'O'):
            print("You won!")
            break
        if not make_list_of_free_fields(board):
            print("It's a tie!")
            break

        draw_move(board)
        display_board(board)
        if victory_for(board, 'X'):
            print("Computer wins!")
            break
        if not make_list_of_free_fields(board):
            print("It's a tie!")
            break

if __name__ == "__main__":
    main()
