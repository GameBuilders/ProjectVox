// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VoxCharacter.h"

class PROJECTVOX_API Grid {
public:
	Grid(Pos size);
	
	bool isInBounds(Pos pos) const;
	
	AVoxCharacter* characterAt(Pos pos) const;
	void putCharacter(Pos pos, AVoxCharacter& character);
	
	bool isBlockedAt(Pos pos) const;
	void setBlockedAt(Pos pos, bool isBlocked);
	
private:
	Pos size;
	TArray<AVoxCharacter*> characters;
	TArray<bool> blocked;
};
