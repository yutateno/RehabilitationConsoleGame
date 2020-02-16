#include "Menu.hpp"
#include "Game.hpp"



int main()
{
	Menu m_menu = Menu();

	if (m_menu.Update() == 0)
	{
		return 0;
	}

	Game m_game = Game();
	
	m_game.Update();



	// 空白
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}
	SleepBar();
	SleepCout("cinで 止めてるから 適当な文字を 入力して Enterを 押してね そうしたらゲーム終了だ！");
	std::string temp = "";
	std::cin >> temp;

	return 0;
}