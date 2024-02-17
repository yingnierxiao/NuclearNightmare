#include "ItemActor.h"
#include "Net/UnrealNetwork.h"
#include "NuclearNightmareCharacter.h"

// Sets default values
AItemActor::AItemActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
	PickedUp = false;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	Mesh->SetIsReplicated(true);
}

void AItemActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AItemActor, PickedUp);
	DOREPLIFETIME(AItemActor, Mesh);
}

// Called when the game starts or when spawned
void AItemActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemActor::Equip(ANuclearNightmareCharacter* Character)
{
	OnEquip(Character);
}

void AItemActor::UnEquip(ANuclearNightmareCharacter* Character)
{
	OnUnEquip(Character);
}

void AItemActor::OnPickedUp_Implementation()
{
	Mesh->DestroyComponent();
	PickedUp = true;
	PickUpEvent();
}

void AItemActor::PickUpEvent()
{
}

void AItemActor::OnPickedUpServer_Implementation()
{
	OnPickedUp();
}

