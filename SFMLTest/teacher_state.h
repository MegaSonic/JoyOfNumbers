#pragma once

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <TGUI\TGUI.hpp>
#include "game_state.h"
class TeacherState :
	public GameState
{
private:

	sf::View view;

	void loadMenu();
	
	void on_ross_click();
	void on_submit_click();
	void on_register_select();
	void on_remove_select();
	void on_rename_select();

public:

	b2Vec2* gravity;
	b2World* world;

	float spawnTime;
	float spawnTimer;

	void CreateGround(b2World& World, float X, float Y);
	void CreateBox(b2World& World, int MouseX, int MouseY); // Spawns a box at MouseX, MouseY
	void SetupGui();

	virtual void draw(const float dt);
	virtual void update(const float dt);
	virtual void handleInput();

	TeacherState(Game* game);
	~TeacherState();

	tgui::Gui* gui;

};

