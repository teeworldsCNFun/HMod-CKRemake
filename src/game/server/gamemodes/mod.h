/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_GAMEMODES_MOD_H
#define GAME_SERVER_GAMEMODES_MOD_H
#include <game/server/gamecontroller.h>
#include <game/server/gameworld.h>
#include <game/server/classes.h>

// you can subclass GAMECONTROLLER_CTF, GAMECONTROLLER_TDM etc if you want
// todo a modification with their base as well.
class CGameControllerMOD : public IGameController
{
	char m_aPublicGametype[16];

public:
	CGameControllerMOD(class CGameContext *pGameServer);
	virtual void Tick();
	virtual void Snap(int SnappingClient);
	// add more virtual functions here if you wish
};
#endif
