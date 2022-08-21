#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define PI = 3.14159

void MathA ( long double NumberC , char Operator )
{
    long long NumThree = ( long long ) NumberC;
    long long NumFourS =  ( long long ) sin( NumberC );
    long long NumFourC = ( long long ) cos( NumberC );
    long long NumFourT = ( long long ) tan( NumberC );

    if ( NumberC - ( long double ) NumThree == 0 && ( sin( NumberC ) - ( long double ) NumFourS != 0 || cos( NumberC ) - ( long double ) NumFourC != 0 || tan( NumberC ) - ( long double ) NumFourT != 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) sin ( NumberC ) ); break; case 'S': printf ( "sinh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) sinhl( NumberC ) ); break;
            case 'c': printf ( "cos(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) cos ( NumberC ) ); break; case 'C': printf ( "cosh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) coshl( NumberC ) ); break;
            case 't': printf ( "tan(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) tan ( NumberC ) ); break; case 'T': printf ( "tanh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) tanhl( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - ( long double ) NumThree != 0 && ( sin( NumberC ) - ( long double ) NumFourS != 0 || cos( NumberC ) - ( long double ) NumFourC != 0 || tan( NumberC ) - ( long double ) NumFourT != 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) sin ( NumberC ) ); break; case 'S': printf ( "sinh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) sinhl ( NumberC ) ); break;
            case 'c': printf ( "cos(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) cos ( NumberC ) ); break; case 'C': printf ( "cosh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) coshl ( NumberC ) ); break;
            case 't': printf ( "tan(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) tan ( NumberC ) ); break; case 'T': printf ( "tanh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) tanhl ( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - ( long double ) NumThree == 0 && ( sin( NumberC ) - ( long double ) NumFourS == 0 || cos( NumberC ) - ( long double ) NumFourC == 0 || tan( NumberC ) - ( long double ) NumFourT == 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) sin ( NumberC ) ); break; case 'S': printf ( "sinh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) sinhl ( NumberC ) ); break;
            case 'c': printf ( "cos(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) cos ( NumberC ) ); break; case 'C': printf ( "cosh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) coshl ( NumberC ) ); break;
            case 't': printf ( "tan(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) tan ( NumberC ) ); break; case 'T': printf ( "tanh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) tanhl ( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - ( long double ) NumThree != 0 && ( sin( NumberC ) - ( long double ) NumFourS == 0 || cos( NumberC ) - ( long double ) NumFourC == 0 || tan( NumberC ) - ( long double ) NumFourT == 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) sin ( NumberC ) ); break; case 'S': printf ( "sinh(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) sinhl ( NumberC ) ); break;
            case 'c': printf ( "cos(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) cos ( NumberC ) ); break; case 'C': printf ( "cosh(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) coshl ( NumberC ) ); break;
            case 't': printf ( "tan(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) tan ( NumberC ) ); break; case 'T': printf ( "tanh(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) tanhl ( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf ( "UnExpected ERROR\n");
    }
}

void MathAH ( long double NumberC , char Operator , FILE * History  )
{
    long long NumThree = ( long long ) NumberC;
    long long NumFourS =  ( long long ) sin ( NumberC );
    long long NumFourC = ( long long ) cos ( NumberC );
    long long NumFourT = ( long long ) tan ( NumberC );

    if ( NumberC - ( long double ) NumThree == 0 && ( sin( NumberC ) - ( long double ) NumFourS != 0 || cos( NumberC ) - ( long double ) NumFourC != 0 || tan( NumberC ) - ( long double ) NumFourT != 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) sin ( NumberC ) ); fprintf ( History , "sin(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) sin( NumberC ) ); break; case 'S': printf ( "sinh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) sinhl ( NumberC ) ); fprintf ( History , "sinh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) sinhl ( NumberC ) ); break;
            case 'c': printf ( "cos(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) cos ( NumberC ) ); fprintf ( History , "cos(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) cos( NumberC ) ); break; case 'C': printf ( "cosh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) coshl ( NumberC ) ); fprintf ( History , "cosh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) coshl ( NumberC ) ); break;
            case 't': printf ( "tan(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) tan ( NumberC ) ); fprintf ( History , "tan(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) tan( NumberC ) ); break; case 'T': printf ( "tanh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) tanhl ( NumberC ) ); fprintf ( History , "tanh(%lli) = %Lf \n" , ( long long ) NumberC , ( long double ) tanhl ( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - ( long double ) NumThree != 0 && ( sin( NumberC ) - ( long double ) NumFourS != 0 || cos( NumberC ) - ( long double ) NumFourC != 0 || tan( NumberC ) - ( long double ) NumFourT != 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) sin ( NumberC ) ); fprintf ( History , "sin(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) sin( NumberC ) ); break; case 'S': printf ( "sinh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) sinhl ( NumberC ) ); fprintf ( History , "sinh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) sinhl ( NumberC ) ); break;
            case 'c': printf ( "cos(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) cos ( NumberC ) ); fprintf ( History , "cos(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) cos( NumberC ) ); break; case 'C': printf ( "cosh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) coshl ( NumberC ) ); fprintf ( History , "cosh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) coshl ( NumberC ) ); break;
            case 't': printf ( "tan(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) tan ( NumberC ) ); fprintf ( History , "tan(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) tan( NumberC ) ); break; case 'T': printf ( "tanh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) tanhl ( NumberC ) ); fprintf ( History , "tanh(%Lf) = %Lf \n" , ( long double ) NumberC , ( long double ) tanhl ( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - ( long double ) NumThree == 0 && ( sin( NumberC ) - ( long double ) NumFourS == 0 || cos( NumberC ) - ( long double ) NumFourC == 0 || tan( NumberC ) - ( long double ) NumFourT == 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) sin ( NumberC ) ); fprintf ( History , "sin(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) sin( NumberC ) ); break; case 'S': printf ( "sinh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) sinhl ( NumberC ) ); fprintf ( History , "sinh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) sinhl ( NumberC ) ); break;
            case 'c': printf ( "cos(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) cos ( NumberC ) ); fprintf ( History , "cos(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) cos( NumberC ) ); break; case 'C': printf ( "cosh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) coshl ( NumberC ) ); fprintf ( History , "cosh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) coshl ( NumberC ) ); break;
            case 't': printf ( "tan(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) tan ( NumberC ) ); fprintf ( History , "tan(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) tan( NumberC ) ); break; case 'T': printf ( "tanh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) tanhl ( NumberC ) ); fprintf ( History , "tanh(%lli) = %lli \n" , ( long long ) NumberC , ( long long ) tanhl ( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberC - ( long double ) NumThree != 0 && ( sin( NumberC ) - ( long double ) NumFourS == 0 || cos( NumberC ) - ( long double ) NumFourC == 0 || tan( NumberC ) - ( long double ) NumFourT == 0 ) )
    {
        switch ( Operator )
        {
            case 's': printf ( "sin(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) sin( NumberC ) ); fprintf ( History , "sin(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) sin( NumberC ) ); break; case 'S': printf ( "Sin(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) sin( NumberC ) ); fprintf ( History , "Sin(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) sin( NumberC ) ); break;
            case 'c': printf ( "cos(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) cos( NumberC ) ); fprintf ( History , "cos(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) cos( NumberC ) ); break; case 'C': printf ( "Cos(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) cos( NumberC ) ); fprintf ( History , "Cos(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) cos( NumberC ) ); break;
            case 't': printf ( "tan(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) tan( NumberC ) ); fprintf ( History , "tan(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) tan( NumberC ) ); break; case 'T': printf ( "Tan(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) tan( NumberC ) ); fprintf ( History , "Tan(%Lf) = %lli \n" , ( long double ) NumberC , ( long long ) tan( NumberC ) ); break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf ( "UnExpected ERROR\n");
    }
}

void MathR ( long double NumberA , long double NumberB , char Operator  )
{
    long long NumOne = ( long long ) NumberA; long long NumTwo = ( long long ) NumberB; long long NumD = ( long long ) ( NumberA * NumberB ); long long NumE = ( long long ) ( NumberA + NumberB ); long long NumF = ( long long ) powl( NumberA , NumberB ); long long NumG = ( long long ) ( NumberA / NumberB ); long long NumH = ( long long ) ( NumberA - NumberB ); long long NumI = ( long long ) ( ( NumberB / 100 ) * NumberA );

    if ( NumberA - ( long double ) NumOne == 0 && NumberB - ( long double ) NumTwo == 0 )
    {
        switch ( Operator )
        {
            case '+': printf ( "%lli + %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA + NumberB ) ); break;
            case '-': printf ( "%lli - %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA - NumberB ) ); break;
            case '*': printf ( "%lli * %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA * NumberB ) ); break;
            case '/':
                switch ( ( long long ) NumberA % ( long long ) NumberB == 0 )
                {
                    case true: printf ( "%lli / %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA / NumberB ) ); break;
                    case false: printf ( "%lli / %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^':
                switch ( ( long long ) NumberB < 0 )
                {
                    case true: printf ( "%lli ^ %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
                    case false: printf ( "%lli ^ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) powl( NumberA , NumberB ) ); break;
                }
            break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) (NumI) == 0 )
                {
                    case true: printf ( "%lli%% of %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case false: printf ( "%lli%% of %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - ( long double ) NumOne != 0 && NumberB - ( long double ) NumTwo == 0 )
    {
        switch ( Operator )
        {
            case '+': printf ( "%Lf + %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA + NumberB ) ); break;
            case '-': printf ( "%Lf - %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA - NumberB ) ); break;
            case '*':
                switch ( ( NumberA * NumberB ) - ( long double ) ( NumD ) == 0 )
                {
                    case false: printf ( "%Lf * %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA * NumberB ) ); break;
                    case true: printf ( "%Lf * %lli = %lli \n" , ( long double ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA * NumberB ) ); break;
                }
            break;
            case '/': printf ( "%Lf / %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
            case '^': printf ( "%Lf ^ %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) NumI == 0 )
                {
                    case true: printf ( "%Lf%% of %lli = %lli \n" , ( long double ) NumberA , ( long long ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case false: printf ( "%Lf%% of %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - ( long double ) NumOne == 0 && NumberB - ( long double ) NumTwo != 0 )
    {
        switch ( Operator )
        {
            case '+': printf ( "%lli + %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA + NumberB ) ); break;
            case '-': printf ( "%lli - %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA - NumberB ) ); break;
            case '*':
                switch ( ( NumberA * NumberB ) - ( long double ) ( NumD ) != 0 )
                {
                    case true: printf ( "%lli * %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA * NumberB ) ); break;
                    case false: printf ( "%lli * %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA * NumberB ) ); break;
                }
            break;
            case '/':
                switch ( ( NumberA / NumberB ) - ( long double ) NumG == 0 )
                {
                    case true: printf ( "%lli / %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA / NumberB ) ); break;
                    case false: printf ( "%lli / %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^':
                switch ( powl( NumberA , NumberB ) - ( long double ) NumF == 0 )
                {
                    case false: printf ( "%lli ^ %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
                    case true: printf ( "%lli ^ %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) powl( NumberA , NumberB ) ); break;
                }
            break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) NumI != 0 )
                {
                    case true: printf ( "%lli%% of %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case false: printf ( "%lli%% of %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - ( long double ) NumOne != 0 && NumberB - ( long double ) NumTwo != 0 )
    {
        switch ( Operator )
        {
            case '+':
                switch ( ( NumberA + NumberB ) - ( long double ) NumE == 0 )
                {
                    case true: printf ( "%Lf + %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA + NumberB ) ); break;
                    case false: printf ( "%Lf + %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA + NumberB ) ); break;
                }
            break;
            case '-':
                switch ( ( NumberA - NumberB ) - ( long double ) NumH == 0 )
                {
                    case true: printf ( "%Lf - %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA - NumberB ) ); break;
                    case false: printf ( "%Lf - %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA - NumberB ) ); break;
                }
            break;
            case '*': printf ( "%Lf * %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA * NumberB ) ); break;
            case '/':
                switch ( ( NumberA / NumberB ) - ( long double ) NumG == 0 )
                {
                    case true: printf ( "%Lf / %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA / NumberB ) ); break;
                    case false: printf ( "%Lf / %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^': printf ( "%Lf ^ %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) NumI == 0 )
                {
                    case false: printf ( "%Lf%% of %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case true: printf ( "%Lf%% of %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf ( "UnExpected ERROR\n");
    }
}

void MathRH ( long double NumberA , long double NumberB , char Operator , FILE * History )
{
    long long NumOne = ( long long ) NumberA; long long NumTwo = ( long long ) NumberB; long long NumD = ( long long ) ( NumberA * NumberB ); long long NumE = ( long long ) ( NumberA + NumberB ); long long NumF = ( long long ) powl( NumberA , NumberB ); long long NumG = ( long long ) ( NumberA / NumberB ); long long NumH = ( long long ) ( NumberA - NumberB ); long long NumI = ( long long ) ( ( NumberB / 100 ) * NumberA );

    if ( NumberA - ( long double ) NumOne == 0 && NumberB - ( long double ) NumTwo == 0 )
    {
        switch ( Operator )
        {
            case '+': printf ( "%lli + %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA + NumberB ) ); fprintf ( History , "%lli + %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA + NumberB ) ); break;
            case '-': printf ( "%lli - %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA - NumberB ) ); fprintf ( History , "%lli - %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA - NumberB ) ); break;
            case '*': printf ( "%lli * %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA * NumberB ) ); fprintf ( History , "%lli * %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA * NumberB ) ); break;
            case '/':
                switch ( ( long long ) NumberA % ( long long ) NumberB == 0 )
                {
                    case true: printf ( "%lli / %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA / NumberB ) ); fprintf ( History , "%lli / %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA / NumberB ) ); break;
                    case false: printf ( "%lli / %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA / NumberB ) ); fprintf ( History , "%lli / %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^':
                switch ( ( long long ) NumberB < 0 )
                {
                    case true: printf ( "%lli ^ %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) powl( NumberA , NumberB ) ); fprintf ( History , "%lli ^ %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
                    case false: printf ( "%lli ^ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) powl( NumberA , NumberB ) ); fprintf ( History , "%lli ^ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) powl( NumberA , NumberB ) ); break;
                }
            break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); fprintf ( History , "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) (NumI) == 0 )
                {
                    case true: printf ( "%lli%% of %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%lli%% of %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case false: printf ( "%lli%% of %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%lli%% of %lli = %Lf \n" , ( long long ) NumberA , ( long long ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - ( long double ) NumOne != 0 && NumberB - ( long double ) NumTwo == 0 )
    {
        switch ( Operator )
        {
            case '+': printf ( "%Lf + %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA + NumberB ) ); fprintf ( History , "%Lf + %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA + NumberB ) ); break;
            case '-': printf ( "%Lf - %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA - NumberB ) ); fprintf ( History , "%Lf - %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA - NumberB ) ); break;
            case '*':
                switch ( ( NumberA * NumberB ) - ( long double ) ( NumD ) == 0 )
                {
                    case false: printf ( "%Lf * %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA * NumberB ) ); fprintf ( History , "%Lf * %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA * NumberB ) ); break;
                    case true: printf ( "%Lf * %lli = %lli \n" , ( long double ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA * NumberB ) ); fprintf ( History , "%Lf * %lli = %lli \n" , ( long double ) NumberA , ( long long ) NumberB , ( long long ) ( NumberA * NumberB ) ); break;
                }
            break;
            case '/': printf ( "%Lf / %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA / NumberB ) ); fprintf ( History , "%Lf / %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
            case '^': printf ( "%Lf ^ %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) powl( NumberA , NumberB ) ); fprintf ( History , "%Lf ^ %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); fprintf ( History , "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) NumI == 0 )
                {
                    case true: printf ( "%Lf%% of %lli = %lli \n" , ( long double ) NumberA , ( long long ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%Lf%% of %lli = %lli \n" , ( long double ) NumberA , ( long long ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case false: printf ( "%Lf%% of %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%Lf%% of %lli = %Lf \n" , ( long double ) NumberA , ( long long ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - ( long double ) NumOne == 0 && NumberB - ( long double ) NumTwo != 0 )
    {
        switch ( Operator )
        {
            case '+': printf ( "%lli + %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA + NumberB ) ); fprintf ( History , "%lli + %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA + NumberB ) ); break;
            case '-': printf ( "%lli - %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA - NumberB ) ); fprintf ( History , "%lli - %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA - NumberB ) ); break;
            case '*':
                switch ( ( NumberA * NumberB ) - ( long double ) ( NumD ) != 0 )
                {
                    case true: printf ( "%lli * %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA * NumberB ) ); fprintf ( History , "%lli * %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA * NumberB ) ); break;
                    case false: printf ( "%lli * %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA * NumberB ) ); fprintf ( History , "%lli * %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA * NumberB ) ); break;
                }
            break;
            case '/':
                switch ( ( NumberA / NumberB ) - ( long double ) NumG == 0 )
                {
                    case true: printf ( "%lli / %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA / NumberB ) ); fprintf ( History , "%lli / %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA / NumberB ) ); break;
                    case false: printf ( "%lli / %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA / NumberB ) ); fprintf ( History , "%lli / %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^':
                switch ( powl( NumberA , NumberB ) - ( long double ) NumF == 0 )
                {
                    case false: printf ( "%lli ^ %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) powl( NumberA , NumberB ) ); fprintf ( History , "%lli ^ %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
                    case true: printf ( "%lli ^ %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) powl( NumberA , NumberB ) ); fprintf ( History , "%lli ^ %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) powl( NumberA , NumberB ) ); break;
                }
            break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); fprintf ( History , "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) NumI != 0 )
                {
                    case true: printf ( "%lli%% of %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%lli%% of %Lf = %Lf \n" , ( long long ) NumberA , ( long double ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case false: printf ( "%lli%% of %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%lli%% of %Lf = %lli \n" , ( long long ) NumberA , ( long double ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else if ( NumberA - ( long double ) NumOne != 0 && NumberB - ( long double ) NumTwo != 0 )
    {
        switch ( Operator )
        {
            case '+':
                switch ( ( NumberA + NumberB ) - ( long double ) NumE == 0 )
                {
                    case true: printf ( "%Lf + %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA + NumberB ) ); fprintf ( History , "%Lf + %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA + NumberB ) ); break;
                    case false: printf ( "%Lf + %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA + NumberB ) ); fprintf ( History , "%Lf + %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA + NumberB ) ); break;
                }
            break;
            case '-':
                switch ( ( NumberA - NumberB ) - ( long double ) NumH == 0 )
                {
                    case true: printf ( "%Lf - %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA - NumberB ) ); fprintf ( History , "%Lf - %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA - NumberB ) ); break;
                    case false: printf ( "%Lf - %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA - NumberB ) ); fprintf ( History , "%Lf - %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA - NumberB ) ); break;
                }
            break;
            case '*': printf ( "%Lf * %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA * NumberB ) ); fprintf ( History , "%Lf * %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA * NumberB ) ); break;
            case '/':
                switch ( ( NumberA / NumberB ) - ( long double ) NumG == 0 )
                {
                    case true: printf ( "%Lf / %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA / NumberB ) ); fprintf ( History , "%Lf / %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( NumberA / NumberB ) ); break;
                    case false: printf ( "%Lf / %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA / NumberB ) ); fprintf ( History , "%Lf / %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( NumberA / NumberB ) ); break;
                }
            break;
            case '^': printf ( "%Lf ^ %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) powl( NumberA , NumberB ) ); fprintf ( History , "%Lf ^ %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) powl( NumberA , NumberB ) ); break;
            case '\\': printf ( "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); fprintf ( History , "%lli \\ %lli = %lli \n" , ( long long ) NumberA , ( long long ) NumberB , ( long long ) NumberA % ( long long ) NumberB ); break;
            case '%':
                switch ( ( ( NumberB / 100 ) * NumberA ) - ( long double ) NumI == 0 )
                {
                    case false: printf ( "%Lf%% of %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%Lf%% of %Lf = %Lf \n" , ( long double ) NumberA , ( long double ) NumberB , ( long double ) ( ( NumberB / 100 ) * NumberA ) ); break;
                    case true: printf ( "%Lf%% of %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); fprintf ( History , "%Lf%% of %Lf = %lli \n" , ( long double ) NumberA , ( long double ) NumberB , ( long long ) ( ( NumberB / 100 ) * NumberA ) ); break;
                }
            break;
            default: printf ( "%c Is An INVALID Operator\n" , Operator ); break;
        }
    }
    else
    {
        printf ( "UnExpected ERROR\n");
    }
}

int main( int argc , char * argv[ ] )
{
    srand(time(NULL));
    time_t theTime = time( NULL ); struct tm * aTime = localtime( & theTime ); unsigned long long CurrentDay = aTime->tm_mday; unsigned long long CurrentMonth = aTime->tm_mon + 1; unsigned long long CurrentYear = aTime->tm_year + 1900; time_t s, val = 1; struct tm * current_time; s = time( NULL ); current_time = localtime( & s );
    long double NumberA , NumberB , NumberC; char Operator , Repeat;  char * Text = malloc(32); int StringSize; char * NumberOne; char * NumberTwo; char * NumberThree; char * Argument = argv[1];

    if ( argc > 1 && ( strcmp ( Argument , "no history" ) == 0 || strcmp ( Argument , "No History" ) == 0 || strcmp ( Argument , "noHistory" ) == 0 || strcmp ( Argument , "NoHistory" ) == 0 || strcmp ( Argument , "Don't Keep History" ) == 0 ) )
    {
        system("clear");
        printf ( "This Is A Calculator. You Enter a valid Operator & Two Numbers or One. This program will give you the results of those two numbers or one number\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , Percentage '%%' , Remainder '\\' , sin() 's' , cos() 'c' , tan() 't' , sinh() 'S' , cosh 'C' , tanh() 'T' are valid Operators\n");

        do
        {
            printf ( "\nEnter A Valid Operator "); scanf(" %c" , & Operator );

            while ( Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/' && Operator != '^' && Operator != 's' && Operator != 'c' && Operator != 't' && Operator != 'S' && Operator != 'C' && Operator != 'T' && Operator != '\\' && Operator != '%' )
            {
                printf ( "%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); scanf(" %c" , & Operator );
            }
            if ( Operator == '+' || Operator == '-' || Operator == '*' || Operator == '/' || Operator == '^' || Operator == '\\' || Operator == '%' )
            {
                printf ( "Enter Your Number "); scanf("%s" , Text ); NumberA = strtold( Text , 0 ); NumberOne = Text;
                printf ( "Enter Your Number "); scanf("%s" , Text ); NumberB = strtold( Text , 0 ); NumberTwo = Text;
                MathR( NumberA , NumberB , Operator  );

            }
            else if ( Operator == 's' || Operator == 'c' || Operator == 't' || Operator == 'S' || Operator == 'C' || Operator == 'T' )
            {
                printf ( "Enter A Number "); scanf("%s", Text ); NumberThree = Text; NumberC = strtold( Text , 0 );
                MathA( NumberC , Operator  );
            }
            else
            {
                printf ( "Invalid Syntax \n");
            }

            printf ( "Do You Want To Do Another Calculation? Y or y for Yes "); time_t s, val = 1; struct tm * current_time; s = time( NULL ); current_time = localtime( & s ); scanf(" %c", & Repeat );
        } while ( Repeat == 'y' || Repeat == 'Y' ); system("clear");
    }
    else
    {
        FILE * CalculatorHistory = fopen("/tmp/Calculator.txt" , "a");
        fprintf ( CalculatorHistory , "In MM/DD/YYYY format, The Date The Is %02lld/%02lld/%04lld. Starting Time is %02d:%02d:%02d \n \n" , CurrentMonth , CurrentDay , CurrentYear , current_time->tm_hour , current_time->tm_min , current_time->tm_sec );
        printf ( "This Is A Calculator. You Enter a valid Operator & Two Numbers or One. This program will give you the results of those two numbers or one number\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , Percentage '%%' , Remainder '\\' , sin() 's' , cos() 'c' , tan() 't' , sinh() 'S' , cosh 'C' , tanh() 'T' are valid Operators\n");
        fprintf ( CalculatorHistory , "This Is A Calculator. You Enter a valid Operator & Two Numbers. This program will give you the results of those two numbers\nAdd '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , Percentage '%%' , Remainder '\\' , sin() 's' , cos() 'c' , tan() 't' , sinh() 'S' , cosh 'C' , tanh() 'T' are valid Operators\n");

        do
        {
            fprintf ( CalculatorHistory , "\nEnter A Valid Operator "); printf ( "\nEnter A Valid Operator "); scanf(" %c" , & Operator ); fprintf ( CalculatorHistory , "%c\n" , Operator );

            while ( Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/' && Operator != '^' && Operator != 's' && Operator != 'c' && Operator != 't' && Operator != 'S' && Operator != 'C' && Operator != 'T' && Operator != '\\' && Operator != '%' )
            {
                printf ( "%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); scanf(" %c" , & Operator ); fprintf ( CalculatorHistory , "%c is an Invalid Opertor\nReEnter Your Operator " , Operator ); fprintf ( CalculatorHistory , "%c\n" , Operator );
            }
            if ( Operator == '+' || Operator == '-' || Operator == '*' || Operator == '/' || Operator == '^' || Operator == '\\' || Operator == '%' )
            {
                printf ( "Enter Your Number "); fprintf ( CalculatorHistory , "Enter Your Number "); scanf("%s" , Text ); NumberA = strtold( Text , 0 ); NumberOne = Text; fprintf ( CalculatorHistory , "%s\n" , NumberOne );
                printf ( "Enter Your Number "); fprintf ( CalculatorHistory , "Enter Your Number "); scanf("%s" , Text ); NumberB = strtold( Text , 0 ); NumberTwo = Text; fprintf ( CalculatorHistory , "%s\n" , NumberTwo );
                MathRH( NumberA , NumberB , Operator , CalculatorHistory );

            }
            else if ( Operator == 's' || Operator == 'c' || Operator == 't' || Operator == 'S' || Operator == 'C' || Operator == 'T' )
            {
                fprintf ( CalculatorHistory , "Enter A Number "); printf ( "Enter A Number "); scanf("%s", Text ); NumberThree = Text; NumberC = strtold( Text , 0 ); fprintf ( CalculatorHistory , "%s\n" , NumberThree );
                MathAH( NumberC , Operator , CalculatorHistory );
            }
            else
            {
                printf ( "Invalid Syntax \n");
            }

            printf ( "Do You Want To Do Another Calculation? Y or y for Yes "); time_t s, val = 1; struct tm * current_time; s = time( NULL ); current_time = localtime( & s ); scanf(" %c", & Repeat );
        } while ( Repeat == 'y' || Repeat == 'Y' );

        fprintf ( CalculatorHistory , "\nIn MM/DD/YYYY format, The Date The Is %02lld/%02lld/%04lld. Ending Time is %02d:%02d:%02d\n\n" , CurrentMonth , CurrentDay , CurrentYear , current_time->tm_hour , current_time->tm_min , current_time->tm_sec );
        fclose( CalculatorHistory ); free( Text );
    }
    return 0;
}
