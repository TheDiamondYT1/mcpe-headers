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
	void setIsClientSide(bool);
	void setXBLBroadcast(bool);
	void setLANBroadcast(bool);
	void setCommandsEnabled(bool); // virtual?
	void setMultiplayerGame(bool);
	void setIsExporting(bool);
	void savePlayers();
	void saveGameData();
	void saveBiomeData();
	void saveLevelData();
	void handleStopAllSounds();
	void handleStopSoundEvent(std::string const&);
	void setFixedInventorySlotCount(int);
	void tick(); // virtual?
	void tickEntities();
	long getCurrentTick() const;
	int getSeed();
	void setTime(int);
	Difficulty* getDifficulty() const;
	bool isExporting() const;
	bool isClientSide() const;
	bool hasLANBroadcast() const;
	bool hasLevelStorage() const;
	bool hasXBLBroadcast() const;
	bool isMultiplayerGame() const;
	bool hasCommandsEnabled() const;
	std::string getLevelId() const;
	std::string getScreenshotsFolder() const;
	void setLevelId(std::string);
	int getUserCount() const;
	int getActivePlayerCount() const;
	LocalPlayer* getPrimaryLocalPlayer() const;
	Player& getPlayer(mce::UUID const&) const;
	Player& getPlayer(std::string const&) const;
	void suspendPlayer(Player&);
	bool isPlayerSuspended(Player&) const;
	Mob* getMob(EntityUniqueID) const;
	void _removeAllPlayers();
	void _syncTime(int);
};

