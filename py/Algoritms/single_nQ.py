def is_safe(board, row, col, N):
    # Check if there is a queen in the same column
    for i in range(row):
        if board[i][col] == 1:
            return False

    # Check upper diagonal on left side
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    # Check upper diagonal on right side
    for i, j in zip(range(row, -1, -1), range(col, N)):
        if board[i][j] == 1:
            return False

    return True


def solve_nqueens_util(board, row, N):
    if row == N:
        return True

    for col in range(N):
        if is_safe(board, row, col, N):
            board[row][col] = 1
            if solve_nqueens_util(board, row + 1, N):
                return True
            board[row][col] = 0

    return False


def solve_nqueens(N):
    board = [[0] * N for _ in range(N)]
    if not solve_nqueens_util(board, 0, N):
        print("Solution does not exist")
        return False

    print("One of the solutions is:")
    for row in board:
        print(row)

    return True

# Example usage:
n = int(input('Enter N: '))
solve_nqueens(n)
