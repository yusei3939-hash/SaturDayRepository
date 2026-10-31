#include"DxLib.h"
#include"Config.h"
#include"Map.h"

int WINAPI WinMain(HINSTANCE hIstance, HINSTANCE hPrevInstance, LPSTR, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (Dxlib_Init() == -1)return-1;
	SetDrawScreen(DX_SCREEN_BACK);
	//マップを管理するオブジェクト
	Map map;

	//マップが読み込みできなければ
	if (!map, Init())
	{
		
	}
}