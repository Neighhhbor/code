#include "enemy.h"
#include"bullet.h"
#include"fly.h"
#include<QPixmap>
#include<config.h>
#include<bullet.h>

void move_enemy1(){
    d++;
    



    for(int i=shoot_temp;i<MAX_SHOOT;++i){
            e_b[i]->x=x;e_b[i]->y=y;
        }
    if(xleft()<-Width||xright()>GM_WIDTH+Width||yup()<-Height||ydown()>GM_HEIGHT+Height){
        Health=0;
    }
}




void shoot(){
    ++nowCD;
    if(nowCD<CD){
        return;
    }
    nowCD=0;

    if(shoot_temp<MAX_SHOOT-1){
        e_b[shoot_temp].xspeed=((shoot_temp%3)-1)*3;//shoot模式 周期化改变子弹xspeed达到多方向shoot效果
        e_b[shoot_temp++]->Health=(1<<22);
    }
}


void shoot(){
    ++nowCD;
    if(nowCD<CD){
        return;
    }
    nowCD=0;

    if(shoot_temp<MAX_SHOOT-1){
        e_b[shoot_temp].xspeed=((shoot_temp%3)-1)*3;//shoot模式 周期化改变子弹xspeed达到多方向shoot效果
        e_b[shoot_temp++]->Health=(1<<22);
    }
}

