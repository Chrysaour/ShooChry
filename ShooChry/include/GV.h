#pragma once
#include "DxLib.h"
#include "define.h"
#include "math.h"

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"           //�֐��錾

GLOBAL int img_board[40];
//�摜�p�ϐ��錾��
GLOBAL int img_ch[2][12];       //�L�����N�^�摜9�����@X2(�ϐg�p)
GLOBAL int func_state;
								//�\���̕ϐ��錾��
GLOBAL ch_t ch;                 //�L�����N�^�f�[�^�錾

GLOBAL configpad_t configpad;

GLOBAL int stage_count;
GLOBAL int img_enemy[3][9];//�G�摜9�����@X3�̕�
GLOBAL enemy_t enemy[ENEMY_MAX];

GLOBAL enemy_order_t enemy_order[ENEMY_ORDER_MAX];//�G�̏o�����

GLOBAL int img_bullet[10][10]; //�e�̉摜

							   //���y�t�@�C���p�ϐ���
GLOBAL int sound_se[SE_MAX];

GLOBAL int se_flag[SE_MAX];    //�T�E���h�t���O

GLOBAL shot_t shot[SHOT_MAX];//�V���b�g���

GLOBAL int img_cshot[2];        //���@�V���b�g�p�摜
GLOBAL cshot_t cshot[CSHOT_MAX];//���@�V���b�g�o�^�p�ϐ�

GLOBAL int img_del_effect[5];

GLOBAL del_effect_t del_effect[DEL_EFFECT_MAX];//���ŃG�t�F�N�g
GLOBAL effect_t effect[EFFECT_MAX];//�G�t�F�N�g

GLOBAL int img_back[10];//�w�i�p�摜
GLOBAL int count;