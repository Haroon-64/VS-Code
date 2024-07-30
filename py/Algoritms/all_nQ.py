def is_safe(board, row, col, N):
    # Check if there's a queen in the same row
    for i in range(col):
        if board[row][i] == 1:
            return False

    # Check upper diagonal on left side
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    # Check lower diagonal on left side
    for i, j in zip(range(row, N, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    return True


def solve_nqueens_util(board, col, N, solutions):
    # If all queens are placed then return true
    if col >= N:
        sol = []
        for i in range(N):
            for j in range(N):
                sol.append(board[i][j])
        solutions.append(sol)
        return True

    res = False
    for i in range(N):
        if is_safe(board, i, col, N):
            board[i][col] = 1
            res = solve_nqueens_util(board, col + 1, N, solutions) or res
            board[i][col] = 0  # backtrack

    return res


def solve_nqueens(N):
    board = [[0 for _ in range(N)] for _ in range(N)]
    solutions = []
    if not solve_nqueens_util(board, 0, N, solutions):
        print("Solution does not exist")
        return []
    return solutions


n = int(input('Enter N: '))
solutions = solve_nqueens(n)
for solution in solutions:
    for i in range(n):
        print(" ".join("Q" if solution[i * n + j] == 1 else "." for j in range(n)))
    print()
