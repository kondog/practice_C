#include <assert.h>
#include "doller.h"

/* テスト：初期化 */
void testDollerInit(){
    t_doller local_doller; /* local_dollerInit用 */
    /*変数の初期化*/
    public_doller_init( 5 );
    assert( 5 == public_doller.amount );
    local_doller_init( &local_doller, 5 );
    assert( 5 == local_doller.amount );
}

/* テスト：乗算 */
void testDollerMultiplication(){
    int counter = 0;
    t_doller local_doller;      /* ローカルdoller */
    t_doller cmp_doller;        /* 試験で比較する用 */
    public_doller_init( 5 );
    /*乗算*/
    for( counter = 0; counter < 1; counter ++){
        local_doller_init( &local_doller, 10 );
        cmp_doller = dollerTimes( 2 );
        assert( !memcmp( ( t_doller* ) &local_doller, 
                    ( t_doller* ) &cmp_doller, sizeof( t_doller )));
    }
}

/* 全てのテストを呼ぶ */
void testAll(){
    testDollerInit();
    testDollerMultiplication();
}

void main(){
    testAll();
}
