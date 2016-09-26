//
//  main.c
//  fahrToCelsRecursion
//
//  Created by amir sankar on 3/14/16.
//  Copyright © 2016 amir sankar. All rights reserved.
//

#include <stdio.h>
int celsius;

void convertor(int start, int max){
        celsius = (start - 32) / 1.8;
        printf("Fahrenheit: %d\tCelsius: %d\n", start, celsius);
    if (start <= max) {
        start++;
        convertor(start, max);
        
    }
}
int main(int argc, const char * argv[]) {
    convertor(-40, 100);
    return 0;
}
