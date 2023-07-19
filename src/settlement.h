#ifndef AT_SETTLEMENT_H
#define AT_SETTLEMENT_H 1

#include "citizen.h"

struct at_settlement_s
{
	char name[25];
	//TODO(Fix): dynamic container of citizens
	Citizen citizens[150];
	unsigned int population;

	unsigned int location;
};

typedef struct at_settlement_s Settlement;

Settlement settlement_generate();

#endif