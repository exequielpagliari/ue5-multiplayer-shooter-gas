// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProtocolRiftArenaGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProtocolRiftArenaGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROTOCOLRIFTARENA_API UClass* Z_Construct_UClass_AProtocolRiftArenaGameMode();
PROTOCOLRIFTARENA_API UClass* Z_Construct_UClass_AProtocolRiftArenaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProtocolRiftArena();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProtocolRiftArenaGameMode ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProtocolRiftArenaGameMode;
UClass* AProtocolRiftArenaGameMode::GetPrivateStaticClass()
{
	using TClass = AProtocolRiftArenaGameMode;
	if (!Z_Registration_Info_UClass_AProtocolRiftArenaGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProtocolRiftArenaGameMode"),
			Z_Registration_Info_UClass_AProtocolRiftArenaGameMode.InnerSingleton,
			StaticRegisterNativesAProtocolRiftArenaGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AProtocolRiftArenaGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProtocolRiftArenaGameMode_NoRegister()
{
	return AProtocolRiftArenaGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProtocolRiftArenaGameMode.h" },
		{ "ModuleRelativePath", "ProtocolRiftArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AProtocolRiftArenaGameMode constinit property declarations ***************
// ********** End Class AProtocolRiftArenaGameMode constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProtocolRiftArenaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics
UObject* (*const Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProtocolRiftArena,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics::ClassParams = {
	&AProtocolRiftArenaGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics::Class_MetaDataParams)
};
void AProtocolRiftArenaGameMode::StaticRegisterNativesAProtocolRiftArenaGameMode()
{
}
UClass* Z_Construct_UClass_AProtocolRiftArenaGameMode()
{
	if (!Z_Registration_Info_UClass_AProtocolRiftArenaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProtocolRiftArenaGameMode.OuterSingleton, Z_Construct_UClass_AProtocolRiftArenaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProtocolRiftArenaGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProtocolRiftArenaGameMode);
AProtocolRiftArenaGameMode::~AProtocolRiftArenaGameMode() {}
// ********** End Class AProtocolRiftArenaGameMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Videogames_ue5_multiplayer_shooter_gas_ProtocolRiftArena_Source_ProtocolRiftArena_ProtocolRiftArenaGameMode_h__Script_ProtocolRiftArena_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProtocolRiftArenaGameMode, AProtocolRiftArenaGameMode::StaticClass, TEXT("AProtocolRiftArenaGameMode"), &Z_Registration_Info_UClass_AProtocolRiftArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProtocolRiftArenaGameMode), 588468152U) },
	};
}; // Z_CompiledInDeferFile_FID_Videogames_ue5_multiplayer_shooter_gas_ProtocolRiftArena_Source_ProtocolRiftArena_ProtocolRiftArenaGameMode_h__Script_ProtocolRiftArena_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Videogames_ue5_multiplayer_shooter_gas_ProtocolRiftArena_Source_ProtocolRiftArena_ProtocolRiftArenaGameMode_h__Script_ProtocolRiftArena_730229818{
	TEXT("/Script/ProtocolRiftArena"),
	Z_CompiledInDeferFile_FID_Videogames_ue5_multiplayer_shooter_gas_ProtocolRiftArena_Source_ProtocolRiftArena_ProtocolRiftArenaGameMode_h__Script_ProtocolRiftArena_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Videogames_ue5_multiplayer_shooter_gas_ProtocolRiftArena_Source_ProtocolRiftArena_ProtocolRiftArenaGameMode_h__Script_ProtocolRiftArena_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
