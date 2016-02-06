// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VoxComponent.h"
#include "VoxCharacterStats.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTVOX_API UVoxCharacterStats : public UVoxComponent
{
	GENERATED_BODY()
	
public:
	UVoxCharacterStats();
	// Stat fields of characters
	int maxHealth;
	int strength; // Soldier stat, close range, hand to hand
	int dexterity; // Ranged and sneak stat, bows, small weapons
	int magic; // Mage stat, spells
	
	
	
};
