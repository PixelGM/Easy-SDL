#include "SDL/SDL.h"
#include <iostream>
#include<windows.h>
using namespace std;

int main(int argc, char* args[])
{
	// Initialize
	SDL_Window* window = nullptr;
	SDL_Surface* surface = nullptr;

	// Create Window and Surface
	SDL_Init(SDL_INIT_VIDEO); // Start
	window = SDL_CreateWindow("Hi!", 100, 100, 800, 600, 0); // Create Window
	surface = SDL_GetWindowSurface(window); // Assign Window to Surface

	// Paint and Update Surface
	SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 255, 0, 0)); // Color Surface to Red
	SDL_UpdateWindowSurface(window); // IMPORTANT! Need to update every update
	SDL_Delay(1000000);

	// Free Memory
	SDL_FreeSurface(surface);
	surface = nullptr;
	SDL_DestroyWindow(window);
	window = nullptr;
	SDL_Quit();

	return 0; // End
}