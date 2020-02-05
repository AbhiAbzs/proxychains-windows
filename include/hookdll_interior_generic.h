#pragma once

#include "defines_win32.h"
#include "hookdll_win32.h"
#include "ipc_win32.h"

extern PXCH_INJECT_REMOTE_DATA* g_pRemoteData;
PXCH_UINT32 IpcCommunicateWithServer(const IPC_MSGBUF sendMessage, PXCH_UINT32 cbSendMessageSize, IPC_MSGBUF responseMessage, PXCH_UINT32* pcbResponseMessageSize);
