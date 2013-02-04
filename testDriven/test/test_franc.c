#include <assert.h>
#include "franc.h"

/* $B%F%9%H!'=i4|2=(B */
void testFrancInit(){
    t_franc local_franc; /* local_francInit$BMQ(B */
    /*$BJQ?t$N=i4|2=(B*/
    public_franc_init( 5 );
    assert( 5 == public_franc.amount );
    local_franc_init( &local_franc, 5 );
    assert( 5 == local_franc.amount );
}

/* $B%F%9%H!'(BFranc$B>h;;(B */
void testFrancMultiplication(){
    int counter = 0;
    t_franc local_franc;      /* $B%m!<%+%k(Bfranc */
    t_franc cmp_franc;        /* $B;n83$GHf3S$9$kMQ(B */
    public_franc_init( 5 );
    /*$B>h;;(B*/
    /* francTimes$B4X?t$r2?EY8F$s$G$bFbItJQ?t$,JQ2=$7$J$$(B */
    for( counter = 0; counter < 1; counter ++){
        local_franc_init( &local_franc, 10 );
        cmp_franc = francTimes( 2 );
        assert( !memcmp( ( t_franc* ) &local_franc, 
                    ( t_franc* ) &cmp_franc, sizeof( t_franc )));
    }
}

void testFrancEquals(){
    t_franc dst_franc;
    public_franc_init( 5 );
    local_franc_init( &dst_franc, 5 );
    assert( francEquals( public_franc, &dst_franc ) );
}

