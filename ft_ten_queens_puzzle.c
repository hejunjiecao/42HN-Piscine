#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// 检查当前 (col, row) 是否和前面冲突
int is_safe(int *board, int col, int row)
{
    int i;

    i = 0;
    while (i < col)
    {
        if (board[i] == row ||                 // 同一行
            (board[i] - i == row - col) ||     // 同一主对角线
            (board[i] + i == row + col))       // 同一副对角线
            return (0);
        i++;
    }
    return (1);
}

void print_solution(int *board)
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = board[i] + '0';
        ft_putchar(c);
        i++;
    }
    ft_putchar('\n');
}

int solve(int col, int *board)
{
    int row;
    int count;

    if (col == 10)
    {
        print_solution(board);
        return (1);
    }

    row = 0;
    count = 0;
    while (row < 10)
    {
        if (is_safe(board, col, row))
        {
            board[col] = row;
            count += solve(col + 1, board);
        }
        row++;
    }
    return (count);
}

int ft_ten_queens_puzzle(void)
{
    int board[10];
    return (solve(0, board));
}
