/**Assignment name  : hidenp
Expected files   : hidenp.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named hidenp that takes two strings and displays 1
followed by a newline if the first string is hidden in the second one,
otherwise displays 0 followed by a newline.

Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
find each character from s1 in s2, in the same order as they appear in s1.
Also, the empty string is hidden in any string.

If the number of parameters is not 2, the program displays a newline.

Examples :

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>**/

#include <stdio.h>
#include <unistd.h>

void    hidenp(char *s1, char *s2)
{
    int i;
    int len;
    int hidden;

    i = 0;
    len = 0;
    hidden = 0;
    while(s1[len])
        len++;
    while(s2[i])
    {
        if(s1[hidden] == s2[i])
            hidden++;
        i++;
    }
    printf("len = %i\nhidden = %i\n", len, hidden);
    if(hidden == len)
        write(1, "1", 1);
    return ;  
}

int main(int ac, char **av)
{
    if(ac == 3)
        hidenp(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}
