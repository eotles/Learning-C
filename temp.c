//
//  temp.c
//  Learning C
//
//  Created by Erkin Otles on 6/11/14.
//
//

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float fcConv(int f);

int main(){
    float fahr, celsius;
    int lower, upper, step;
    
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while(fahr<upper){
        celsius = 5 * (fahr-32)/9;
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
    int fahrt;
    
    for (fahrt=LOWER; fahrt<=UPPER; fahrt=fahrt+STEP) {
        printf("%3d %6.1f\n", fahrt, fcConv(fahrt));
    }
}

float fcConv(int fahr){
    return((5.0/9.0)*(fahr-32));
}


