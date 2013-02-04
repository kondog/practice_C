#include "common_def.h"

/**************/
/*$BJQ?t@k8@(B*****/
/**************/
typedef struct T_franc{
    int amount;
}t_franc;

t_franc public_franc;

/**************************/
/*$B4X?t%W%m%H%?%$%W@k8@(B*****/
/**************************/

/* $B6&MQ(Bfranc$B$r=i4|2=$9$k(B */
void public_franc_init( int init_num );

/* local franc$B$r=i4|2=$9$k(B */
void local_franc_init( t_franc* franc, int init_num );

/* $B6&MQ(Bfranc$B$N(Bamount$B$r;XDjG\$7$F0c$&9=B$BN$H$7$FJV$9(B */
/* $B6&MQ(Bfranc$B$N>uBV$OJQ2=$7$J$$(B */
t_franc francTimes( int times_num );

/* franc$B9=B$BN$,0lCW$9$k$+(B */
int francEquals( t_franc src_franc, void *dst_franc );
