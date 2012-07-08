#ifndef Osprey_Types_h
#define Osprey_Types_h

@class XMPPRosterCoreDataStorage;
@class XMPPUserCoreDataStorageObject;

typedef XMPPRosterCoreDataStorage       OSPRosterStorage;
typedef XMPPUserCoreDataStorageObject   OSPUserStorageObject;

typedef enum{
    noError,
    connectionError,
    authenticationError,
    registrationError,
} EErrorState;

typedef enum {
    disconnected = 0,
    connecting = 1,
    connected = 2,
    authenticating = 4,
    authenticated = 8,
    registering = 16,
    registered = 32,
} EConnectionState;

typedef enum {
    dnd = 0,
    xa = 1,
    away = 2,
    online = 3,
    chat = 4,
} EStatusState;

#endif
