#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *keywords[] =
{
    "int", "float", "char", "double",
    "if", "else", "for", "while",
    "return", "void", "break", "continue"
};

int isKeyword(char *word)
{
    int i;

    for (i = 0; i < 12; i++)
    {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }

    return 0;
}

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '=' || ch == '<' ||
            ch == '>' || ch == '%');
}

int main()
{
    char str[500];
    int i = 0;

    printf("Enter C source code:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (isspace(str[i]))
        {
            i++;
            continue;
        }

        if (isalpha(str[i]) || str[i] == '_')
        {
            char word[50];
            int j = 0;

            while (isalnum(str[i]) || str[i] == '_')
                word[j++] = str[i++];

            word[j] = '\0';

            if (isKeyword(word))
                printf("%s -> KEYWORD\n", word);
            else
                printf("%s -> IDENTIFIER\n", word);
        }
        else if (isdigit(str[i]))
        {
            char number[50];
            int j = 0;

            while (isdigit(str[i]))
                number[j++] = str[i++];

            number[j] = '\0';

            printf("%s -> CONSTANT\n", number);
        }
        else if (isOperator(str[i]))
        {
            printf("%c -> OPERATOR\n", str[i]);
            i++;
        }
        else
        {
            printf("%c -> SPECIAL SYMBOL\n", str[i]);
            i++;
        }
    }

    return 0;
}
