

#include <cstdio>
#include <iostream>

#include <SDL.h>
using namespace std;

int main(int argc, char* args[])
{
	if(SDL_Init(SDL_INIT_EVERYTHING)!=0)
	{
		cerr << "## blad SDL_Init";
		return 1;
	}
	int wndWidth=800;
	int wndHeight=600;

	bool running=true;

	SDL_Window *wnd =SDL_CreateWindow("OKNO",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,wndWidth,wndHeight,0);
	SDL_Renderer *rnd=SDL_CreateRenderer(wnd,-1,SDL_RENDERER_ACCELERATED);
	SDL_RenderClear(rnd);
	SDL_SetRenderDrawColor(rnd,100,100,100,255);
	
	
	SDL_Rect rect1={wndWidth/2,wndHeight/2,80,80};
	SDL_RenderFillRect(rnd,&rect1);
	SDL_RenderPresent(rnd);
	SDL_Delay(10000);
	
	SDL_Quit();
	return 0;
}