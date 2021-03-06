#pragma once

#define MAX_SETTINGS_STRING	0x7F

struct stSettings
{
	// client
	char szNickName[MAX_PLAYER_NAME+1];
	char szPassword[MAX_SETTINGS_STRING+1];
	
	int iFrameLimit;
	
	// debug
	bool bDrawFPS;

	// gui
	char szFont[40];
	float fFontSize;
	int iFontOutline;

	float fChatPosX;
	float fChatPosY;
	float fChatSizeX;
	float fChatSizeY;
	int iChatMaxMessages;

	float fSpawnScreenPosX;
	float fSpawnScreenPosY;
	float fSpawnScreenSizeX;
	float fSpawnScreenSizeY;

	float fHealthBarWidth;
	float fHealthBarHeight;
};

class CSettings
{
public:
	CSettings();
	~CSettings();

	bool SaveNameAndServerPassword(const char *name);

	stSettings& Get() { return m_Settings; }

private:
	struct stSettings m_Settings;
};