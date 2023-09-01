// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <SDL2/SDL.h>

// #define WINDOW_WIDTH 640
// #define WINDOW_HEIGHT 480

// int main() {
//     SDL_Window* window = NULL;
//     SDL_Renderer* renderer = NULL;

//     // Initialize SDL
//     if (SDL_Init(SDL_INIT_VIDEO) < 0) {
//         printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
//         return 1;
//     }

//     // Create the window
//     window = SDL_CreateWindow("Guess the Number", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
//                               WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
//     if (window == NULL) {
//         printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
//         return 1;
//     }

//     // Create the renderer
//     renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//     if (renderer == NULL) {
//         printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
//         return 1;
//     }

//     // Set the drawing color to black
//     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

//     // Generate a random number between 1 and 100
//     srand(time(NULL));
//     int targetNumber = rand() % 100 + 1;

//     // Main game loop
//     int quit = 0;
//     SDL_Event e;
//     while (!quit) {
//         while (SDL_PollEvent(&e) != 0) {
//             if (e.type == SDL_QUIT) {
//                 quit = 1;
//             }
//         }

//         // Clear the renderer
//         SDL_RenderClear(renderer);

//         // Draw the game instructions
//         SDL_Color textColor = {255, 255, 255, 255};
//         SDL_Surface* textSurface = NULL;
//         SDL_Texture* textTexture = NULL;
//         SDL_Rect textRect;
//         textRect.x = 10;
//         textRect.y = 10;
//         textRect.w = 0;
//         textRect.h = 0;
//         char instructions[] = "Guess a number between 1 and 100:";
//         textSurface = TTF_RenderText_Solid(font, instructions, textColor);
//         textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
//         SDL_QueryTexture(textTexture, NULL, NULL, &textRect.w, &textRect.h);
//         SDL_RenderCopy(renderer, textTexture, NULL, &textRect);
//         SDL_FreeSurface(textSurface);
//         SDL_DestroyTexture(textTexture);

//         // Update the renderer
//         SDL_RenderPresent(renderer);
//     }

//     // Cleanup and quit
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();
//     return 0;
// }