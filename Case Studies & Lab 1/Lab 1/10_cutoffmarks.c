// A simple C programm to calculate the cutoff marks of a student
// Lab 1 Problem 10

 #include<stdio.h>
 
 int main(){
    int maths, phy, chem, ent;

    /*
    maths is marks in Mathematics
    phy is marks in Physics
    chem is marks in Chemistry
    ent is marks in entrance examination
    */

    printf("Enter the marks of Mathematics (out of 200): \n");
    scanf("%d", &maths);

    printf("Enter the marks of Physics (out of 200): \n");
    scanf("%d", &phy);

    printf("Enter the marks of Chemistry (out of 200): \n");
    scanf("%d", &chem);

    printf("Enter the marks of Entrance Examination (out of 100): \n");
    scanf("%d", &ent);

    float cm = (maths/2)+(phy/2)+(chem/2)+ent; // cm is cutoff marks of a student

    printf("The Cutoff mark of the student is %.2f", cm);

    return 0;
 }