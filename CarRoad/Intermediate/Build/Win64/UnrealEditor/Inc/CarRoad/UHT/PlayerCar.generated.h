// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARROAD_PlayerCar_generated_h
#error "PlayerCar.generated.h already included, missing '#pragma once' in PlayerCar.h"
#endif
#define CARROAD_PlayerCar_generated_h

#define FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCar(); \
	friend struct Z_Construct_UClass_APlayerCar_Statics; \
public: \
	DECLARE_CLASS(APlayerCar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarRoad"), NO_API) \
	DECLARE_SERIALIZER(APlayerCar)


#define FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCar(APlayerCar&&); \
	APlayerCar(const APlayerCar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCar) \
	NO_API virtual ~APlayerCar();


#define FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_9_PROLOG
#define FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_12_INCLASS_NO_PURE_DECLS \
	FID_CarRoad_Source_CarRoad_Public_PlayerCar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARROAD_API UClass* StaticClass<class APlayerCar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CarRoad_Source_CarRoad_Public_PlayerCar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
