#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamGameServer_SteamGameServer012_InitGameServer(void *, uint32, uint16, uint16, uint32, AppId_t, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetProduct(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetGameDescription(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetModDir(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetDedicatedServer(void *, bool);
extern void cppISteamGameServer_SteamGameServer012_LogOn(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_LogOnAnonymous(void *);
extern void cppISteamGameServer_SteamGameServer012_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer012_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer012_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer012_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer012_WasRestartRequested(void *);
extern void cppISteamGameServer_SteamGameServer012_SetMaxPlayerCount(void *, int);
extern void cppISteamGameServer_SteamGameServer012_SetBotPlayerCount(void *, int);
extern void cppISteamGameServer_SteamGameServer012_SetServerName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetMapName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetPasswordProtected(void *, bool);
extern void cppISteamGameServer_SteamGameServer012_SetSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer012_SetSpectatorServerName(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_ClearAllKeyValues(void *);
extern void cppISteamGameServer_SteamGameServer012_SetKeyValue(void *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetGameTags(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetGameData(void *, const char *);
extern void cppISteamGameServer_SteamGameServer012_SetRegion(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer012_SendUserConnectAndAuthenticate(void *, uint32, const void *, uint32, CSteamID *);
extern CSteamID cppISteamGameServer_SteamGameServer012_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer012_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer012_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern HAuthTicket cppISteamGameServer_SteamGameServer012_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamGameServer_SteamGameServer012_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamGameServer_SteamGameServer012_EndAuthSession(void *, CSteamID);
extern void cppISteamGameServer_SteamGameServer012_CancelAuthTicket(void *, HAuthTicket);
extern EUserHasLicenseForAppResult cppISteamGameServer_SteamGameServer012_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern bool cppISteamGameServer_SteamGameServer012_RequestUserGroupStatus(void *, CSteamID, CSteamID);
extern void cppISteamGameServer_SteamGameServer012_GetGameplayStats(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer012_GetServerReputation(void *);
extern uint32 cppISteamGameServer_SteamGameServer012_GetPublicIP(void *);
extern bool cppISteamGameServer_SteamGameServer012_HandleIncomingPacket(void *, const void *, int, uint32, uint16);
extern int cppISteamGameServer_SteamGameServer012_GetNextOutgoingPacket(void *, void *, int, uint32 *, uint16 *);
extern void cppISteamGameServer_SteamGameServer012_EnableHeartbeats(void *, bool);
extern void cppISteamGameServer_SteamGameServer012_SetHeartbeatInterval(void *, int);
extern void cppISteamGameServer_SteamGameServer012_ForceHeartbeat(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer012_AssociateWithClan(void *, CSteamID);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer012_ComputeNewPlayerCompatibility(void *, CSteamID);
#ifdef __cplusplus
}
#endif
