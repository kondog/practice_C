#include "common_def.h"

/**************/
/*変数宣言*****/
/**************/
typedef struct T_franc{
    int amount;
}t_franc;

t_franc public_franc;

/**************************/
/*関数プロトタイプ宣言*****/
/**************************/

/* 共用francを初期化する */
void public_franc_init( int init_num );

/* local francを初期化する */
void local_franc_init( t_franc* franc, int init_num );

/* 共用francのamountを指定倍して違う構造体として返す */
/* 共用francの状態は変化しない */
t_franc francTimes( int times_num );

/* franc構造体が一致するか */
int francEquals( t_franc src_franc, void *dst_franc );
