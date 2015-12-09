#pragma once

GLOBAL void first_ini();

GLOBAL void calc_ch();

//graph.cpp
//描画メイン
GLOBAL void graph_main();

//key.cpp
//現在のキー入力処理を行う
GLOBAL int GetHitKeyStateAll_2();
//受け取ったキー番号の現在の入力状態を返す
GLOBAL int CheckStateKey(unsigned char Handle);

//laod.cpp
//データのロード
GLOBAL void load();

GLOBAL void GetHitPadStateAll();
GLOBAL int CheckStatePad(unsigned int Handle);

GLOBAL void ch_move();

GLOBAL void enemy_main();
GLOBAL void ini();

GLOBAL void load_story();

//shot.cpp
GLOBAL double shotatan2(int n);
GLOBAL int shot_search(int n);
GLOBAL void shot_main();
//music.cpp
GLOBAL void music_ini();
GLOBAL void music_play();

GLOBAL double rang(double);

GLOBAL void cshot_main();

//out.cpp
GLOBAL void out_main();

//effect.cpp
GLOBAL void effect_main();