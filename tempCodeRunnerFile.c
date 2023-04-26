#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main()
{
    int i, ic = 0, m, cc = 0, oc = 0, sc = 0, j;
    char b[30], operators[30], identifiers[30], constants[30], seperators[30];
    printf("Enter the String : ");
    scanf("[\n]s", &b);
    for (i = 0; i < strlen(b); i++)
    {
        if (isspace(b[i]))
        {
            continue;
        }
        else if (isalpha(b[i]))
        {
            identifiers[ic] = b[i];
            ic++;
        }
        else if (isdigit(b[i]))
        { // we calculate digits by their ASCII values(0=48)         m=(b[i]-'0');         i++;         while(isdigit(b[i])){             m=m*10 + (b[i]-'0');             i++;         }         i--;         constants[cc]=m;         cc++;
        }
        else
        {
            if (b[i] == '*')
            {
                operators[oc] = '*';
                oc++;
            }
            else if (b[i] == '-')
            {
                operators[oc] = '-';
                oc++;
            }
            else if (b[i] == '+')
            {
                operators[oc] = '+';
                oc++;
            }
            else if (b[i] == '/')
            {
                operators[oc] = '/';
                oc++;
            }
            else if (b[i] == '=')
            {
                operators[oc] = '=';
                oc++;
            }
            else
            {
                if (b[i] == '(')
                {
                    seperators[sc] = '(';
                    sc++;
                }
                else
                {
                    seperators[sc] = ')';
                    sc++;
                }
            }
        }
    }
    printf(" identifiers : ");
    for (j = 0; j < ic; j++)
    {
        printf("%c ", identifiers[j]);
    }
    printf("\n constants : ");
    for (j = 0; j < cc; j++)
    {
        printf("%d ", constants[j]);
    }
    printf("\n operators : ");
    for (j = 0; j < oc; j++)
    {
        printf("%c ", operators[j]);
    }
    printf("\n seperators : ");
    for (j = 0; j < sc; j++)
    {
        printf("%c ", seperators[j]);
    }
}
