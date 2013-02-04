#include "franc.h"

/* $B6&MQ(Bfranc$B$r=i4|2=$9$k(B */
void public_franc_init( int init_num ){
    public_franc.amount = init_num;
}

/* local franc$B$r=i4|2=$9$k(B */
void local_franc_init( t_franc* franc, int init_num ){
    franc->amount = init_num;
}

/* $B6&MQ(Bfranc$B$N(Bamount$B$r;XDjG\$7$F0c$&9=B$BN$H$7$FJV$9(B */
/* $B6&MQ(Bfranc$B$N>uBV$OJQ2=$7$J$$(B */
t_franc francTimes( int times_num ){
    t_franc rtn_franc;
    rtn_franc.amount = public_franc.amount * times_num;
    return rtn_franc;
}

/* franc$B9=B$BN$,0lCW$9$k$+(B */
int francEquals( t_franc src_franc, void *dst_franc ) {
    t_franc *p_dst_franc = (t_franc *)dst_franc;
    if( src_franc.amount == p_dst_franc->amount ){
        return RTN_OK;
    }else{
        return RTN_NG;
    }
}
