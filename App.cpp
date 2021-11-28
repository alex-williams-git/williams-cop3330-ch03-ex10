/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

// function to do computation
double doOperation(char operand[], double input1, double input2){
    // checking operation and returning the inputs after operation has been complete
    if(strcmp(operand, "+") == 0){
        return input1 + input2;
    }
    else if(strcmp(operand, "-") == 0){
        return input1 - input2;
    }
    else if(strcmp(operand, "*") == 0){
        return input1 * input2;
    }
    else if(strcmp(operand, "/") == 0){
        return input1 / input2;
    }

    return 0;
}

int main(){
    char operand[1];
    double input1;
    double input2;

    scanf("%s", operand);
    scanf("%lf", &input1);
    scanf("%lf", &input2);

    double result = doOperation(operand, input1, input2);

    printf("%lf %s %lf = %lf", input1, operand, input2, result);

    return 0;
}