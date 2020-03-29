#pragma once

#include "Json2Settings.h"
#include "IgnoreList.h"

namespace J2S = Json2Settings;

class Settings
{
public:
	Settings() = delete;

	static bool	LoadSettings(bool a_dumpParse = false);

	static J2S::bSetting	disableForActors;
	static J2S::bSetting	disableForWeapons;
	static J2S::bSetting	ignoreFleshFXEffects;

private:
	static constexpr char* FILE_NAME = "Data\\SKSE\\Plugins\\GlowBeGoneSSE.json";
};
