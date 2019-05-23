#ifndef MEMORY_H
#define MEMORY_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080
#define BUTTON_WIDTH 374
#define BUTTON_HEIGHT 69
#define FLOWER_WIDTH 240
#define FLOWER_HEIGHT 135
#define CAT_WIDTH 192
#define CAT_HEIGHT 108
#define LETTER_WIDTH 320
#define LETTER_HEIGHT 180
#define FPS 25
#define DELAY_TIME 1000.0f/FPS

int graphicInterfaceMemory();
int SDLnIMGnTTF_Initialize();
bool isInRegion(int x, int y, int xInf, int xSup, int yInf, int ySup);
bool isTwoSelect(int nbLin, int nbCol, bool tab[nbLin][nbCol], bool judge[nbLin][nbCol], int matrix[nbLin][nbCol]);
bool hasWon(int nbLin, int nbCol, bool judge[nbLin][nbCol]);
SDL_Texture * loadTexture(const char * file, SDL_Renderer * renderer);
SDL_Texture * renderText(const char * text, const char * fontName, SDL_Color color, int fontSize, SDL_Renderer * renderer);
void renderTextureClip(SDL_Texture * texture, SDL_Renderer * renderer, SDL_Rect dest, SDL_Rect * clip);
void renderTexture(SDL_Texture * texture, SDL_Renderer * renderer, int x, int y, SDL_Rect * clip);
void cleanUp(SDL_Window * window, SDL_Renderer * renderer);
void shuffle(int nbLin, int nbCol, int matrix[nbLin][nbCol]);
#endif