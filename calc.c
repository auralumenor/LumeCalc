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
double squart(double);
double powr(double);
double sin(double);
double cos(double);
double logx(double);

// Main Function

int main() {


    intro();            // Callled
    mode();


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
    float a;
    char op;
    do {
        printf("Enter the operator you want to use:\n1. Square Root\n2. Power\n3. Sine\n4. Cosine\n5. Logarithm\n6. Exit\n");
        scanf(" %c",&op);
        switch(op){
            case '1':
                get2(&a);
                squart(a);
                break;
            case '2':
                get2(&a);
                powr(a);
                break;
            case '3':
                get2(&a);
                sin(a);
                break;
            case '4':
                get2(&a);
                cos(a);
                break;
            case '5':
                get2(&a);
                logx(a);
                break;
            default:
            printf("Invalid Prompt\n");
        }
    } while (op != '6');
}
void get1(int *a, int *b){
    printf("Enter 2 numbers:\n");
    scanf("%d%d",a,b);
}
void get2(float *a){
    printf("Enter a number:\n");
    scanf("%lf",a);
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
    } else {
    printf("The Quotient is: %.2f\n",(float)a/b);
    return (float)a/b;
    }
}
double squart(double a){
    if (a>0){
        printf("Square root is not possible for negative integers\n");
        return -1;
    } else if (a==0){
        printf("Are you kidding me cuz Everyone knows root of zero is 0\n");
        return 0;
    } else {
        printf("Square root of %.2f is: %.2f\n", a, sqrt(a));
        return sqrt(a);
    }
}
double powr(double a){
        float b;
        printf("Enter the exponential value which you want to apply:\n");
        scanf("%f",&b);
        printf("%.2f is raised to %.2f is: %.2f\n", a, b, pow(a, b));
        return pow(a, b);
}
double sin(double a){
        printf("Sine of %.2f radians is %.2f\n", a, sinf(a));
        return sinf(a);
}
double cos(double a){
        printf("Cosine of %.2f radians is %.2f\n", a, cosf(a));
        return cosf(a);
}
double logx(double a){
        if (a<=0) {
            printf("Logarithm is undefined for zero and negative numbers\n");
            return -1;
        } else {
            printf("Log base 10 of %.2f is: %.2f\n", a, log10(a));
            return log10(a);
        }
}