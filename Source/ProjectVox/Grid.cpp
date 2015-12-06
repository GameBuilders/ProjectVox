// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectVox.h"
#include "Grid.h"

Grid::Grid(Pos size): size(size) {
	characters.SetNumZeroed(size.x * size.y);
	blocked.SetNumZeroed(size.x * size.y);
}

bool Grid::isInBounds(Pos pos) const {
	return pos.x >= 0 && pos.y >= 0 && pos.x < size.x && pos.y < size.y;
}

AVoxCharacter* Grid::characterAt(Pos pos) const {
	if (!isInBounds(pos)) return nullptr;
	return characters[pos.x + pos.y * size.x];
}
void Grid::putCharacter(Pos pos, AVoxCharacter& character) {
	if (isInBounds(character.pos)) {
		characters[character.pos.x + character.pos.y * size.x] = nullptr;
	}
	character.pos = pos;
	characters[pos.x + pos.y * size.x] = &character;
}

bool Grid::isBlockedAt(Pos pos) const {
	if (!isInBounds(pos)) return true;
	return blocked[pos.x + pos.y * size.x];
}
void Grid::setBlockedAt(Pos pos, bool isBlocked) {
	blocked[pos.x + pos.y * size.x] = isBlocked;
}
