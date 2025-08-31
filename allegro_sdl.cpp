#include "allegro_sdl.h"


SDL_Window* al_create_display(int width, int height) {
    SDL_Window *window = SDL_CreateWindow(
        "Allegro SDL",
        0,0,
        width, height,
        SDL_WINDOW_MAXIMIZED);
    return window;
}

void al_destroy_display(SDL_Window *window) {
    SDL_DestroyWindow(window);
}
int al_wait_for_event(SDL_Event event) {
    int pending = SDL_PollEvent(&event);
    return pending;
}

void al_flip_display(SDL_Window *window) {
    SDL_UpdateWindowSurface(window);
}