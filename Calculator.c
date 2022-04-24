#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void MathA ( long double NumberC , char Operator , FILE * History )
{
    long long NumThree = (long long) NumberC;
    long long NumFourS =  (long long) sin( NumberC );
    long long NumFourC = (long long) cos( NumberC );
    long long NumFourT = (long long) tan( NumberC );

    if ( NumberC - (long double) NumThree == 0 && ( sin( NumberC ) - (long double) NumFourS != 0 || cos( NumberC ) - (long double) NumFourC != 0 || tan( NumberC ) - (long double) NumFourT != 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf("sin(%lld) = %Lf \n" , (long long) NumberC , (long double) sin( NumberC ) ); fprintf( History , "sin(%lld) = %Lf \n" , (long long) NumberC , (long double) sin( NumberC ) ); break; case 'S': printf("Sin(%lld) = %Lf \n" , (long long) NumberC , (long double) sin( NumberC ) ); fprintf( History , "Sin(%lld) = %Lf \n" , (long long) NumberC , (long double) sin( NumberC ) ); break;
            case 'c': printf("cos(%lld) = %Lf \n" , (long long) NumberC , (long double) cos( NumberC ) ); fprintf( History , "cos(%lld) = %Lf \n" , (long long) NumberC , (long double) cos( NumberC ) ); break; case 'C': printf("Cos(%lld) = %Lf \n" , (long long) NumberC , (long double) cos( NumberC ) ); fprintf( History , "Cos(%lld) = %Lf \n" , (long long) NumberC , (long double) cos( NumberC ) ); break;
            case 't': printf("tan(%lld) = %Lf \n" , (long long) NumberC , (long double) tan( NumberC ) ); fprintf( History , "tan(%lld) = %Lf \n" , (long long) NumberC , (long double) tan( NumberC ) ); break; case 'T': printf("Tan(%lld) = %Lf \n" , (long long) NumberC , (long double) tan( NumberC ) ); fprintf( History , "Tan(%lld) = %Lf \n" , (long long) NumberC , (long double) tan( NumberC ) ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - (long double) NumThree != 0 && ( sin( NumberC ) - (long double) NumFourS != 0 || cos( NumberC ) - (long double) NumFourC != 0 || tan( NumberC ) - (long double) NumFourT != 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf("sin(%Lf) = %Lf \n" , (long double) NumberC , (long double) sin( NumberC ) ); fprintf( History , "sin(%Lf) = %Lf \n" , (long double) NumberC , (long double) sin( NumberC ) ); break; case 'S': printf("Sin(%Lf) = %Lf \n" , (long double) NumberC , (long double) sin( NumberC ) ); fprintf( History , "Sin(%Lf) = %Lf \n" , (long double) NumberC , (long double) sin( NumberC ) ); break; 
            case 'c': printf("cos(%Lf) = %Lf \n" , (long double) NumberC , (long double) cos( NumberC ) ); fprintf( History , "cos(%Lf) = %Lf \n" , (long double) NumberC , (long double) cos( NumberC ) ); break; case 'C': printf("Cos(%Lf) = %Lf \n" , (long double) NumberC , (long double) cos( NumberC ) ); fprintf( History , "Cos(%Lf) = %Lf \n" , (long double) NumberC , (long double) cos( NumberC ) ); break; 
            case 't': printf("tan(%Lf) = %Lf \n" , (long double) NumberC , (long double) tan( NumberC ) ); fprintf( History , "tan(%Lf) = %Lf \n" , (long double) NumberC , (long double) tan( NumberC ) ); break; case 'T': printf("Tan(%Lf) = %Lf \n" , (long double) NumberC , (long double) tan( NumberC ) ); fprintf( History , "Tan(%Lf) = %Lf \n" , (long double) NumberC , (long double) tan( NumberC ) ); break; 
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - (long double) NumThree == 0 && ( sin( NumberC ) - (long double) NumFourS == 0 || cos( NumberC ) - (long double) NumFourC == 0 || tan( NumberC ) - (long double) NumFourT == 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf("sin(%lld) = %lld \n" , (long long) NumberC , (long long) sin( NumberC ) ); fprintf( History , "sin(%lld) = %lld \n" , (long long) NumberC , (long long) sin( NumberC ) ); break; case 'S': printf("Sin(%lld) = %lld \n" , (long long) NumberC , (long long) sin( NumberC ) ); fprintf( History , "Sin(%lld) = %lld \n" , (long long) NumberC , (long long) sin( NumberC ) ); break; 
            case 'c': printf("cos(%lld) = %lld \n" , (long long) NumberC , (long long) cos( NumberC ) ); fprintf( History , "cos(%lld) = %lld \n" , (long long) NumberC , (long long) cos( NumberC ) ); break; case 'C': printf("Cos(%lld) = %lld \n" , (long long) NumberC , (long long) cos( NumberC ) ); fprintf( History , "Cos(%lld) = %lld \n" , (long long) NumberC , (long long) cos( NumberC ) ); break; 
            case 't': printf("tan(%lld) = %lld \n" , (long long) NumberC , (long long) tan( NumberC ) ); fprintf( History , "tan(%lld) = %lld \n" , (long long) NumberC , (long long) tan( NumberC ) ); break; case 'T': printf("Tan(%lld) = %lld \n" , (long long) NumberC , (long long) tan( NumberC ) ); fprintf( History , "Tan(%lld) = %lld \n" , (long long) NumberC , (long long) tan( NumberC ) ); break; 
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - (long double) NumThree != 0 && ( sin( NumberC ) - (long double) NumFourS == 0 || cos( NumberC ) - (long double) NumFourC == 0 || tan( NumberC ) - (long double) NumFourT == 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf("sin(%Lf) = %lld \n" , (long double) NumberC , (long long) sin( NumberC ) ); fprintf( History , "sin(%Lf) = %lld \n" , (long double) NumberC , (long long) sin( NumberC ) ); break; case 'S': printf("Sin(%Lf) = %lld \n" , (long double) NumberC , (long long) sin( NumberC ) ); fprintf( History , "Sin(%Lf) = %lld \n" , (long double) NumberC , (long long) sin( NumberC ) ); break; 
            case 'c': printf("cos(%Lf) = %lld \n" , (long double) NumberC , (long long) cos( NumberC ) ); fprintf( History , "cos(%Lf) = %lld \n" , (long double) NumberC , (long long) cos( NumberC ) ); break; case 'C': printf("Cos(%Lf) = %lld \n" , (long double) NumberC , (long long) cos( NumberC ) ); fprintf( History , "Cos(%Lf) = %lld \n" , (long double) NumberC , (long long) cos( NumberC ) ); break; 
            case 't': printf("tan(%Lf) = %lld \n" , (long double) NumberC , (long long) tan( NumberC ) ); fprintf( History , "tan(%Lf) = %lld \n" , (long double) NumberC , (long long) tan( NumberC ) ); break; case 'T': printf("Tan(%Lf) = %lld \n" , (long double) NumberC , (long long) tan( NumberC ) ); fprintf( History , "Tan(%Lf) = %lld \n" , (long double) NumberC , (long long) tan( NumberC ) ); break; 
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf("UnExpected ERROR\n");
    }
}
void MathR ( long double NumberA , long double NumberB , char Operator , FILE * History )
{
    long long NumOne = (long long) NumberA; long long NumTwo = (long long) NumberB; long long NumD = (long long) ( NumberA * NumberB ); long long NumE = (long long) ( NumberA + NumberB ); long long NumF = (long long) pow( NumberA , NumberB ); long long NumG = (long long) ( NumberA / NumberB ); long long NumH = (long long) ( NumberA - NumberB );

    if ( NumberA - (long double) NumOne == 0 && NumberB - (long double) NumTwo == 0 )
    {
        switch ( Operator )
        {
            case '+': printf("%lld + %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA + NumberB ) ); fprintf( History , "%lld + %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA + NumberB ) ); break;
            case '-': printf("%lld - %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA - NumberB ) ); fprintf( History , "%lld - %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA - NumberB ) ); break;
            case '*': printf("%lld * %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA * NumberB ) ); fprintf( History , "%lld * %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA * NumberB ) ); break;
            case '/': 
                switch ( (long long) NumberA % (long long) NumberB )
                {
                    case 0: printf("%lld / %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA / NumberB ) ); fprintf( History , "%lld / %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) ( NumberA / NumberB ) );  break;
                    default: printf("%lld / %lld = %Lf \n" , (long long) NumberA , (long long) NumberB , (long double) ( NumberA / NumberB ) ); fprintf( History , "%lld / %lld = %Lf \n" , (long long) NumberA , (long long) NumberB , (long double) ( NumberA / NumberB ) );  break;
                }
            break;
            case '^':
                switch ( (long long) NumberB < 0 )
                {
                    case 1: printf("%lld ^ %lld = %Lf \n" , (long long) NumberA , (long long) NumberB , (long double) pow( NumberA , NumberB ) ); fprintf( History , "%lld ^ %lld = %Lf \n" , (long long) NumberA , (long long) NumberB , (long double) pow( NumberA , NumberB ) ); break;
                    default: printf("%lld ^ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) pow( NumberA , NumberB ) ); fprintf( History , "%lld ^ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) pow( NumberA , NumberB ) ); break;
                }
            break;
            case '\\': printf("%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); fprintf( History , "%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); break;
            case '%': printf("%lld%% of %lld == %Lf \n" , (long long) NumberA , (long long) NumberB , ( NumberB / 100 ) * NumberA ); fprintf( History , "%lld%% of %lld == %Lf \n" , (long long) NumberA , (long long) NumberB , ( NumberB / 100 ) * NumberA ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - (long double) NumOne != 0 && NumberB - (long double) NumTwo == 0 )
    {
        switch ( Operator )
        {
            case '+': printf("%Lf + %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA + NumberB ) ); fprintf( History , "%Lf + %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA + NumberB ) ); break;
            case '-': printf("%Lf - %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA - NumberB ) ); fprintf( History , "%Lf - %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA - NumberB ) ); break;
            case '*':
                switch ( ( NumberA * NumberB ) - (long double) ( NumD ) == 0 )
                {
                    case 0: printf("%Lf * %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA * NumberB ) ); fprintf( History , "%Lf * %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA * NumberB ) ); break;
                    default: printf("%Lf * %lld = %lld \n" , (long double) NumberA , (long long) NumberB , (long long) ( NumberA * NumberB ) ); fprintf( History , "%Lf * %lld = %lld \n" , (long double) NumberA , (long long) NumberB , (long long) ( NumberA * NumberB ) ); break;
                }
            break;
            case '/': printf("%Lf / %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA / NumberB ) ); fprintf( History , "%Lf / %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) ( NumberA / NumberB ) ); break;
            case '^': printf("%Lf ^ %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) pow( NumberA , NumberB ) ); fprintf( History , "%Lf ^ %lld = %Lf \n" , (long double) NumberA , (long long) NumberB , (long double) pow( NumberA , NumberB ) ); break;
            case '\\': printf("%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); fprintf( History , "%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); break;
            case '%': printf("%Lf%% of %lld == %Lf \n" , (long double) NumberA , (long long) NumberB , ( NumberB / 100 ) * NumberA ); fprintf( History , "%Lf%% of %lld == %Lf \n" , (long double) NumberA , (long long) NumberB , ( NumberB / 100 ) * NumberA ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - (long double) NumOne == 0 && NumberB - (long double) NumTwo != 0 )
    {
        switch ( Operator )
        {
            case '+': printf("%lld + %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA + NumberB ) ); fprintf( History , "%lld + %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA + NumberB ) ); break;
            case '-': printf("%lld - %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA - NumberB ) ); fprintf( History , "%lld - %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA - NumberB ) ); break;
            case '*':
                switch ( ( NumberA * NumberB ) - (long double) ( NumD ) != 0 )
                {
                    case 1: printf("%lld * %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA * NumberB ) ); fprintf( History , "%lld * %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA * NumberB ) ); break;
                    default: printf("%lld * %Lf = %lld \n" , (long long) NumberA , (long double) NumberB , (long long) ( NumberA * NumberB ) ); fprintf( History , "%lld * %Lf = %lld \n" , (long long) NumberA , (long double) NumberB , (long long) ( NumberA * NumberB ) ); break;
                }
            break;
            case '/':
                switch ( ( NumberA / NumberB ) - (long double) NumG == 0 )
                {
                    case 1: printf("%lld / %Lf = %lld \n" , (long long) NumberA , (long double) NumberB , (long long) ( NumberA / NumberB ) ); fprintf( History , "%lld / %Lf = %lld \n" , (long long) NumberA , (long double) NumberB , (long long) ( NumberA / NumberB ) ); break;
                    default: printf("%lld / %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA / NumberB ) ); fprintf( History , "%lld / %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^':
                switch ( pow( NumberA , NumberB ) - (long double) NumF == 0 )
                {
                    case 0: printf("%lld ^ %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) pow( NumberA , NumberB ) ); fprintf( History , "%lld ^ %Lf = %Lf \n" , (long long) NumberA , (long double) NumberB , (long double) pow( NumberA , NumberB ) ); break;
                    default: printf("%lld ^ %Lf = %lld \n" , (long long) NumberA , (long double) NumberB , (long long) pow( NumberA , NumberB ) ); fprintf( History , "%lld ^ %Lf = %lld \n" , (long long) NumberA , (long double) NumberB , (long long) pow( NumberA , NumberB ) ); break;
                }
            break;
            case '\\': printf("%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); fprintf( History , "%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); break;
            case '%': printf("%lld%% of %Lf == %Lf \n" , (long long) NumberA , (long double) NumberB , ( NumberB / 100 ) * NumberA ); fprintf( History , "%lld%% of %Lf == %Lf \n" , (long long) NumberA , (long double) NumberB , ( NumberB / 100 ) * NumberA ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - (long double) NumOne != 0 && NumberB - (long double) NumTwo != 0 )
    {
        switch ( Operator )
        {
            case '+':
                switch ( ( NumberA + NumberB ) - (long double) NumE == 0 )
                {
                    case 1: printf("%Lf + %Lf = %lld \n" , (long double) NumberA , (long double) NumberB , (long long) ( NumberA + NumberB ) ); fprintf( History , "%Lf + %Lf = %lld \n" , (long double) NumberA , (long double) NumberB , (long long) ( NumberA + NumberB ) ); break;
                    default: printf("%Lf + %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA + NumberB ) ); fprintf( History , "%Lf + %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA + NumberB ) ); break;
                }
            break;
            case '-':
                switch ( ( NumberA - NumberB ) - (long double) NumH == 0 )
                {
                case 1: printf("%Lf - %Lf = %lld \n" , (long double) NumberA , (long double) NumberB , (long long) ( NumberA - NumberB ) ); fprintf( History , "%Lf - %Lf = %lld \n" , (long double) NumberA , (long double) NumberB , (long long) ( NumberA - NumberB ) ); break;
                default: printf("%Lf - %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA - NumberB ) ); fprintf( History , "%Lf - %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA - NumberB ) ); break;
                }
            break;
            case '*': printf("%Lf * %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA * NumberB ) ); fprintf( History , "%Lf * %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA * NumberB ) ); break;
            case '/': printf("%Lf / %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA / NumberB ) ); fprintf( History , "%Lf / %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) ( NumberA / NumberB ) ); break;
            case '^': printf("%Lf ^ %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) pow( NumberA , NumberB ) ); fprintf( History , "%Lf ^ %Lf = %Lf \n" , (long double) NumberA , (long double) NumberB , (long double) pow( NumberA , NumberB ) ); break;
            case '\\': printf("%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); fprintf( History , "%lld \\ %lld = %lld \n" , (long long) NumberA , (long long) NumberB , (long long) NumberA % (long long) NumberB ); break;
            case '%': printf("%Lf%% of %Lf == %Lf \n" , (long double) NumberA , (long double) NumberB , ( NumberB / 100 ) * NumberA ); fprintf( History , "%Lf%% of %Lf == %Lf \n" , (long double) NumberA , (long double) NumberB , ( NumberB / 100 ) * NumberA ); break;
            default: printf("%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf("UnExpected ERROR\n");
    }
}
int main()
{
    time_t theTime = time(NULL); struct tm *aTime = localtime(&theTime); unsigned long long CurrentDay = aTime->tm_mday; unsigned long long CurrentMonth = aTime->tm_mon + 1; unsigned long long CurrentYear = aTime->tm_year + 1900; time_t s, val = 1; struct tm* current_time; s = time(NULL); current_time = localtime(&s);
    
    long double NumberA , NumberB , NumberC; char Operator , Repeat; FILE * CalculatorHistory = fopen("Calculator.txt","a"); char Text[64];
    
    fprintf( CalculatorHistory , "In MM/DD/YYYY format, The Date The Is %02lld/%02lld/%04lld. Starting Time is %02d:%02d:%02d \n \n" , CurrentMonth , CurrentDay , CurrentYear , current_time->tm_hour , current_time->tm_min , current_time->tm_sec );
    printf("This Is A Calculator. You Enter a valid Operator & Two Numbers. This program will give you the results of those two numbers\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , Percentage '%' , Remainder '\\' , sin() 's' , cos() 'c' , tan() 't' are valid Operators\n"); fprintf( CalculatorHistory , "This Is A Calculator. You Enter a valid Operator & Two Numbers. This program will give you the results of those two numbers\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , Percentage '%' , Remainder '\\' , sin() 's' , cos() 'c' , tan() 't' are valid Operators\n");

    do
    {
        fprintf( CalculatorHistory , "\nEnter A Valid Operator "); printf("\nEnter A Valid Operator "); scanf(" %c" , & Operator ); fprintf( CalculatorHistory , "%c\n" , Operator );

        while ( Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/' && Operator != '^' && Operator != 's' && Operator != 'c' && Operator != 't' && Operator != 'S' && Operator != 'C' && Operator != 'T' && Operator != '\\' && Operator != '%' )
        {
            printf("%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); scanf(" %c" , & Operator ); fprintf( CalculatorHistory , "%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); fprintf( CalculatorHistory , "%c\n" , Operator );
        }
        if ( Operator == '+' || Operator == '-' || Operator == '*' || Operator == '/' || Operator == '^' || Operator == '\\' || Operator == '%' )
        {
            switch ( Operator )
            {
                case '%':
                    printf("Enter A Percentage "); fprintf( CalculatorHistory , "Enter Your Number "); scanf("%s" , Text ); NumberA = strtold( Text , 0 ); fprintf( CalculatorHistory , "%Lf\n" , NumberA );
                    printf("Enter Your Number "); fprintf( CalculatorHistory , "Enter Your Number "); scanf("%s" , Text ); NumberB = strtold( Text , 0 ); fprintf( CalculatorHistory , "%Lf\n" , NumberB );
                    MathR( NumberA , NumberB , Operator , CalculatorHistory );
                break;
                default:
                    printf("Enter Your Number "); fprintf( CalculatorHistory , "Enter Your Number "); scanf("%s" , Text ); NumberA = strtold( Text , 0 ); fprintf( CalculatorHistory , "%Lf\n" , NumberA );
                    printf("Enter Your Number "); fprintf( CalculatorHistory , "Enter Your Number "); scanf("%s" , Text ); NumberB = strtold( Text , 0 ); fprintf( CalculatorHistory , "%Lf\n" , NumberB );
                    MathR( NumberA , NumberB , Operator , CalculatorHistory );
                break;
            }
        }
        else if ( Operator == 's' || Operator == 'c' || Operator == 't' || Operator == 'S' || Operator == 'C' || Operator == 'T' )
        {
            fprintf( CalculatorHistory , "Enter A Number "); printf("Enter A Number "); scanf("%s", Text ); NumberC = strtold( Text , 0 ); fprintf( CalculatorHistory , "%Lf\n" , NumberC );
            MathA( NumberC , Operator , CalculatorHistory );
        }
        else
        {
            printf("Invalid Syntax \n");
        }
        printf("Do You Want To Do Another Calculation? Y or y for Yes "); scanf(" %c", & Repeat );
        time_t s, val = 1; struct tm* current_time; s = time(NULL); current_time = localtime(&s);
    } while ( Repeat == 'y' || Repeat == 'Y' );

    fprintf( CalculatorHistory , "\nIn MM/DD/YYYY format, The Date The Is %02lld/%02lld/%04lld. Ending Time is %02d:%02d:%02d\n" , CurrentMonth , CurrentDay , CurrentYear , current_time->tm_hour , current_time->tm_min , current_time->tm_sec );
    fprintf( CalculatorHistory , "\n"); fclose( CalculatorHistory ); return 0;
}
