#include "common_def.h"

/**************/
/*$BJQ?t@k8@(B*****/
/**************/
typedef struct T_doller{
    int amount;
}t_doller;

t_doller public_doller;

/**************************/
/*$B4X?t%W%m%H%?%$%W@k8@(B*****/
/**************************/

/* $B6&MQ(Bdoller$B$r=i4|2=$9$k(B */
void public_doller_init( int init_num );

/* local doller$B$r=i4|2=$9$k(B */
void local_doller_init( t_doller* doller, int init_num );

/* $B6&MQ(Bdoller$B$N(Bamount$B$r;XDjG\$7$F0c$&9=B$BN$H$7$FJV$9(B */
/* $B6&MQ(Bdoller$B$N>uBV$OJQ2=$7$J$$(B */
t_doller dollerTimes( int times_num );

/* doller$B9=B$BN$,0lCW$9$k$+Hf3S$9$k(B */
int dollerEquals( t_doller src_doller, void *dst_doller );
