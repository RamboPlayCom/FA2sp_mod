#include "Body.h"

AITriggerEnable* CAITriggerEnableExt::Instance = nullptr;

void CAITriggerEnableExt::ProgramStartupInit()
{
}

BOOL CAITriggerEnableExt::PreTranslateMessageExt(MSG* pMsg)
{
	switch (pMsg->message) {

	default:
		break;
	}
	return this->FA2CDialog::PreTranslateMessage(pMsg);
}