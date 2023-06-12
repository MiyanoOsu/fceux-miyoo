#ifndef _ZAPPER_H_
#define _ZAPPER_H_

#include "../types.h"

struct ZAPPER
{
	uint32 mzx,mzy,mzb;
	int zap_readbit;
	int bogo;
	int zappo;
	uint64 zaphit;
    uint32 lastInput;
};

#endif
