#include <assert.h>
#include "doller.h"
#include "franc.h"

/* テスト：初期化 */
void testDollerInit(){
    t_doller local_doller; /* local_dollerInit用 */
    /*変数の初期化*/
    public_doller_init( 5 );
    assert( 5 == public_doller.amount );
    local_doller_init( &local_doller, 5 );
    assert( 5 == local_doller.amount );
}

/* テスト：Doller乗算 */
void testDollerMultiplication(){
    int counter = 0;
    t_doller local_doller;      /* ローカルdoller */
    t_doller cmp_doller;        /* 試験で比較する用 */
    public_doller_init( 5 );
    /*乗算*/
    /* dollerTimes関数を何度呼んでも内部変数が変化しない */
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

/* 全てのテストを呼ぶ */
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

