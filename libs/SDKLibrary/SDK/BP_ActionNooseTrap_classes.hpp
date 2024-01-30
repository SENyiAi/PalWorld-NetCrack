#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x131 (0x269 - 0x138)
// BlueprintGeneratedClass BP_ActionNooseTrap.BP_ActionNooseTrap_C
class UBP_ActionNooseTrap_C : public UPalActionBase
{
public:
	uint8                                        Pad_2B7C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               CurrentRopePos;                                    // 0x148(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RopeFixPos;                                        // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CurrentRopeRotate;                                 // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       RopeLength;                                        // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentSwingAngle;                                 // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_MaxSwingAngle;                               // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUpMode;                                          // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurrentSwingDirection;                             // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentAngleVelocity_Rad;                          // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentMechanicalEnergy;                           // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_Mass;                                        // 0x1E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_Gravity;                                     // 0x1E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentAngle_Rad;                                  // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_StartMechanicalEnergy;                       // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_DeltaTime;                                    // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_InitSpeed;                                   // 0x208(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentAngleSpeed;                                 // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_Drag;                                        // 0x218(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetSwingDirection;                              // 0x220(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreRopePos;                                        // 0x238(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FacialTimerHandle;                                 // 0x250(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead;                                            // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Const_DefaultRopeLength;                           // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTeleportFlag;                                    // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionNooseTrap_C* GetDefaultObj();

	void OnDead(const struct FPalDeadInfo& DeadInfo, class UAnimMontage* CallFunc_FindMontage_Montage, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue);
	void ReturnDefaultFacial();
	void ChangeFacial(enum class EPalFacialEyeType Facial, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetWorldVelocity_ByDeadEnd(struct FVector* Velocity, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue);
	void CalcDamageToSpeed(int32 Damage, double* Speed, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FFixedPoint64& CallFunc_Convert_IntToFixedPoint64_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void FindMontage(class UAnimMontage** Montage, enum class EPalActionType Temp_byte_Variable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnFinishAcion(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UAnimMontage* CallFunc_FindMontage_Montage, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void OnStatusAdd(class UPalStatusComponent* StatusComponent, enum class EPalStatusID StatusId, class UPalStatusBase* Status, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void LerpSwingDirection(double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_VLerp_Alpha_ImplicitCast);
	void CalcAngularAcceleration_Swing(double* AngleAccel, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Sin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void UpdateAngle_Swing(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void CalcAngleVelocity(double Sin, double Temp_En, double CallFunc_CalcAngularAcceleration_Swing_AngleAccel, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void OnDamage(const struct FPalDamageResult& Info, const struct FVector& NextVelocity, const struct FVector& DamageVelocity, const struct FVector& CurrentVelocity, const struct FVector& DamageDirection, double CallFunc_CalcDamageToSpeed_Speed, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	void UpdateRopePos_Swing(const struct FVector& CenterPos, class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_RadiansToDegrees_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Cos_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Sin_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void FixCharacterToRopePos(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void UpdateRopePosToUp(class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_RLerp_Alpha_ImplicitCast, float CallFunc_VLerp_Alpha_ImplicitCast);
	void OnEndAction();
	void TickAction(float DeltaTime);
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionNooseTrap(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class FName CallFunc_GetPhysicsRootBoneName_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalStatusComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_FindMontage_Montage, float CallFunc_PlayAnimMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, double CallFunc_Subtract_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_8, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_10, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsDead_ReturnValue, int32 CallFunc_GetGeneralPurposeIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double K2Node_VariableSet_temp_DeltaTime_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}

