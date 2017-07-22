#pragma once

#include <string>
#include "AppPlatformListener.h"

class App : public AppPlatformListener {
public:
	char filler1[24]; 	// 4

	App(int, char **);
	virtual ~App();
	virtual void audioEngineOn();
	virtual void audioEngineOff();
	virtual void muteAudio();
	virtual void unMuteAudio();
	virtual void destroy();
	virtual void loadState(void *, int);
	virtual void saveState(void **, int *);
	virtual bool useTouchscreen();
	virtual void setTextboxText(const std::string &);
	virtual void draw();
	virtual void update();
	virtual void setUISizeAndScale(int, int, float);
	virtual void setRenderingSize(int, int);
	virtual void quit();
	virtual void wantToQuit();
	virtual void init();
};
