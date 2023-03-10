#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
// good one
#define MAX_LENGTH 1024
#define MAX_CELL_LENGTH 100
#define NUM_COLUMNS 4

int main()
{
    char file_path[MAX_LENGTH];
    printf("Enter the path of the CSV file: ");
    scanf("%s", file_path);

    FILE *file = fopen(file_path, "r");
    if (file == NULL)
    {
        printf("Failed to open file: %s\n", file_path);
        return 1;
    }

    char line[MAX_LENGTH];
    char cell[MAX_CELL_LENGTH];
    int row = 0;
    int col;
    printf("Dataframe:\n");
    while (fgets(line, MAX_LENGTH, file) != NULL)
    {
        col = 0;
        char *ptr = line;
        while (sscanf(ptr, "%[^,\n]%n", cell, &col) == 1)
        {
            printf("%s", cell);
            int spaces = (col + NUM_COLUMNS - (col + 1) % NUM_COLUMNS) - strlen(cell);
            for (int i = 0; i < spaces; i++)
            {
                printf(" ");
            }
            ptr += col;
            if (*ptr == ',')
            {
                ptr++;
            }
        }
        printf("\n");
    }
    // // Type 'close' to exit
    // fclose(file);
    // char close_input[MAX_LENGTH];
    // printf("Type 'close' to exit: ");
    // scanf("%s", close_input);
    // while (strcmp(close_input, "close") != 0)
    // {
    //     printf("Type 'close' to exit: ");
    //     scanf("%s", close_input);
    // }
    // return 0;

    // close unless you type 'q'
    fclose(file);
    printf("Press 'asd' to exit...\n");
    char ch1 = getch();
    char ch2 = 0;
    char ch3 = 0;
    if (ch1 == 'a' || ch1 == 's' || ch1 == 'd') {
        ch2 = getch();
        if (ch2 == 's' || ch2 == 'd' || ch2 == 'a') {
            ch3 = getch();
            if (ch3 == 's' || ch3 == 'd' || ch3 == 'a') {
                return 0;
            }
        }
    }
    while (1) {
        printf("Wrong key sequence. Try again...\n");
        ch1 = getch();
        ch2 = 0;
        ch3 = 0;
        if (ch1 == 'a' || ch1 == 's' || ch1 == 'd') {
            ch2 = getch();
            if (ch2 == 's' || ch2 == 'd' || ch2 == 'a') {
                ch3 = getch();
                if (ch3 == 's' || ch3 == 'd' || ch3 == 'a') {
                    return 0;
                }
            }
        }
    }
    // // close the file if any key presssed
    // fclose(file);
    // // keep running until user press a key
    // getchar();
    // getchar();
    // return 0;
}
