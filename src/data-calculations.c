#include <stdio.h>

int main() {

    float input = 0.0;
    float sumOfInputs = 0.0;
    float maxInputValue = 0.0;
    
    while (1 == 1) {
        printf("Ange matdata: ");
        scanf("%f", &input);

        if (input <= 0) {
            break;
        }
        
        if (input > maxInputValue) {
            maxInputValue = input;
        }
        
        sumOfInputs = sumOfInputs + input;
    }
    
    if (sumOfInputs > 0) {
        printf("Storsta matdata: %.3lf Summa: %.3lf\n", maxInputValue, sumOfInputs);
    } else {
        printf("Matadata saknas\n");
    }
    
    return 0;
}