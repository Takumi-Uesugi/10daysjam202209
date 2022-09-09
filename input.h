#pragma once
#include "DxLib.h"

enum KeyInputType
{
	KEYS_TOUCH,
	KEYS_PUSH,
	KEYS_HOLD,
	KEYS_RELS,
};

class Input
{
public:
	Input();
	~Input();
	void Update();
	int GetKeyState(int keyCode, int inputType);

private:
	// 最新のキーボード情報用
	char keys[256] = { 0 };
	

	// 1ループ(フレーム)前のキーボード情報
	char oldkeys[256] = { 0 };

	int mouseX, mouseY;

};
