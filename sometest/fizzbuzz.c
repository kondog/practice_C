#include <stdio.h>
#include "fizzbuzz.h"

int fizzbuzz( int inputNum ){
    if( inputNum % 5 == 0 && inputNum %3 == 0 )
        {return -1;}
    else if( inputNum % 5 == 0)
        {return -2;}
    else if( inputNum % 3 == 0)
        {return -3;}
    else return inputNum;
}

/* fizzbuzz関数の返り値を検査する */
/* #example# */
/* input :  3 */
/* output: -3 */
int test_fizzbuzz( int inputNum, int resultFizzbuzz ){
    if ( resultFizzbuzz == fizzbuzz( inputNum ) ){
        return 1;
    }
    else return -1;
}

/* テストの入力値を決定する */
void decideTestInputNum( int testCaseNum, inputA, inputB ){
    if     ( 1 == test_fizzbuzz( 3 , -3 ) )
    {printf( "OK\n" );}
    else if( 1 == test_fizzbuzz( 1 ,  1) )
    {printf( "OK\n" );}
    else if( 1 == test_fizzbuzz( 5 , -2) )
    {printf( "OK\n" );}
    else if( 1 == test_fizzbuzz( 15, -1) )
    {printf( "OK\n" );}
    else{printf( "NG\n" );}
}

/* fizzbuzzテストケース集 */
void test( void ){
    int       loop_counter;
    testInput fbTestInputA;
    int       numOfTestCase = 4;

    for ( loop_counter = 0; loop_counter < numOfTestCase; loop_counter++ ){
        decideTestInputNum( loop_counter, &fbTestInput);
        if( 1 == test_fizzbuzz( fbTestInput.Alpah, fbTestInput.Beta )
            {printf( "OK\n" );}
        else
            {printf( "NG\n" );}
    }
}

int main( void) {
    test();
    return 0;
}


