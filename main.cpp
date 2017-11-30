/** Luke Deegan,
 *  Exercise 6,
 *  Decimal / Binary Number Systems Conversion,
 *  2/10/17
 */

/** Preprocessor directives */
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

/** Sub-Function declaration */
void bin_2_dec(void);

void dec_2_bin(void);

int main()
{
    /** Variable Declarations */
    char inputcharacter;
    //double dec_result = 0, bin_result = 0;


    /** Brieft description of program function */
    cout << "\nThis program is to allow you to either convert numbers from decimal\n"
             << "to binary, or from binary to decimal\n\n" << endl;

    /** Do while loop to control the main menu, incorporating a switch case */
    do
    {


        /** Display menu to user and allow them to use to use program */

        cout << "\nFor Bin. to Dec. press: \t\tb\n"
             << "For Dec. to Bin. press: \t\td\n"
             << "To quit the program please press: \tq\n\n" << endl;

        cin >> inputcharacter;


        /** Switch case to allow the user to select between various menu options */
        switch (inputcharacter)
        {
            case 'b':   cout << "\nYou have selected Binary to Decimal conversion\n" << endl;
                        bin_2_dec();
                        break;
            case 'd':   cout << "\nYou have selected Decimal to Binary conversion\n" << endl;
                        dec_2_bin();
                        break;
            case 'q':   cout << "\nGoodbye, hope to see you again soon =)" << endl;
                        break;
            default:    cout << "\nNot a valid option, please try again\n" << endl;
                        break;
        }

    }
    while (inputcharacter != 'q');


    return 0;
}


/** binary to decimal conversion function */
void bin_2_dec()
{
    /** Local variable declarations */
    long int bin, dec = 0, remainder = 0;
    int i = 0;

    /** Instructions to the user */
    cout << "Enter Binary number to be converted: \t";
    cin >> bin;

    /** While loop to calculate the decimal equivilant */
    while (bin != 0)
    {
            remainder = bin % 10;
            bin /= 10;
            dec = dec + remainder * pow(2, i);
            i++;
    }
    /** Display the end result to the user */
    cout << "\nDecimal value: " << dec << "\n";

    fflush(stdin);

}

/** decimal to binary conversion sub function */
void dec_2_bin()
{

    /** local variable declarations */
    long int decimal, binary = 0, rem, arrayval[8]={0};
    int i = 0;

    /** Instructions for the user */
    cout << "Enter Decimal number to be converted: \t";
    cin >> decimal;

    /** While loop to calculate the binary equivilant */
    while (decimal != 0)
    {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem;
        arrayval[i] = rem;
        i++;
    }

    cout << "\nBinary value: ";

    /** For loop to display the contents of the array to the user as the binary result */
    for(i=7; i>=0; i--)
    {
        cout << arrayval[i];
    }

    cout << "\n";
    fflush(stdin);

    return;
}



