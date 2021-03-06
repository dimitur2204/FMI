#pragma once

const short MAX_NAME_SIZE = 26;
const short MAX_EFFECT_SIZE = 101;

enum class MagicCardType {
	trap,
	buff,
	spell
};

class MagicCard
{	
private:
	char name[MAX_NAME_SIZE];
	char effect[MAX_EFFECT_SIZE];
	MagicCardType type;
public:
	MagicCard();
	MagicCard(const char* name, const char* effect, const MagicCardType type);
	MagicCard(const MagicCard& magicCard);
	MagicCard& operator=(const MagicCard& magicCard);
	~MagicCard();

private:
	void copy(const MagicCard& magicCard);
};

