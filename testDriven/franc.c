#include "franc.h"

/* 共用francを初期化する */
void public_franc_init( int init_num ){
    public_franc.amount = init_num;
}

/* local francを初期化する */
void local_franc_init( t_franc* franc, int init_num ){
    franc->amount = init_num;
}

/* 共用francのamountを指定倍して違う構造体として返す */
/* 共用francの状態は変化しない */
t_franc francTimes( int times_num ){
    t_franc rtn_franc;
    rtn_franc.amount = public_franc.amount * times_num;
    return rtn_franc;
}

/* franc構造体が一致するか */
int francEquals( t_franc src_franc, void *dst_franc ) {
    t_franc *p_dst_franc = (t_franc *)dst_franc;
    if( src_franc.amount == p_dst_franc->amount ){
        return RTN_OK;
    }else{
        return RTN_NG;
    }
}
