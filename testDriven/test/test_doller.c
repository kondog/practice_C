#include <assert.h>
#include "doller.h"
#include "franc.h"

/* $B%F%9%H!'=i4|2=(B */
void testDollerInit(){
    t_doller local_doller; /* local_dollerInit$BMQ(B */
    /*$BJQ?t$N=i4|2=(B*/
    public_doller_init( 5 );
    assert( 5 == public_doller.amount );
    local_doller_init( &local_doller, 5 );
    assert( 5 == local_doller.amount );
}

/* $B%F%9%H!'(BDoller$B>h;;(B */
void testDollerMultiplication(){
    int counter = 0;
    t_doller local_doller;      /* $B%m!<%+%k(Bdoller */
    t_doller cmp_doller;        /* $B;n83$GHf3S$9$kMQ(B */
    public_doller_init( 5 );
    /*$B>h;;(B*/
    /* dollerTimes$B4X?t$r2?EY8F$s$G$bFbItJQ?t$,JQ2=$7$J$$(B */
    for( counter = 0; counter < 1; counter ++){
        local_doller_init( &local_doller, 10 );
        cmp_doller = dollerTimes( 2 );
        assert( !memcmp( ( t_doller* ) &local_doller, 
                    ( t_doller* ) &cmp_doller, sizeof( t_doller )));
    }
}

void testDollerEquals( ){
    t_doller dst_doller;
    public_doller_init( 5 );
    local_doller_init( &dst_doller, 5 );
    assert( dollerEquals( public_doller, &dst_doller ) );
}

void testDollerFrancCompare(){
    t_doller src_doller;
    t_franc  dst_franc;
    local_doller_init( &src_doller, 5 );
    local_franc_init(  &dst_franc,  5 );
    assert( dollerEquals( src_doller, &dst_franc ));
    assert( francEquals(  dst_franc,  &src_doller ));
}

/* $BA4$F$N%F%9%H$r8F$V(B */
void testAll(){
    testDollerInit();
    testDollerMultiplication();
    testDollerEquals();
    testFrancInit();
    testFrancMultiplication();
    testFrancEquals();
    testDollerFrancCompare();
}

void main(){
    testAll();
}

