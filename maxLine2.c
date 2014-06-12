//
//  maxLine2.c
//  Learning C
//
//  Created by Erkin Otles on 6/12/14.
//
//

#include <stdio.h>
#define MAXLINE 1000 //max input size

int max;
char line[MAXLINE];
char longest[MAXLINE];

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

//print longest input line
int main(){
    int len, max;
    char line[MAXLINE], longest[MAXLINE];
    
    max = 0;
    while((len = my_getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) {
        printf("\nEND\n%s", longest);
    }
    return(0);
}

//my_getline
//read a line into s, return length
int my_getline(char s[], int lim){
    int c, i;
    
    for (i=0; i < lim-1 && (c=getchar())!='Q' && c!='\n'; ++i)
        s[i] = c;
    if (c=='\n') {
        s[i]=c;
        ++i;
    }
    s[i] = '\0';
    return(i);
}

//copy
//copy from into to, assuming to is big enough
void copy(char to[], char from[]){
    int i;
    
    i=0;
    while ((to[i] = from[i]) != '\0') {
        printf("%c", to[i]);
        i++;
    }
}


