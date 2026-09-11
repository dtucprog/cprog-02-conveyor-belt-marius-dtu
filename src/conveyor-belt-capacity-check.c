#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight, maxLoad;
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);
    printf("Motors: %d piece\n\n", motorCount);
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &totalPackageWeight);
    printf("Total package weight: %d kg \n\n", totalPackageWeight);
    maxLoad = motorCount * MOTOR_CAPACITY;
    printf("Max load: %d kg\n\n\n", maxLoad);

    if(maxLoad>totalPackageWeight){
        printf("Yes! The conveyor belt can carry the packages.");
    }
    else if(maxLoad==totalPackageWeight){
        printf("The conveyor belt can just about carry the packages.");
    }
    else{
        printf("No. The conveyor belt cannot carry the packages.");
    }
}
