#include <assert.h>
#include "franc.h"

/* テスト：初期化 */
void testFrancInit(){
    t_franc local_franc; /* local_francInit用 */
    /*変数の初期化*/
    public_franc_init( 5 );
    assert( 5 == public_franc.amount );
    local_franc_init( &local_franc, 5 );
    assert( 5 == local_franc.amount );
}

/* テスト：Franc乗算 */
void testFrancMultiplication(){
    int counter = 0;
    t_franc local_franc;      /* ローカルfranc */
    t_franc cmp_franc;        /* 試験で比較する用 */
    public_franc_init( 5 );
    /*乗算*/
    /* francTimes関数を何度呼んでも内部変数が変化しない */
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

