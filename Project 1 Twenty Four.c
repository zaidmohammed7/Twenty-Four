/*-------------------------------------------

Program 1: Program of Twenty Four

Course: CS 211, Spring 2023, UIC

System: Replit/ CLion, Windows 11

Started code by Ellen Kidane
Student Author: Zaid Khan Mohammed

------------------------------------------- */


/* 
* Instructions for Playing the Twenty Four Game:
*
* 1. The game presents you with four random numbers.
* 2. Your goal is to use each number exactly once, along with three mathematical operators 
*    (from +, -, *, or /), to achieve a total of 24.
* 3. Enter the three operators in the order you wish to apply them to the numbers. (Ex: +-+, *+/, ...)
* 4. The program will calculate the result step-by-step and inform you if your solution is correct.
* 5. You can choose to play again after each round or exit the game.
*
* Have fun and challenge your math skills!
*/


// include statements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


// function for debug mode
void debugMode() {
    char operators[4] = {'+', '-', '*', '/'};
    char operatorCombinations[] = "+++,++-,++*,++/,+-+,+--,+-*,+-/,+*+,+*-,+**,+*/,+/+,+/-,+/*,+//,-++,-+-,-+*,-+/,--+,"
                                  "---,--*,--/,-*+,-*-,-**,-*/,-/+,-/-,-/*,-//,*++,*+-,*+*,*+/,*-+,*--,*-*,*-/,**+,**-,"
                                  "***,**/,*/+,*/-,*/*,*//,/++,/+-,/+*,/+/,/-+,/--,/-*,/-/,/*+,/*-,/**,/*/,//+,//-,//*,"
                                  "///"; // string to store all operator combinations
    double step1 = 0;
    double step2 = 0;
    double step3 = 0;
    int currNumber = 0;
    // starting loops for looping through all possible number and operator combinations
    for (int a = 1; a < 10; ++a) {
        for (int b = 1; b < 10; ++b) {
            for (int c = 1; c < 10; ++c) {
                for (int d = 1; d < 10; ++d) {
                    for (int i = 0; i < 255; ++i) {
                        if ((i + 1) % 4 == 0) {++i;}
                        if (operatorCombinations[i] == '+') {
                            step1 = a + b;
                        } else if (operatorCombinations[i] == '-') {
                            step1 = a - b;
                        } else if (operatorCombinations[i] == '*') {
                            step1 = a * b;
                        } else if (operatorCombinations[i] == '/') {
                            step1 = (double) a / b;
                        }
                        ++i;
                        if (operatorCombinations[i] == '+') {
                            step2 = step1 + c;
                        } else if (operatorCombinations[i] == '-') {
                            step2 = step1 - c;
                        } else if (operatorCombinations[i] == '*') {
                            step2 = step1 * c;
                        } else if (operatorCombinations[i] == '/') {
                            step2 = step1 / c;
                        }
                        ++i;
                        if (operatorCombinations[i] == '+') {
                            step3 = step2 + d;
                        } else if (operatorCombinations[i] == '-') {
                            step3 = step2 - d;
                        } else if (operatorCombinations[i] == '*') {
                            step3 = step2 * d;
                        } else if (operatorCombinations[i] == '/') {
                            step3 = (double) step2 / d;
                        }
                        if (fabs(step3 - 24) < 0.0001) { // using fabs because doubles may store slightly inaccurate values
                            currNumber++;
                            // printing values
                            printf("%d. %d%c%d%c%d%c%d\n", currNumber, a, operatorCombinations[i - 2], b,
                                   operatorCombinations[i - 1], c, operatorCombinations[i], d);
                        }
                    }
                }
            }
        }
    }
}


// function for hard mode
void hardMode(int allPuzzles[][4]) {
    char operatorCombinations[] = "+++,++-,++*,++/,+-+,+--,+-*,+-/,+*+,+*-,+**,+*/,+/+,+/-,+/*,+//,-++,-+-,-+*,-+/,--+,"
                                  "---,--*,--/,-*+,-*-,-**,-*/,-/+,-/-,-/*,-//,*++,*+-,*+*,*+/,*-+,*--,*-*,*-/,**+,**-,"
                                  "***,**/,*/+,*/-,*/*,*//,/++,/+-,/+*,/+/,/-+,/--,/-*,/-/,/*+,/*-,/**,/*/,//+,//-,//*,"
                                  "///";
    double step1 = 0;
    double step2 = 0;
    double step3 = 0;
    int currNumber = -1;
    for (int a = 1; a < 10; ++a) {
        for (int b = 1; b < 10; ++b) {
            for (int c = 1; c < 10; ++c) {
                for (int d = 1; d < 10; ++d) {
                    for (int i = 0; i < 255; ++i) {

                        if ((i + 1) % 4 == 0) {++i;}
                        if (operatorCombinations[i] == '+') {
                            step1 = a + b;
                        } else if (operatorCombinations[i] == '-') {
                            step1 = a - b;
                        } else if (operatorCombinations[i] == '*') {
                            step1 = a * b;
                        } else if (operatorCombinations[i] == '/') {
                            step1 = (double) a / b;
                        }
                        ++i;
                        if (operatorCombinations[i] == '+') {
                            step2 = step1 + c;
                        } else if (operatorCombinations[i] == '-') {
                            step2 = step1 - c;
                        } else if (operatorCombinations[i] == '*') {
                            step2 = step1 * c;
                        } else if (operatorCombinations[i] == '/') {
                            step2 = step1 / c;
                        }
                        ++i;
                        if (operatorCombinations[i] == '+') {
                            step3 = step2 + d;
                        } else if (operatorCombinations[i] == '-') {
                            step3 = step2 - d;
                        } else if (operatorCombinations[i] == '*') {
                            step3 = step2 * d;
                        } else if (operatorCombinations[i] == '/') {
                            step3 = (double) step2 / d;
                        }
                        if (fabs(step3 - 24) < 0.0001) {
                            currNumber++;
                            // initialising array elements which evaluate to 24
                            allPuzzles[currNumber][0] = a;
                            allPuzzles[currNumber][1] = b;
                            allPuzzles[currNumber][2] = c;
                            allPuzzles[currNumber][3] = d;
                        }
                    }
                }
            }
        }
    }
}


