// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectVox.h"
#include "VoxCharacter.h"


// Sets default values
AVoxCharacter::AVoxCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	pos.x = -1;

}

// Called when the game starts or when spawned
void AVoxCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVoxCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AVoxCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

