#ifndef ALLEGRO_SDL_HPP
#define ALLEGRO_SDL_HPP
#include "SDL2/SDL.h"

typedef SDL_QUIT ALLEGRO_EVENT_DISPLAY_CLOSE;
typedef SDL_Event ALLEGRO_EVENT;
typedef SDL_Window ALLEGRO_DISPLAY;

SDL_Window* al_create_display(SDL_Window *window, int width, int height);
void al_destroy_display(SDL_Window *window);
int al_wait_for_event(SDL_Event event);

void al_flip_display(SDL_Window *window);

#endif //ALLEGRO_SDL_HPP