//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
//
// Figure 8.15  Implementation of scanline Function Using getchar
//
// Gets one line of data from standard input. Returns an empty string on
// end of file. If data line will not fit in allotted space, stores
// portion that does fit and discards rest of input line.
//
 
 #include <stdio.h>
 #include <stdlib.h> 
 
char * scanline(char *dest, int  dest_len) {
    int i = 0;
    int ch;

    for (ch = getchar(); ch != '\n' && ch != EOF && i < dest_len - 1; ch = getchar())
        dest[i++] = ch;
  
    dest[i] = '\0';

    while (ch != '\n' && ch != EOF)
        ch = getchar();
        
    return (dest);
}

int main() {
    char dest[20];
    // Human readable char size is array size -1, because \0 filling only 1 place.
    printf("Characters allowed to display on the screen %lu \n", sizeof(dest)-1);
    printf("%s", scanline(dest, sizeof(dest)));

    return 0;
}
