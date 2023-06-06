/* wap to perform entrer any character and get word... */

#include <stdio.h>

void main()
{
    char ch;

    printf("\nEnter character : ");
    scanf("%c", ch);

    switch (ch)
    {
        case 'a':
        case 'A':
            printf("\n%c : %cjay \n", ch, ch);
            break;

        case 'b':
        case 'B':
            printf("\n%c : %cat \n", ch, ch);
            break;

        case 'c':
        case 'C':
            printf("\n%c : %c Language \n", ch, ch);
            break;

        case 'd':
        case 'D':
            printf("\n%c : %cog \n", ch, ch);
            break;
        case 'e':
        case 'E':
            printf("\n%c : %cet \n", ch, ch);
            break;
        case 'f':
        case 'F':
            printf("\n%c : %cox \n", ch, ch);
            break;
        case 'g':
        case 'G':
            printf("\n%c : %cateway \n", ch, ch);
            break;
        case 'h':
        case 'H':
            printf("\n%c : %cighway \n", ch, ch);
            break;
        case 'i':
        case 'I':
            printf("\n%c : %cnstagram \n", ch, ch);
            break;
        case 'j':
        case 'J':
            printf("\n%c : %cave \n", ch, ch);
            break;
        case 'k':
        case 'K':
            printf("\n%c : %cotlin \n", ch, ch);
            break;
        case 'l':
        case 'L':
            printf("\n%c : %cogical \n", ch, ch);
            break;
        case 'm':
        case 'M':
            printf("\n%c : %canav \n", ch, ch);
            break;
        case 'n':
        case 'N':
            printf("\n%c : %cight \n", ch, ch);
            break;
        case 'o':
        case 'O': 
            printf("\n%c : %cperator \n", ch, ch);
            break;
        case 'p':
        case 'P':
            printf("\n%c : %carty \n", ch, ch);
            break;
        case 'q':
        case 'Q':
            printf("\n%c : %cueen \n", ch, ch);
            break;
        case 'r':
        case 'R':
            printf("\n%c : %ced \n", ch, ch);
            break;
        case 's':
        case 'S':
            printf("\n%c : %cnapechat \n", ch, ch);
            break;
        case 't':
        case 'T':
            printf("\n%c : %celegram \n", ch, ch);
            break;
        case 'u':
        case 'U':
            printf("\n%c : %cnicode \n", ch, ch);
            break;
        case 'v':
        case 'V':
            printf("\n%c : %cariable \n", ch, ch);
            break;
        case 'w':
        case 'W':
            printf("\n%c : %ce_transfer \n", ch, ch);
            break;
        case 'x':
        case 'X':
            printf("\n%c : %cerox \n", ch, ch);
            break;
        case 'y':
        case 'Y':
            printf("\n%c : %coutube \n", ch, ch);
            break;
        case 'z':
        case 'Z':
            printf("\n%c : %coom \n", ch, ch);
            break;

        default:
            printf("Oooo hello,\n\tABCD avde chhe too aa enter karo nee...!!!!");
            break;
    }
}