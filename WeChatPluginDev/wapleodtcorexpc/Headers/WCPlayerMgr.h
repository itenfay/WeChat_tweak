//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCPlayerMgr
{
    _Bool _bDownloadProxyInitFail;
    _Bool _isAppResignActive;
    int _localServerReinitFailCount;
    unsigned int _taskCount;
    unsigned int _lastNoDataBufferingTime;
    unsigned int _backgroundSequence;
    NSMutableArray *_arrAggregate;
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    double _currOutputVolume;
    NSMutableArray *_arrBufferingTimes;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int backgroundSequence; // @synthesize backgroundSequence=_backgroundSequence;
@property(retain, nonatomic) NSMutableArray *arrBufferingTimes; // @synthesize arrBufferingTimes=_arrBufferingTimes;
@property(nonatomic) unsigned int lastNoDataBufferingTime; // @synthesize lastNoDataBufferingTime=_lastNoDataBufferingTime;
@property(nonatomic) double currOutputVolume; // @synthesize currOutputVolume=_currOutputVolume;
@property(nonatomic) _Bool isAppResignActive; // @synthesize isAppResignActive=_isAppResignActive;
@property(nonatomic) unsigned int taskCount; // @synthesize taskCount=_taskCount;
@property(nonatomic) int localServerReinitFailCount; // @synthesize localServerReinitFailCount=_localServerReinitFailCount;
@property(nonatomic) _Bool bDownloadProxyInitFail; // @synthesize bDownloadProxyInitFail=_bDownloadProxyInitFail;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue; // @synthesize audioSessionQueue=_audioSessionQueue;
@property(retain, nonatomic) NSMutableArray *arrAggregate; // @synthesize arrAggregate=_arrAggregate;
- (unsigned long long)getHaveNoDataBufferingCount;
- (void)onPlayerStartBuffering:(id)arg1;
- (unsigned int)clearAllPlayerWithPlayerScene:(unsigned long long)arg1;
- (unsigned int)getAndIncPlayCount:(id)arg1;
- (void)setScreenLightAlways:(_Bool)arg1;
- (id)getPlayerPlaybackInfoWithIdentifier:(id)arg1;
- (_Bool)isPlayingWithPlayerScene:(unsigned long long)arg1;
- (_Bool)isPlayingWithIdentifier:(id)arg1;
- (id)getAllPlayingItemsIdentifier;
- (_Bool)isPlayingWithFilePath:(id)arg1;
- (_Bool)hasAnyUnMutePlayingPlayer;
- (void)removePlayerObj:(id)arg1;
- (void)addPlayerObj:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserveOutputVolume;
- (void)startObserveOutputVolume;
- (void)onApplicationWillResignActive;
- (void)onApplicationBecomeActive;
- (void)addNotification;
- (unsigned int)newPlayerTaskId;
- (void)onLocalServerReinitFail;
- (_Bool)isProxyUnavailable;
- (void)setDownloadProxyInitFail;
- (_Bool)isPictureInPictureSupported;
- (double)getCurrOutputVolume;
- (unsigned int)getBackgroundSeq;
- (id)shareQueue;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

