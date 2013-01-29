#include <assert.h>

typedef struct T_doller{
    int amount;
}t_doller;

t_doller doller = {1};

void dollerTimes( t_doller* doller, int times_num ){
    int local_amount;
    local_amount = doller->amount;
    doller->amount = local_amount * times_num;
}


void testMultiplication(){
    dollerTimes( &doller , 2 );
    assert( 10 == doller.amount );
}
