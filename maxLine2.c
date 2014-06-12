//
//  maxLine2.c
//  Learning C
//
//  Created by Erkin Otles on 6/12/14.
//
//

#include <stdio.h>
#define MAXLINE 1000 //max input size

//Test

int max;
char line[MAXLINE];
char longest[MAXLINE];

int my_getline(void);
void copy(void);

//print longest input line
int main(){
    int len;
    extern int max;
    extern char longest[MAXLINE];
    
    max = 0;
    while((len = my_getline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) {
        printf("\nEND\n%s", longest);
    }
    return(0);
}

//my_getline
//read a line into s, return length
int my_getline(void){
    int c, i;
    extern char line[];
    
    for (i=0; i < MAXLINE-1 && (c=getchar())!='Q' && c!='\n'; ++i)
        line[i] = c;
    if (c=='\n') {
        line[i]=c;
        ++i;
    }
    line[i] = '\0';
    return(i);
}

//copy
//copy from into to, assuming to is big enough
void copy(void){
    int i;
    extern char line[], longest[];
    
    i=0;
    while ((longest[i] = line[i]) != '\0') {
        i++;
    }
}


