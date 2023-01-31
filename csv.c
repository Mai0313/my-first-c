#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// good one
#define MAX_LENGTH 1024

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
    char *cell;
    int row = 0;
    int col;
    printf("Dataframe:\n");
    while (fgets(line, MAX_LENGTH, file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
