﻿#pragma once
#include "../../DxLib_VC/Files/DxLib.h" //Specifying the actual location of header file
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
GLOBAL int img_chetc[10];	//キャラクタに関する他の画像
GLOBAL int func_state;
GLOBAL int img_etc[50];//その他の画像
GLOBAL ch_t ch;                 //キャラクタデータ宣言

GLOBAL configpad_t configpad;

GLOBAL int stage_count;
GLOBAL int img_enemy[3][9];//敵画像9枚分　X3体分
GLOBAL enemy_t enemy[ENEMY_MAX];

GLOBAL enemy_order_t enemy_order[ENEMY_ORDER_MAX];//敵の出現情報

GLOBAL int img_bullet[20][10]; //弾用画像

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

GLOBAL bullet_info_t bullet_info[10];//弾情報

GLOBAL int img_eff_bom[5];      //ボムのエフェクト画像
GLOBAL bom_t bom;               //ボム
GLOBAL bright_set_t bright_set; //描画の輝度
GLOBAL dn_t dn;                 //ドンと揺れる

GLOBAL int img_dot_riria[8];//リリアのドット絵画像
GLOBAL boss_shot_t boss_shot;//ボスショット情報
GLOBAL boss_t boss;          //ボス情報