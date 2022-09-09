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
	// �ŐV�̃L�[�{�[�h���p
	char keys[256] = { 0 };
	

	// 1���[�v(�t���[��)�O�̃L�[�{�[�h���
	char oldkeys[256] = { 0 };

	int mouseX, mouseY;

};
