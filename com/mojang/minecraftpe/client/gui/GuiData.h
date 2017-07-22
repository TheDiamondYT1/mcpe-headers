#pragma once

#include "../AppPlatformListener.h"

class MinecraftClient;
class Config;
class ClientInstance;

class GuiData : public AppPlatformListener {
public:
	virtual ~GuiData();
	virtual void onConfigChanged(Config const&);
	virtual void onAppSuspended();
	
	GuiData(ClientInstance&);
	void clearMessages();
	void setGuiScale(float);
	void clearTitle();
	void resetTitle();
	void setSubtitle(std::string const&);
	void setTitle(std::string const&);
	void setTitleAnimationTimes(int, int, int);
	void clearTitleMessages();
	void setActionBarMessage(std::string const&);
	void showPopupNotice(std::string const&, std::string const&);
	void showTipMessage(std::string const&);
	void displayClientMessage(std::string const&);
	void displayChatMessage(std::string const&, std::string const&);
	void displayAnnouncementMessage(std::string const&, std::string);
	void displayWhisperMessage(std::string const&, std::string const&);
	void toggleMuteChat();
	void flashSlot(int);
	int getNumSlots() const;
};
