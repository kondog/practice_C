#include "doller.h"

/* $B6&MQ(Bdoller$B$r=i4|2=$9$k(B */
void public_doller_init( int init_num ){
    public_doller.amount = init_num;
}

/* local doller$B$r=i4|2=$9$k(B */
void local_doller_init( t_doller* doller, int init_num ){
    doller->amount = init_num;
}

/* $B6&MQ(Bdoller$B$N(Bamount$B$r;XDjG\$7$F0c$&9=B$BN$H$7$FJV$9(B */
/* $B6&MQ(Bdoller$B$N>uBV$OJQ2=$7$J$$(B */
t_doller dollerTimes( int times_num ){
    t_doller rtn_doller;
    rtn_doller.amount = public_doller.amount * times_num;
    return rtn_doller;
}

