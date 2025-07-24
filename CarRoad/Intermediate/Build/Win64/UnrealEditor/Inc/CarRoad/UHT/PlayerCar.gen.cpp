// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarRoad/Public/PlayerCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCar() {}

// Begin Cross Module References
CARROAD_API UClass* Z_Construct_UClass_APlayerCar();
CARROAD_API UClass* Z_Construct_UClass_APlayerCar_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CarRoad();
// End Cross Module References

// Begin Class APlayerCar
void APlayerCar::StaticRegisterNativesAPlayerCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCar);
UClass* Z_Construct_UClass_APlayerCar_NoRegister()
{
	return APlayerCar::StaticClass();
}
struct Z_Construct_UClass_APlayerCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCar.h" },
		{ "ModuleRelativePath", "Public/PlayerCar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CarRoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCar_Statics::ClassParams = {
	&APlayerCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCar_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCar()
{
	if (!Z_Registration_Info_UClass_APlayerCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCar.OuterSingleton, Z_Construct_UClass_APlayerCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCar.OuterSingleton;
}
template<> CARROAD_API UClass* StaticClass<APlayerCar>()
{
	return APlayerCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCar);
APlayerCar::~APlayerCar() {}
// End Class APlayerCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCar, APlayerCar::StaticClass, TEXT("APlayerCar"), &Z_Registration_Info_UClass_APlayerCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCar), 2025437989U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_3063759803(TEXT("/Script/CarRoad"),
	Z_CompiledInDeferFile_FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
