#pragma once

#include <string>
#include <memory>

class AABB;
class LocalPlayer;
class Player;
class Random;
class Mob;
class EntityDamageSource;
class EntityUniqueID;
class Difficulty;
class LightLayer;
class LevelChunk;
namespace mce { 
	class UUID; 
}

class Level  {
public:
	virtual ~Level();
	Random* getRandom() const;
	int getSeaLevel();
	void setXBLBroadcast(bool);
	void setLANBroadcast(bool);
	void setCommandsEnabled(bool);
	void setMultiplayerGame(bool);
	void handleStopAllSounds();
	void handleStopSoundEvent(std::string const&);
	void setFixedInventorySlotCount(int);
	void tick();
	int getSeed();
	void setTime(int);
	bool isExporting() const;
	bool isClientSide() const;
	bool hasLANBroadcast() const;
	bool hasLevelStorage() const;
	bool hasXBLBroadcast() const;
	bool isMultiplayerGame() const;
	bool hasCommandsEnabled() const;
	std::string getLevelId() const;
	void setLevelId(std::string);
	LocalPlayer* getPrimaryLocalPlayer() const;
	Player* getPlayer(mce::UUID const&) const;
	Player* getPlayer(std::string const&) const;
	Mob* getMob(EntityUniqueID) const;
	void savePlayers();
	void setIsExporting(bool);
	void _removeAllPlayers();
	void _syncTime(int);
};

