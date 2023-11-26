// Copyright Ludens Studio


#include "Character/AuraCharacterBase.h"

#include "AbilitySystem/AuraAbilitySystemComponent.h"

AAuraCharacterBase::AAuraCharacterBase()
{

	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void AAuraCharacterBase::InitAbilityActorInfo()
{
}

void AAuraCharacterBase::AddCharacterAbilities() const
{
	UAuraAbilitySystemComponent* AuraASC = CastChecked<UAuraAbilitySystemComponent>(GetAbilitySystemComponent());
	
	if (!HasAuthority()) return;

	AuraASC->AddCharacterAbilities(StartupAbilities);
}