int main(int argc,char *argv[]) {
    srand(1);
    int easyPuzzles[10][4]={{3,9,4,1},{8,5,8,1},{6,1,5,1},{2,8,7,8},{5,2,9,2},{2,6,8,4},{5,5,4,3},{6,6,2,6},{8,4,2,6},{6,2,8,1}};
    int allPuzzles[3188][4];
    //int debugStatus=0;
    int easyStatus=1;
    //printf("%d\n",argc);
    for (int i=0;i<argc;++i){
        //printf("%s\n",argv[i]);
    }

    printf("Welcome to the game of TwentyFour.\nUse each of the four numbers shown below exactly once, "
           "\ncombining them somehow with the basic mathematical operators (+,-,*,/) \nto yield the value twenty-four."
           "\n\n");
    // checking argv for debug mode
    if (argc>1){
        for (int i=0;i<argc-1;++i){
            if (argv[i][0]=='-' && argv[i][1]=='d' && argv[i+1][0]=='1'){
                debugMode();
            }
        }
    }
    int puzzle;
    int num1;
    int num2;
    int num3;
    int num4;
    // checking argv for easy mode
    if (argc>1){
        for (int i=0;i<argc-1;++i){
            if (argv[i][0]=='-' && argv[i][1]=='e' && argv[i+1][0]=='0'){
                //easyMode(allPuzzles,&num1,&num2,&num3,&num4);
                easyStatus=0;
                hardMode(allPuzzles);
            }
        }
    }
    char playAgain[100];
    while (playAgain[0]!='N'){
        if(easyStatus==0){
            puzzle=(rand()%3188);
            // setting the 4 nums for user calculations
            num1=allPuzzles[puzzle][0];
            num2=allPuzzles[puzzle][1];
            num3=allPuzzles[puzzle][2];
            num4=allPuzzles[puzzle][3];
        }
        else{
            puzzle=(rand()%10);
            num1=easyPuzzles[puzzle][0];
            num2=easyPuzzles[puzzle][1];
            num3=easyPuzzles[puzzle][2];
            num4=easyPuzzles[puzzle][3];
        }
        printf("The numbers to use are: ");
        printf("%d, %d, %d, %d.\n",num1,num2,num3,num4);
        char operators[5]="0000";
        char operator1;
        char operator2;
        char operator3;
        printf("Enter the three operators to be used, in order (+,-,*, or /): ");
        scanf("%s",operators);
        // checking if user entered more than 3 operators
        if (!(operators[3])){
            operator1=operators[0];
            operator2=operators[1];
            operator3=operators[2];
        }
        else {
            printf("Error! The number of operators is incorrect. Please try again.\n\n"); // printing suitable error message
            continue;
        }
        if (!(operator1=='+' || operator1=='-' || operator1=='*' || operator1=='/') || !(operator2=='+' || operator2=='-' || operator2=='*' || operator2=='/') || !(operator3=='+' || operator3=='-' || operator3=='*' || operator3=='/')){
            printf("Error! Invalid operator entered. Please try again.\n\n"); // printing suitable error message
            continue;
        }
        int step1=0;
        int step2=0;
        int step3=0;
        if (operator1=='+'){
            step1=num1+num2;
            printf("%d + %d = %d.\n",num1,num2,step1); // printing individual steps for user
        }
        else if (operator1=='-'){
            step1=num1-num2;
            printf("%d - %d = %d.\n",num1,num2,step1);
        }
        else if (operator1=='*'){
            step1=num1*num2;
            printf("%d * %d = %d.\n",num1,num2,step1);
        }
        else if (operator1=='/'){
            step1=num1/num2;
            printf("%d / %d = %d.\n",num1,num2,step1);
        }
        if (operator2=='+'){
            step2=step1+num3;
            printf("%d + %d = %d.\n",(int)step1,num3,step2);
        }
        else if (operator2=='-'){
            step2=step1-num3;
            printf("%d - %d = %d.\n",(int)step1,num3,step2);
        }
        else if (operator2=='*'){
            step2=step1*num3;
            printf("%d * %d = %d.\n",(int)step1,num3,step2);
        }
        else if (operator2=='/'){
            step2=step1/num3;
            printf("%d / %d = %d.\n",(int)step1,num3,step2);
        }
        if (operator3=='+'){
            step3=step2+num4;
            printf("%d + %d = %d.\n",(int)step2,num4,step3);
        }
        else if (operator3=='-'){
            step3=step2-num4;
            printf("%d - %d = %d.\n",(int)step2,num4,step3);
        }
        else if (operator3=='*'){
            step3=step2*num4;
            printf("%d * %d = %d.\n",(int)step2,num4,step3);
        }
        else if (operator3=='/'){
            step3=step2/num4;
            printf("%d / %d = %d.\n",(int)step2,num4,step3);
        }
        if (abs(step3-24)<0.0001){
            printf("Well done! You are a math genius.\n\n"); // printing suitable result message
        }
        else{
            printf("Sorry. Your solution did not evaluate to 24.\n\n"); // printing suitable result message
        }
        printf("Would you like to play again? Enter N for no and any other character for yes. \n");
        scanf("%s",playAgain);
        if (playAgain[0]=='N'){
            printf("Thanks for playing!\n\n"); // ending with thank you message
            break;
        }
    }
    return 0;
}