#include "include/GV.h"

//渡された情報を構造体に入れる関数
void input_bullet_info(bullet_info_t *binfo, int size_x, int size_y, int col_num, double range) {
	binfo->size_x = size_x;  binfo->size_y = size_y;
	binfo->col_num = col_num; binfo->range = range;
}

//一番最初の初期化
void first_ini() {
	configpad.down = 0;
	configpad.left = 1;
	configpad.right = 2;
	configpad.up = 3;
	configpad.bom = 4;
	configpad.shot = 5;
	configpad.slow = 11;
	configpad.start = 13;
	configpad.change = 6;

	//例：弾0は76x76ピクセルで、5色あり、当たり範囲17ピクセル
	input_bullet_info(&bullet_info[0], 76, 76, 5, 17.0);
	input_bullet_info(&bullet_info[1], 22, 22, 6, 4.0);
	input_bullet_info(&bullet_info[2], 5, 120, 10, 2.5);
	input_bullet_info(&bullet_info[3], 19, 34, 5, 2.0);
	input_bullet_info(&bullet_info[4], 38, 38, 10, 2.0);
	input_bullet_info(&bullet_info[5], 14, 16, 3, 3.5);
	input_bullet_info(&bullet_info[6], 14, 18, 3, 2.0);
	input_bullet_info(&bullet_info[7], 16, 16, 9, 2.5);
	input_bullet_info(&bullet_info[8], 12, 18, 10, 1.5);
	input_bullet_info(&bullet_info[9], 13, 19, 3, 2.0);
}

//ゲームの初期化
void ini() {
	stage_count = 1;
	memset(&ch, 0, sizeof(ch_t));//自機データの初期化
	ch.x = FIELD_MAX_X / 2;
	ch.y = FIELD_MAX_Y * 3 / 4;
	memset(enemy, 0, sizeof(enemy_t)*ENEMY_MAX);//敵データの初期化
	memset(enemy_order, 0, sizeof(enemy_order_t)*ENEMY_ORDER_MAX);
	memset(shot, 0, sizeof(shot_t)*SHOT_MAX);
	memset(cshot, 0, sizeof(cshot_t)*CSHOT_MAX);
	ch.power = 500;
	memset(effect, 0, sizeof(effect_t)*EFFECT_MAX);
	memset(del_effect, 0, sizeof(del_effect_t)*DEL_EFFECT_MAX);
}

