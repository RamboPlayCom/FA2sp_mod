#include "Replacement.h"
#include "../FA2sp.Constants.h"

// should be fixed by hooks but using this to just make it works for now.
void Replacement::HexFixes() {
	
	auto UndoRedoExtend = [](unsigned char extendNum)
	{
		RunTime::ResetMemoryContentAt(0x4BBAD0, &extendNum, sizeof extendNum);
		RunTime::ResetMemoryContentAt(0x4BBAE9, &extendNum, sizeof extendNum);
		--extendNum;
		RunTime::ResetMemoryContentAt(0x4BBAF3, &extendNum, sizeof extendNum);
	};

	auto NoEasyMode = []()
	{
		unsigned char code[] = { 0x90,0x90,0xB0,0x00 };
		RunTime::ResetMemoryContentAt(0x421BCE, code, sizeof code);
	};
	
	UndoRedoExtend(128);
	NoEasyMode();

	return;
}