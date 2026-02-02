//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCDNPlayerView, MMTimer, NSString, WCFinderDataItem;

@interface TingFinderLivePlayer
{
    _Bool _isChecking;
    unsigned int _checkInterval;
    unsigned int _checkFailCount;
    WCFinderDataItem *_finderItem;
    MMLiveCDNPlayerView *_livePlayerView;
    MMTimer *_checkTimer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int checkFailCount; // @synthesize checkFailCount=_checkFailCount;
@property(nonatomic) _Bool isChecking; // @synthesize isChecking=_isChecking;
@property(nonatomic) unsigned int checkInterval; // @synthesize checkInterval=_checkInterval;
@property(retain, nonatomic) MMTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) MMLiveCDNPlayerView *livePlayerView; // @synthesize livePlayerView=_livePlayerView;
@property(retain, nonatomic) WCFinderDataItem *finderItem; // @synthesize finderItem=_finderItem;
- (void)checkLiveStatus;
- (void)stopTimerCheck;
- (void)startTimerCheck;
- (void)onPlayWarningReconnect;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayBegin;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)play;
- (void)prepareToPlay;
- (id)view;
- (void)dealloc;
- (id)initWithTingItem:(id)arg1 configuartion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

