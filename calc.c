#include <stdio.h>
#include <math.h>
#include <conio.h>
// Functions Initializaton

void intro();
void mode();            // Made a selector
void main_men();        // For normal calculations
void sci_men();         // For scientific calculations
void get1(int*,int*);
void get2(float*);
int add(int,int);
int sub(int,int);
int mult(int,int);
float div(int,int);
double sqrt_custom(double);
double powr(double);
double mysin(double);
double mycos(double);
double mytan(double);
double log10x(double);

// Main Function

int main() {


    intro();            // Callled Intro function
    mode();             // Called Mode


    getch();
    return 0;

}

// Functions Declaration

void intro(){
    printf("Welcome To LumeCalc\n");
    printf("The calculator By Lumenor\n");
}
void mode(){
    char op;
    do{
        printf("Choose the calculator type you want:\n1. Simple Calculator\n2. Scientific calculator\n3. Exit\n");
        scanf(" %c",&op);
        switch(op){
            case '1':
            main_men();
            break;
            case '2':
            sci_men();
            break;
            case '3':
            break;
            default:
            printf("Invalid prompt\n");
        }
    } while (op != '3');
}
void main_men(){
        int a, b;
        char op;
        do {
        printf("Enter The Operator you want to use:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        scanf(" %c",&op);
        switch(op){
            case '1':
                get1(&a, &b);
                add(a,b);
                break;
            case '2':
                get1(&a, &b);
                sub(a,b);
                break;
            case '3':
                get1(&a, &b);
                mult(a,b);
                break;
            case '4':
                get1(&a, &b);
                div(a,b);
                break;
            case '5':
                break;
                default:
                printf("Invalid Prompt\n");
        }
    } while (op != '5');
}
void sci_men(){
    double a;           //Shifted to double operator
    char op;
    do {
        printf("\nEnter the operator you want to use:\n1. Square Root\n2. Power\n3. Sin\n4. Cos\n5. Tan\n6. Logarithm\n7. Exit\n");
        scanf(" %c",&op);
        switch(op){
            case '1':
                get2(&a);
                printf("Result: %.2f\n", sqrt_custom(a));
                break;
            case '2':
                get2(&a);
                printf("Result: %.2f\n", powr(a));
                break;
            case '3':
                get2(&a);
                mysin(a);
                break;
            case '4':
                get2(&a);
                mycos(a);
                break;
            case '5':
                get2(&a);
                mytan(a);
                break;
            case '6':
                get2(&a);
                printf("Result: %.2f\n", log10x(a));
                break;
            default:
            printf("Invalid Prompt\n");
        }
    } while (op != '7');
}
void get1(int *a, int *b){
    printf("Enter 2 numbers:\n");
    scanf("%d%d",a,b);
}
void get2(float *a){
    printf("Enter a number:\n");
    scanf("%f",a);
}
int add(int a, int b){
    printf("The Sum is: %d\n", a+b);
    return a+b;
}
int sub(int a, int b){
    printf("The Difference is:%d\n",a-b);
    return a-b;
}
int mult(int a, int b){
    printf("The Product is: %d\n",a*b);
    return a*b;
}
float div(int a, int b){
    if (b == 0){
        printf("Division by Zero is not possible\n");
        return 0.0f;
    } else {
    printf("The Quotient is: %.2f\n",(float)a/b);
    return (float)a/b;
    }
}
double sqrt_custom(double a){
    if (a<0){
        printf("Square root is not possible for negative integers\n");
        return -1;
    } else if (a==0){
        printf("Are you kidding me cuz Everyone knows root of zero is 0\n");
        return 0;
    } else if (a>0){
        printf("Square root of %.2f is: %.2f\n", a, sqrt(a));
        return sqrt(a);
    }
}
double powr(double a){
        double b;
        printf("Enter the exponential value which you want to apply:\n");
        scanf("%lf",&b);
        printf("%.2f is raised to %.2f is: %.2f\n", a, b, pow(a, b));
        return pow(a, b);
}
double mysin(double a){
        printf("Sin of %.2f radians is %.2f\n", a, sinf(a));
        return sinf(a);
}
double mycos(double a){
        printf("Cos of %.2f radians is %.2f\n", a, cosf(a));
        return cosf(a);
}
double mytan(double a){
        printf("Tan of %.2f radians is %.2f\n", a, tanf(a));
        return tanf(a);
}
double log10x(double a) {
        if (a<=0) {
            printf("Logarithm is undefined for zero and negative numbers\n");
            return -1;
        } else {
            printf("Log base 10 of %.2f is: %.2f\n", a, log10(a));
            return log10(a);
        }
       }

