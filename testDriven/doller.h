#include "common_def.h"

/**************/
/*変数宣言*****/
/**************/
typedef struct T_doller{
    int amount;
}t_doller;

t_doller public_doller;

/**************************/
/*関数プロトタイプ宣言*****/
/**************************/

/* 共用dollerを初期化する */
void public_doller_init( int init_num );

/* local dollerを初期化する */
void local_doller_init( t_doller* doller, int init_num );

/* 共用dollerのamountを指定倍して違う構造体として返す */
/* 共用dollerの状態は変化しない */
t_doller dollerTimes( int times_num );

/* doller構造体が一致するか比較する */
int dollerEquals( t_doller src_doller, void *dst_doller );
