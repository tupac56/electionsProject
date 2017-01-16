#pragma once
#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>
//#include <SDL/SDL.h>
#include <SDL2/SDL_image.h>
#include "point.hh"
#include <SDL2/SDL_ttf.h>



class Window 
{
  private:
	std::size_t _height;	// height
	std::size_t _width;		// length
	std::size_t _x_case;	// subdivise window in smaller parts
	std::size_t _y_case;	// subdivise window in smaller parts like a matrix
	TTF_Font* _font;
	

  public:
	//SDL_Surface*_window;	// Window
	
	//The window we'll be rendering to
	SDL_Window* _window; //gWindow;
	
	//The surface contained by the window
	SDL_Surface* _windowSurface;

	//The window renderer for graphics
	SDL_Renderer* _renderer;

	Window(int h, int w, int x, int y);
	~Window();
	void draw_image(SDL_Texture*, Point pos);
	void updateScreen();
	void draw_text(std::string text, Point pos);
	//void draw_button(SDL_Texture*, Button );

	std::size_t get_height();
	std::size_t get_width();
	std::size_t get_x_case();
	std::size_t get_y_case();



};

