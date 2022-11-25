#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, int x, int y)
{
 
	objectTexture = TextureManager::LoadTexture(textureSheet);

	xPos = x;
	yPos = y;
}

void GameObject::update()
{
	xPos++;
	yPos++;

	srcRect.w = 50;
	srcRect.h = 50;
	srcRect.x = 0;
	srcRect.y = 0;

	dstRect.x = xPos;
	dstRect.y = yPos;
	dstRect.w = srcRect.w;
	dstRect.h = srcRect.h;
}

void GameObject::render()
{
	SDL_RenderCopy(Game::renderer, objectTexture, NULL/*&srcRect*/ , &dstRect);
}