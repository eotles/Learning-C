//
//  maxLine.c
//  Learning C
//
//  Created by Erkin Otles on 6/12/14.
//
//

#include <stdio.h>
#define MAXLINE 1000 //max input size

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//print longest input line
int main(){
    int len, max;
    char line[MAXLINE], longest[MAXLINE]
    
    max = 0;
    while((len = getline(line, MAXLINE))>0 )
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) {
        printf("%s", longest);
    }
}

//

