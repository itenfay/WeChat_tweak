//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol TingFlowPlayerProtocol;

@interface TingPlayerManager : NSObject
{
    _Bool _isHeadsetConnected;
    id <TingFlowPlayerProtocol> _globalPlayer;
    id <TingFlowPlayerProtocol> _activePlayer;
    id <TingFlowPlayerProtocol> _restoredPlayer;
    id <TingFlowPlayerProtocol> _dissociativePlayer;
    NSHashTable *_playerList;
    long long _generatedPlayerCount;
    NSMutableDictionary *_nowPlayingInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isHeadsetConnected; // @synthesize isHeadsetConnected=_isHeadsetConnected;
@property(retain, nonatomic) NSMutableDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(nonatomic) long long generatedPlayerCount; // @synthesize generatedPlayerCount=_generatedPlayerCount;
@property(retain, nonatomic) NSHashTable *playerList; // @synthesize playerList=_playerList;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> dissociativePlayer; // @synthesize dissociativePlayer=_dissociativePlayer;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> restoredPlayer; // @synthesize restoredPlayer=_restoredPlayer;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> activePlayer; // @synthesize activePlayer=_activePlayer;
@property(retain, nonatomic) id <TingFlowPlayerProtocol> globalPlayer; // @synthesize globalPlayer=_globalPlayer;
- (void)flowPlayer:(id)arg1 willChangeFromCurrentSource:(id)arg2 targetSource:(id)arg3;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (void)appWillEnterForeground;
- (_Bool)checkIfHeadsetConnected;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)arg1;
- (void)reloadAllPlayers;
- (id)popRestorePlayer;
- (void)restoreInterruptedPlayer:(id)arg1;
- (void)stopDissociativePlayer;
- (void)stopDeactivePlayers;
- (void)clearAllPlayer;
- (void)flushWatiingNotifyPlayer;
- (long long)generatePlayerId;
- (void)makePlayerActive:(id)arg1;
- (id)createPlayerWithClass:(Class)arg1 makeActive:(_Bool)arg2;
- (void)makeIsolateDissociativePlayerActive:(id)arg1;
- (id)createIsolateDissociativePlayer;
- (id)createDissociativePlayerIfNeed;
- (Class)defaultPlayerClass;
- (id)reportManager;
- (id)init;
@property(retain, nonatomic) NSMutableSet *listeners;
- (void)onPlayerChanged;
- (void)removePlayTaskControllerListener:(id)arg1;
- (void)addPlayTaskControllerListener:(id)arg1;
- (_Bool)makeTaskGlobal:(id)arg1;
- (_Bool)destroyStandaloneTask:(id)arg1;
- (id)createStandaloneTask:(id)arg1;
- (id)createTask:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *standalonePlayerMap;
- (id)playingTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

