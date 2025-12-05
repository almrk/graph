#pragma once

#include "Graph.hpp"
#include <SDL3/SDL.h>

class Renderer {
private:
	SDL_Window* mWindow;
	SDL_Renderer* mRenderer;

public:
	Renderer();
	~Renderer();

private:
	void drawNode();
	void drawEdge();
};