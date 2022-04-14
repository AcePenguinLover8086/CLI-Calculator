#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void MathA( float NumberC , char Operator , FILE * History )
{
    int NumThree = (int) NumberC;
    int NumFourS =  (int) sin( NumberC );
    int NumFourC = (int) cos( NumberC );
    int NumFourT = (int) tan( NumberC );

    if ( NumberC - (float) NumThree == 0 && ( sin( NumberC ) - (float) NumFourS != 0 || cos( NumberC ) - (float) NumFourC != 0 || tan( NumberC ) - (float) NumFourT != 0 ) )
    {
        switch (Operator)
        {
            case 's': printf("sin(%d) = %f \n" , (int) NumberC , (float) sin( NumberC ) ); fprintf( History , "sin(%d) = %f \n" , (int) NumberC , (float) sin( NumberC ) ); break; case 'S': printf("Sin(%d) = %f \n" , (int) NumberC , (float) sin( NumberC ) ); fprintf( History , "Sin(%d) = %f \n" , (int) NumberC , (float) sin( NumberC ) ); break;
            case 'c': printf("cos(%d) = %f \n" , (int) NumberC , (float) cos( NumberC ) ); fprintf( History , "cos(%d) = %f \n" , (int) NumberC , (float) cos( NumberC ) ); break; case 'C': printf("Cos(%d) = %f \n" , (int) NumberC , (float) cos( NumberC ) ); fprintf( History , "Cos(%d) = %f \n" , (int) NumberC , (float) cos( NumberC ) ); break;
            case 't': printf("tan(%d) = %f \n" , (int) NumberC , (float) tan( NumberC ) ); fprintf( History , "tan(%d) = %f \n" , (int) NumberC , (float) tan( NumberC ) ); break; case 'T': printf("Tan(%d) = %f \n" , (int) NumberC , (float) tan( NumberC ) ); fprintf( History , "Tan(%d) = %f \n" , (int) NumberC , (float) tan( NumberC ) ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - (float) NumThree != 0 && ( sin( NumberC ) - (float) NumFourS != 0 || cos( NumberC ) - (float) NumFourC != 0 || tan( NumberC ) - (float) NumFourT != 0 ) )
    {
        switch (Operator)
        {
            case 's': printf("sin(%f) = %f \n" , (float) NumberC , (float) sin( NumberC ) ); fprintf( History , "sin(%f) = %f \n" , (float) NumberC , (float) sin( NumberC ) ); break; case 'S': printf("Sin(%f) = %f \n" , (float) NumberC , (float) sin( NumberC ) ); fprintf( History , "Sin(%f) = %f \n" , (float) NumberC , (float) sin( NumberC ) ); break; 
            case 'c': printf("cos(%f) = %f \n" , (float) NumberC , (float) cos( NumberC ) ); fprintf( History , "cos(%f) = %f \n" , (float) NumberC , (float) cos( NumberC ) ); break; case 'C': printf("Cos(%f) = %f \n" , (float) NumberC , (float) cos( NumberC ) ); fprintf( History , "Cos(%f) = %f \n" , (float) NumberC , (float) cos( NumberC ) ); break; 
            case 't': printf("tan(%f) = %f \n" , (float) NumberC , (float) tan( NumberC ) ); fprintf( History , "tan(%f) = %f \n" , (float) NumberC , (float) tan( NumberC ) ); break; case 'T': printf("Tan(%f) = %f \n" , (float) NumberC , (float) tan( NumberC ) ); fprintf( History , "Tan(%f) = %f \n" , (float) NumberC , (float) tan( NumberC ) ); break; 
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - (float) NumThree == 0 && ( sin( NumberC ) - (float) NumFourS == 0 || cos( NumberC ) - (float) NumFourC == 0 || tan( NumberC ) - (float) NumFourT == 0 ) )
    {
        switch (Operator)
        {
            case 's': printf("sin(%d) = %d \n" , (int) NumberC , (int) sin( NumberC ) ); fprintf( History , "sin(%d) = %d \n" , (int) NumberC , (int) sin( NumberC ) ); break; case 'S': printf("Sin(%d) = %d \n" , (int) NumberC , (int) sin( NumberC ) ); fprintf( History , "Sin(%d) = %d \n" , (int) NumberC , (int) sin( NumberC ) ); break; 
            case 'c': printf("cos(%d) = %d \n" , (int) NumberC , (int) cos( NumberC ) ); fprintf( History , "cos(%d) = %d \n" , (int) NumberC , (int) cos( NumberC ) ); break; case 'C': printf("Cos(%d) = %d \n" , (int) NumberC , (int) cos( NumberC ) ); fprintf( History , "Cos(%d) = %d \n" , (int) NumberC , (int) cos( NumberC ) ); break; 
            case 't': printf("tan(%d) = %d \n" , (int) NumberC , (int) tan( NumberC ) ); fprintf( History , "tan(%d) = %d \n" , (int) NumberC , (int) tan( NumberC ) ); break; case 'T': printf("Tan(%d) = %d \n" , (int) NumberC , (int) tan( NumberC ) ); fprintf( History , "Tan(%d) = %d \n" , (int) NumberC , (int) tan( NumberC ) ); break; 
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - (float) NumThree != 0 && ( sin( NumberC ) - (float) NumFourS == 0 || cos( NumberC ) - (float) NumFourC == 0 || tan( NumberC ) - (float) NumFourT == 0 ) )
    {
        switch (Operator)
        {
            case 's': printf("sin(%f) = %d \n" , (float) NumberC , (int) sin( NumberC ) ); fprintf( History , "sin(%f) = %d \n" , (float) NumberC , (int) sin( NumberC ) ); break; case 'S': printf("Sin(%f) = %d \n" , (float) NumberC , (int) sin( NumberC ) ); fprintf( History , "Sin(%f) = %d \n" , (float) NumberC , (int) sin( NumberC ) ); break; 
            case 'c': printf("cos(%f) = %d \n" , (float) NumberC , (int) cos( NumberC ) ); fprintf( History , "cos(%f) = %d \n" , (float) NumberC , (int) cos( NumberC ) ); break; case 'C': printf("Cos(%f) = %d \n" , (float) NumberC , (int) cos( NumberC ) ); fprintf( History , "Cos(%f) = %d \n" , (float) NumberC , (int) cos( NumberC ) ); break; 
            case 't': printf("tan(%f) = %d \n" , (float) NumberC , (int) tan( NumberC ) ); fprintf( History , "tan(%f) = %d \n" , (float) NumberC , (int) tan( NumberC ) ); break; case 'T': printf("Tan(%f) = %d \n" , (float) NumberC , (int) tan( NumberC ) ); fprintf( History , "Tan(%f) = %d \n" , (float) NumberC , (int) tan( NumberC ) ); break; 
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf("UnExpected ERROR\n");
    }
}
void MathR( float NumberA , float NumberB , char Operator , FILE * History )
{
    int NumOne = (int) NumberA; int NumTwo = (int) NumberB;

    if ( NumberA - (float) NumOne == 0 && NumberB - (float) NumTwo == 0 )
    {
        switch (Operator)
        {
            case '+': printf("%d + %d = %d \n" , (int) NumberA , (int) NumberB , (int) ( NumberA + NumberB ) ); fprintf( History , "%d + %d = %d \n" , (int) NumberA , (int) NumberB , (int) ( NumberA + NumberB ) ); break;
            case '-': printf("%d - %d = %d \n" , (int) NumberA , (int) NumberB , (int) ( NumberA - NumberB ) ); fprintf( History , "%d - %d = %d \n" , (int) NumberA , (int) NumberB , (int) ( NumberA - NumberB ) ); break;
            case '*': printf("%d * %d = %d \n" , (int) NumberA , (int) NumberB , (int) ( NumberA * NumberB ) ); fprintf( History , "%d * %d = %d \n" , (int) NumberA , (int) NumberB , (int) ( NumberA * NumberB ) ); break;
            case '/': printf("%d / %d = %f \n" , (int) NumberA , (int) NumberB , (float) ( NumberA / NumberB ) ); fprintf( History , "%d / %d = %f \n" , (int) NumberA , (int) NumberB , (float) ( NumberA / NumberB ) ); break;
            case '^': printf("%d ^ %d = %d \n" , (int) NumberA , (int) NumberB , (int) pow( NumberA , NumberB ) ); fprintf( History , "%d ^ %d = %d \n" , (int) NumberA , (int) NumberB , (int) pow( NumberA , NumberB ) ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - (float) NumOne != 0 && NumberB - (float) NumTwo == 0 )
    {
        switch (Operator)
        {
            case '+': printf("%f + %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA + NumberB ) ); fprintf( History , "%f + %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA + NumberB ) ); break;
            case '-': printf("%f - %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA - NumberB ) ); fprintf( History , "%f - %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA - NumberB ) ); break;
            case '*': printf("%f * %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA * NumberB ) ); fprintf( History , "%f * %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA * NumberB ) ); break;
            case '/': printf("%f / %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA / NumberB ) ); fprintf( History , "%f / %d = %f \n" , (float) NumberA , (int) NumberB , (float) ( NumberA / NumberB ) ); break;
            case '^': printf("%f ^ %d = %f \n" , (float) NumberA , (int) NumberB , (float) pow( NumberA , NumberB ) ); fprintf( History , "%f ^ %d = %f \n" , (float) NumberA , (int) NumberB , (float) pow( NumberA , NumberB ) ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - (float) NumOne == 0 && NumberB - (float) NumTwo != 0 )
    {
        switch (Operator)
        {
            case '+': printf("%d + %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA + NumberB ) ); fprintf( History , "%d + %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA + NumberB ) ); break;
            case '-': printf("%d - %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA - NumberB ) ); fprintf( History , "%d - %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA - NumberB ) ); break;
            case '*': printf("%d * %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA * NumberB ) ); fprintf( History , "%d * %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA * NumberB ) ); break;
            case '/': printf("%d / %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA / NumberB ) ); fprintf( History , "%d / %f = %f \n" , (int) NumberA , (float) NumberB , (float) ( NumberA / NumberB ) ); break;
            case '^': printf("%d ^ %f = %f \n" , (int) NumberA , (float) NumberB , (float) pow( NumberA , NumberB ) ); fprintf( History , "%d ^ %f = %f \n" , (int) NumberA , (float) NumberB , (float) pow( NumberA , NumberB ) ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - (float) NumOne != 0 && NumberB - (float) NumTwo != 0 )
    {
        switch (Operator)
        {
            case '+': printf("%f + %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA + NumberB ) ); fprintf( History , "%f + %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA + NumberB ) ); break;
            case '-': printf("%f - %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA - NumberB ) ); fprintf( History , "%f - %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA - NumberB ) ); break;
            case '*': printf("%f * %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA * NumberB ) ); fprintf( History , "%f * %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA * NumberB ) ); break;
            case '/': printf("%f / %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA / NumberB ) ); fprintf( History , "%f / %f = %f \n" , (float) NumberA , (float) NumberB , (float) ( NumberA / NumberB ) ); break;
            case '^': printf("%f ^ %f = %f \n" , (float) NumberA , (float) NumberB , (float) pow( NumberA , NumberB ) ); fprintf( History , "%f ^ %f = %f \n" , (float) NumberA , (float) NumberB , (float) pow( NumberA , NumberB ) ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf("UnExpected ERROR\n");
    }
}
void main()
{
    time_t theTime = time(NULL); struct tm *aTime = localtime(&theTime); unsigned int CurrentDay = aTime->tm_mday; unsigned int CurrentMonth = aTime->tm_mon + 1; unsigned int CurrentYear = aTime->tm_year + 1900; time_t s, val = 1; struct tm* current_time; s = time(NULL); current_time = localtime(&s);
    
    float NumberA , NumberB , NumberC; char Operator , Repeat; FILE * CalculatorHistory = fopen("Calculator.txt","a");
    
    fprintf( CalculatorHistory , "In MM/DD/YYYY format, The Date The Is %d/%d/%d. Starting Time is %02d:%02d:%02d \n \n" , CurrentMonth , CurrentDay , CurrentYear , current_time->tm_hour , current_time->tm_min , current_time->tm_sec );
    printf("This Is A Calculator. You Enter a valid Operator & Two Numbers. This program will give you the results of those two numbers\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , sin() 's' , cos() 'c' , tan() 't' are valid Operators\n"); fprintf( CalculatorHistory , "This Is A Calculator. You Enter a valid Operator & Two Numbers. This program will give you the results of those two numbers\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , sin() 's' , cos() 'c' , tan() 't' are valid Operators\n");

    do
    {
        fprintf( CalculatorHistory , "\nEnter A Valid Operator "); printf("\nEnter A Valid Operator "); scanf(" %c" , & Operator ); fprintf( CalculatorHistory , "%c\n" , Operator );
        if ( Operator == '\\' )
        {
            Operator = '/';
        }
        while ( Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/' && Operator != '^' && Operator != 's' && Operator != 'c' && Operator != 't' && Operator != 'S' && Operator != 'C' && Operator != 'T' )
        {
            printf("%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); scanf(" %c" , & Operator ); fprintf( CalculatorHistory , "%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); fprintf( CalculatorHistory , "%c\n" , Operator );
        }
        if ( Operator == '+' || Operator == '-' || Operator == '*' || Operator == '/' || Operator == '^' )
        {
            printf("Enter Your A Number "); fprintf( CalculatorHistory , "Enter Your A Number "); scanf("%f" , & NumberA ); fprintf( CalculatorHistory , "%f\n" , NumberA );
            printf("Enter Your A Number "); fprintf( CalculatorHistory , "Enter Your A Number "); scanf("%f" , & NumberB ); fprintf( CalculatorHistory , "%f\n" , NumberB );
            MathR( NumberA , NumberB , Operator , CalculatorHistory );
        }
        else if (Operator == 's' || Operator == 'c' || Operator == 't' || Operator == 'S' || Operator == 'C' || Operator == 'T')
        {
            fprintf( CalculatorHistory , "Enter A Number "); printf("Enter A Number "); scanf("%f", & NumberC ); fprintf( CalculatorHistory , "%f\n" , NumberC );
            MathA( NumberC , Operator , CalculatorHistory );
        }
        else
        {
            printf("Invalid Syntax \n");
        }
        time_t s, val = 1; struct tm* current_time; s = time(NULL); current_time = localtime(&s);
        printf("Do You Want To Do Another Calculation? Y or y for Yes "); scanf(" %c", & Repeat );
    } while ( Repeat == 'y' || Repeat == 'Y' );

    fprintf( CalculatorHistory , "\nIn MM/DD/YYYY format, The Date The Is %d/%d/%d. Ending Time is %02d:%02d:%02d\n" , CurrentMonth , CurrentDay , CurrentYear , current_time->tm_hour , current_time->tm_min , current_time->tm_sec );
    fprintf( CalculatorHistory , "\n"); fclose( CalculatorHistory );
}