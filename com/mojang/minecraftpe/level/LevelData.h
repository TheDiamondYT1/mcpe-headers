#pragma once

#include <string>
#include <memory>

class LevelData
{
public:
	void setRainTime(int);
	void setRainLevel(float);
	void setLightningTime(int);
	void setLightingLevel(float);
	bool achievementsWillBeDisabledOnLoad() const;
	bool isEduLevel() const;
	std::string getLevelName() const;
	float getRainLevel() const;
	float getLightningLevel() const;
};

