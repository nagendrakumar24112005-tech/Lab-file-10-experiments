#include "arith.h"
#include <stdio.h> 

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        
    return 0.0f; 
 return (float)a / b; 
}