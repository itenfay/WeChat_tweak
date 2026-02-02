//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveChooseClarityCacheInfo, MMFinderLiveChooseClarityView, MMFinderLiveTask, MMLiveConnectMicLogic, NSString, WCFinderLiveAudienceLogReporter;

@interface MMFinderLiveChooseClarityLogic : NSObject
{
    _Bool _isChanging;
    CDUnknownBlockType _onChooseClarityChangedBlock;
    MMFinderLiveTask *_liveTask;
    unsigned long long _fromScene;
    MMLiveConnectMicLogic *_connectMicLogic;
    WCFinderLiveAudienceLogReporter *_audienceReporter;
    MMFinderLiveChooseClarityView *_clarityView;
    long long _oldVideoQualityLevel;
    LiveChooseClarityCacheInfo *_cacheInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveChooseClarityCacheInfo *cacheInfo; // @synthesize cacheInfo=_cacheInfo;
@property(nonatomic) long long oldVideoQualityLevel; // @synthesize oldVideoQualityLevel=_oldVideoQualityLevel;
@property(retain, nonatomic) MMFinderLiveChooseClarityView *clarityView; // @synthesize clarityView=_clarityView;
@property(nonatomic) _Bool isChanging; // @synthesize isChanging=_isChanging;
@property(retain, nonatomic) WCFinderLiveAudienceLogReporter *audienceReporter; // @synthesize audienceReporter=_audienceReporter;
@property(retain, nonatomic) MMLiveConnectMicLogic *connectMicLogic; // @synthesize connectMicLogic=_connectMicLogic;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(copy, nonatomic) CDUnknownBlockType onChooseClarityChangedBlock; // @synthesize onChooseClarityChangedBlock=_onChooseClarityChangedBlock;
- (_Bool)checkTask:(id)arg1;
- (id)getChooseCdnTransInfoWithParams:(id)arg1;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (id)getRecentClarityChooseFromCache;
- (id)getCacheInfoFromCdnTransInfo:(id)arg1 liveId:(unsigned long long)arg2;
- (void)initRecentClarityChoose:(id)arg1;
- (_Bool)isNeedSwitchCdn;
- (void)handleSwitchCdn:(id)arg1;
- (_Bool)handleConnectMic;
- (void)clarityMethodSelect:(id)arg1 indexPath:(id)arg2;
- (void)onClarityChooseEntranceSelectWithScene:(unsigned long long)arg1;
- (void)updateWithLiveTask:(id)arg1 fromScene:(unsigned long long)arg2 connectMicLogic:(id)arg3 audienceReporter:(id)arg4;
- (void)updateWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

