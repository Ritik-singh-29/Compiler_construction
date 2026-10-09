#include <stdio.h>
#include <string.h>

char *program[] = {
    "START MACRO",
    "MOV A,B",
    "DISPLAY",
    "MEND",
    "DISPLAY MACRO",
    "MOV R1,R2",
    "MEND",
    "START",
    "END"
};

void expand(char macro[])
{
    if (strcmp(macro, "START") == 0)
    {
        printf("MOV A,B\n");
        expand("DISPLAY");
    }
    else if (strcmp(macro, "DISPLAY") == 0)
    {
        printf("MOV R1,R2\n");
    }
}

int main()
{
    int i;

    printf("Expanded program:\n");
    printf("-----------------\n");

    for (i = 0; i < 10; i++)
    {
        if (strcmp(program[i], "START") == 0)
        {
            expand("START");
        }
        else if (strcmp(program[i], "END") == 0)
        {
            printf("END\n");
        }
    }

    return 0;
}
