
//Listing 18.4 Using strcat() to concatenate strings; page 461

#include <stdio.h>
#include <string.h>

char str1[27] = "a";
char str2[2];

int main(void)
{
    int n;

    //put a null character at the end of str2[]
    str2[1]= '\0';

    //** Builds and prints strings based on ascii characters for alphabet
    //** Example output:
    //            ab
    //            abc
    //            abcd
    //            abcde
    //            abcdef
    //            abcdefg
    //            abcdefgh
    //            abcdefghi
    //            abcdefghij
    //            abcdefghijk
    //            abcdefghijkl
    //            abcdefghijklm
    //            abcdefghijklmn
    //            abcdefghijklmno
    //            abcdefghijklmnop
    //            abcdefghijklmnopq
    //            abcdefghijklmnopqr
    //            abcdefghijklmnopqrs
    //            abcdefghijklmnopqrst
    //            abcdefghijklmnopqrstu
    //            abcdefghijklmnopqrstuv
    //            abcdefghijklmnopqrstuvw
    //            abcdefghijklmnopqrstuvwx
    //            abcdefghijklmnopqrstuvwxy
    //            abcdefghijklmnopqrstuvwxyz

    for(n=98; n<123; n++)
    {
        str2[0] = n;
        strcat(str1, str2);
        puts(str1);
    }
    return 0;
}
