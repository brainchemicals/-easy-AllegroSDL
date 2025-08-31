#include <iostream>
#include <vector>
#include "allegro_sdl.hpp"

int main(int argc, char **argv) {
    
    al_init();
    ALLEGRO_EVENT event;
    //ALLEGRO_EVENT_QUEUE *queue = al_create_event_queue();
    
    //al_set_new_display_flags(ALLEGRO_OPENGL);
    ALLEGRO_DISPLAY *display = al_create_display(600,400);
    //al_register_event_source(queue, al_get_display_event_source(display));
    //al_init_primitives_addon();
    
    bool redraw = true;
    bool running = true;
    
    while(running) {
        while(al_wait_for_event(&event)) {
        
            switch(event.type) {
                case ALLEGRO_EVENT_DISPLAY_CLOSE: {
                  running = false;
                    break;
                }
            /*
            case ALLEGRO_EVENT_DISPLAY_HALT_DRAWING: {
                redraw = false;
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_RESUME_DRAWING: {
                redraw = true;
                break;
            }
            */
            }
        }
        // end events
        al_flip_display(display);
    }
    // end of game
    
    //al_destory_event_queue(queue);
    al_destroy_display(display);
    return 0;
}