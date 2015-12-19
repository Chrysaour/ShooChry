#pragma once
#include "../../DxLib_VC/Files/DxLib.h"
#include "define.h"
#include "math.h"

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"           //関数宣言

GLOBAL int img_board[40];
//画像用変数宣言部
GLOBAL int img_ch[2][12];       //キャラクタ画像9枚分　X2(変身用)
GLOBAL int func_state;
								//構造体変数宣言部
GLOBAL ch_t ch;                 //キャラクタデータ宣言

GLOBAL configpad_t configpad;

GLOBAL int stage_count;
GLOBAL int img_enemy[3][9];//敵画像9枚分　X3体分
GLOBAL enemy_t enemy[ENEMY_MAX];

GLOBAL enemy_order_t enemy_order[ENEMY_ORDER_MAX];//敵の出現情報

GLOBAL int img_bullet[10][10]; //弾の画像

							   //音楽ファイル用変数部
GLOBAL int sound_se[SE_MAX];

GLOBAL int se_flag[SE_MAX];    //サウンドフラグ

GLOBAL shot_t shot[SHOT_MAX];//ショット情報

GLOBAL int img_cshot[2];        //自機ショット用画像
GLOBAL cshot_t cshot[CSHOT_MAX];//自機ショット登録用変数

GLOBAL int img_del_effect[5];

GLOBAL del_effect_t del_effect[DEL_EFFECT_MAX];//消滅エフェクト
GLOBAL effect_t effect[EFFECT_MAX];//エフェクト

GLOBAL int img_back[10];//背景用画像
GLOBAL int count;
