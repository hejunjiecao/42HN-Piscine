#include <unistd.h>
#include <stdlib.h>

// Struct that defines the character style of each rush version
typedef struct {
    char top_left;
    char top_right;
    char bottom_left;
    char bottom_right;
    char horizontal;
    char vertical;
} t_style;

// Prints a single character to standard output
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Prints one line with left, middle (repeated), and right characters
void printLine(char left, char middle, char right, int x)
{
    if (x >= 1)
        ft_putchar(left);

    int i = 0;
    while (i < x - 2)
    {
        ft_putchar(middle);
        i++;
    }

    if (x >= 2)
        ft_putchar(right);

    ft_putchar('\n');
}

// Prints the top line using top corner and horizontal characters
void printFirstLine(t_style s, int x)
{  
    printLine(s.top_left, s.horizontal, s.top_right, x);
}

// Prints a middle line with vertical borders and spaces in between
void printMidLine(t_style s, int x)
{  
    printLine(s.vertical, ' ', s.vertical, x);
}

// Prints the bottom line using bottom corner and horizontal characters
void printLastLine(t_style s, int x)
{  
    printLine(s.bottom_left, s.horizontal, s.bottom_right, x);
}

// Generates the full rush pattern using the specified style
void rush(int x, int y, t_style s)
{
    if (x <= 0 || y <= 0)
        return;

    printFirstLine(s, x);

    int i = 0;
    while (i < y - 2)
    {
        printMidLine(s, x);
        i++;
    }

    if (y >= 2)
        printLastLine(s, x);
}

// Entry point: parses command-line arguments and launches the correct rush
int main(int argc, char *argv[])
{
    if (argc != 4)
        return 1;

    // Convert input arguments from strings to integers
    int id = atoi(argv[1]);  // rush ID (0–4)
    int x = atoi(argv[2]);   // width
    int y = atoi(argv[3]);   // height

    if (id < 0 || id > 4)
        return 1;

    // Define character styles for each rush version
    t_style styles[5] = {
        {'o', 'o', 'o', 'o', '-', '|'},    // rush00
        {'/', '\\', '\\', '/', '*', '*'}, // rush01
        {'A', 'A', 'C', 'C', 'B', 'B'},    // rush02
        {'A', 'C', 'A', 'C', 'B', 'B'},    // rush03
        {'A', 'C', 'C', 'A', 'B', 'B'}     // rush04
    };

    // Call rush with selected style
    rush(x, y, styles[id]);

    return 0;
}
