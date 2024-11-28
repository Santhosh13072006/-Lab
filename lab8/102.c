#include <stdio.h>

int main() 
{
    FILE *fp;
    char c;
    int a = 0, b = 0, d = 0;
    fp = fopen("abc.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    while ((c = getc(fp)) != EOF) 
    {
        if (c == ' ') 
        {
            a++;  
        } 
        else if (c == '\n') 
        {
            b++;  
        } 
        else 
        {
            d++;  
        }
    }

    
    if (d > 0 && c != '\n') {
        b++;
    }

    
    printf("No. of words = %d\n", a + 1);
    printf("No. of lines = %d\n", b);
    printf("No. of characters = %d\n", d);

    fclose(fp);

    return 0;
}
