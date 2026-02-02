//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWormhole, NSSet, NSString;
@protocol WXKeyBoardActiveReceiver;

@interface WXKeyBoardMgr
{
    void *_sharedFile;
    MMWormhole *_wormhole;
    id <WXKeyBoardActiveReceiver> _receiver;
    NSString *_sessionId;
    NSSet *_supportMessageTypes;
}

+ (id)sharedFilePath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *supportMessageTypes; // @synthesize supportMessageTypes=_supportMessageTypes;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <WXKeyBoardActiveReceiver> receiver; // @synthesize receiver=_receiver;
@property(retain, nonatomic) MMWormhole *wormhole; // @synthesize wormhole=_wormhole;
- (void)onInputModeDidChange:(id)arg1;
- (void)syncSharedFile;
- (id)getContext;
- (void)handleCommunicateData:(id)arg1;
- (void)handleRequireAbility:(id)arg1;
@property(readonly, nonatomic, getter=isFunctionOn) _Bool functionOn;
- (unsigned int)installState;
- (_Bool)isInstalled;
- (void)setActiveReceiver:(id)arg1;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

