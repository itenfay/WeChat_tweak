//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMapTable, NSMutableArray, NSPointerArray, NSString, WCFinderFluencyReportCenter, WCFinderLoadReporter, WCFinderTimelineFluencyReportManager, WCPlayerPlaybackInfo;

@interface WCFinderReportService
{
    WCFinderTimelineFluencyReportManager *_finderReportManager;
    WCFinderLoadReporter *_loadReporter;
    WCFinderFluencyReportCenter *_fluencyReportCenter;
    NSMutableArray *_streamEntranceResourceIdStack;
    NSMapTable *_pageUdfInfoMap;
    NSMapTable *_pageCGIByPassBufferMap;
    NSPointerArray *_clientPageUdfKVQueue;
    NSMapTable *_clientKVPageUdfKVMap;
    NSString *_latestFeedID;
    unsigned long long _latestMediaType;
    WCPlayerPlaybackInfo *_latestPlaybackInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerPlaybackInfo *latestPlaybackInfo; // @synthesize latestPlaybackInfo=_latestPlaybackInfo;
@property(nonatomic) unsigned long long latestMediaType; // @synthesize latestMediaType=_latestMediaType;
@property(retain, nonatomic) NSString *latestFeedID; // @synthesize latestFeedID=_latestFeedID;
@property(retain, nonatomic) NSMapTable *clientKVPageUdfKVMap; // @synthesize clientKVPageUdfKVMap=_clientKVPageUdfKVMap;
@property(retain, nonatomic) NSPointerArray *clientPageUdfKVQueue; // @synthesize clientPageUdfKVQueue=_clientPageUdfKVQueue;
@property(retain, nonatomic) NSMapTable *pageCGIByPassBufferMap; // @synthesize pageCGIByPassBufferMap=_pageCGIByPassBufferMap;
@property(retain, nonatomic) NSMapTable *pageUdfInfoMap; // @synthesize pageUdfInfoMap=_pageUdfInfoMap;
@property(retain, nonatomic) NSMutableArray *streamEntranceResourceIdStack; // @synthesize streamEntranceResourceIdStack=_streamEntranceResourceIdStack;
@property(retain, nonatomic) WCFinderFluencyReportCenter *fluencyReportCenter; // @synthesize fluencyReportCenter=_fluencyReportCenter;
@property(retain, nonatomic) WCFinderLoadReporter *loadReporter; // @synthesize loadReporter=_loadReporter;
@property(retain, nonatomic) WCFinderTimelineFluencyReportManager *finderReportManager; // @synthesize finderReportManager=_finderReportManager;
- (int)getCurScene;
- (void)onApplicationWillResignActive;
- (void)configLatestFeedID:(id)arg1 mediaType:(unsigned long long)arg2 playbackInfo:(id)arg3;
- (id)getTopKVPageUdfInfoDict;
- (void)bindKVPageUdfInfoWithViewController:(id)arg1;
- (void)addKVPageUdfInfoWithViewController:(id)arg1 udfKV:(id)arg2;
- (void)addKVPageUdfInfoWithViewController:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getPageUdfInfoValueWithViewController:(id)arg1 key:(id)arg2;
- (id)getCurrentPageUdfInfoDict;
- (void)addPageUdfInfoWithViewController:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)currentCGIByPassBuffers;
- (void)addCGIByPassBuffer:(id)arg1 toVC:(id)arg2;
- (void)bindViewController:(id)arg1;
- (id)getSourceId;
- (id)getTraceId;
- (void)popTraceId:(id)arg1;
- (void)pushTraceIdWithFromScene:(int)arg1 toScene:(int)arg2 entranceType:(unsigned long long)arg3;
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

