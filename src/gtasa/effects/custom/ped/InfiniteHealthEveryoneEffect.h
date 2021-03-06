#pragma once

#include "util/EffectBase.h"
#include "util/CPedDamageResponseCalculator.h"

#include "CTaskSimpleCarSetPedOut.h"

class InfiniteHealthEveryoneEffect : public EffectBase
{
public:
	InfiniteHealthEveryoneEffect();

	void InitializeHooks() override;

	void HandleTick() override;

private:
	static void __fastcall HookedComputeWillKillPed(CPedDamageResponseCalculator* thisCalc, void* edx, CPed* ped, uint8_t* cDamageReponseInfo, char a4);

	static void __fastcall HookedKillPedsInVehicle(CVehicle* thisVehicle);
};
