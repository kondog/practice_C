#include "doller.h"

/* 共用dollerを初期化する */
void public_doller_init( int init_num ){
    public_doller.amount = init_num;
}

/* local dollerを初期化する */
void local_doller_init( t_doller* doller, int init_num ){
    doller->amount = init_num;
}

/* 共用dollerのamountを指定倍して違う構造体として返す */
/* 共用dollerの状態は変化しない */
t_doller dollerTimes( int times_num ){
    t_doller rtn_doller;
    rtn_doller.amount = public_doller.amount * times_num;
    return rtn_doller;
}

/* doller構造体が一致するか比較する */
int dollerEquals( t_doller src_doller, void *dst_doller ) {
    t_doller *p_dst_doller = (t_doller *)dst_doller;
    if( src_doller.amount == p_dst_doller->amount ){
        return RTN_OK;
    }else{
        return RTN_NG;
    }
}

