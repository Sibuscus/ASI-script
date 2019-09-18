// Copyright (c) 2019 Lordmau5
#pragma once

#include "effects/abstract/TimedEffect.h"

class Framerate : public TimedEffect
{
private:
	int oldFramerate = 25;
	int framerate = 25;

	static byte oldFrameTimeWait;

public:
	Framerate(int _framerate, int _duration, const std::string& _description);

	void Enable() override;
	void Disable() override;

	void HandleTick() override;
};
