// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VoxComponent.h"
#include "VoxCharacterStats.generated.h"

/**
 * Component containing the stats of a VoxCharacter
 */
UCLASS()
class PROJECTVOX_API UVoxCharacterStats : public UVoxComponent
{
	GENERATED_BODY()
	
public:
	UVoxCharacterStats();
	// Stat fields of characters
	int maxHealth;		// Cap on health
	int maxEnergy;		// Cap on AP
	// Core stats
	int strength;		// Amound of damage a character does with physical attacks
	int dexterity;		// Ranged and sneak stat, bows, small weapons damage. Determines sneak crit multiplier
	int intelligence;	// Mage stat, spells. Determines magic damage and energy discount factor
	int constitution;	// Determines max health

	// Consumable stat amounts
	int health;			// Amound of damage a character can take
	int energy;			// (AP) Amount of stuff a character can do 
	
	
	
};
