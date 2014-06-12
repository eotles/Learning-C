//
//  fileCopy.c
//  Learning C
//
//  Created by Erkin Otles on 6/11/14.
//
//

#include <stdio.h>

int main(){
    int c;
    
    c = getchar();
    while (c !=EOF) {
        putchar(c);
        c = getchar();
    }
}