//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableIndexSet, NSString, TextStateHistoryCalendar, TextStateHistoryInfo, WCCgiBlockHelper;
@protocol TextStateHistoryLogicDelegate;

@interface TextStateHistoryLogic : NSObject
{
    _Bool _hasCacheData;
    _Bool _finished;
    _Bool _fetchingData;
    id <TextStateHistoryLogicDelegate> _delegate;
    NSString *_sessionId;
    NSString *_sceneSessionId;
    TextStateHistoryCalendar *_calendar;
    WCCgiBlockHelper *_summaryCgiBlockHelper;
    NSData *_pagingContext;
    NSMutableArray *_infoList;
    NSMutableIndexSet *_completeInfoIndexes;
    TextStateHistoryInfo *_pivotInfo;
    unsigned long long _pivotInfoIndex;
}

+ (id)historyInfoListCachePath;
+ (void)fetchDataForTextStateIdList:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool fetchingData; // @synthesize fetchingData=_fetchingData;
@property(nonatomic) unsigned long long pivotInfoIndex; // @synthesize pivotInfoIndex=_pivotInfoIndex;
@property(retain, nonatomic) TextStateHistoryInfo *pivotInfo; // @synthesize pivotInfo=_pivotInfo;
@property(retain, nonatomic) NSMutableIndexSet *completeInfoIndexes; // @synthesize completeInfoIndexes=_completeInfoIndexes;
@property(retain, nonatomic) NSMutableArray *infoList; // @synthesize infoList=_infoList;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSData *pagingContext; // @synthesize pagingContext=_pagingContext;
@property(nonatomic) _Bool hasCacheData; // @synthesize hasCacheData=_hasCacheData;
@property(retain, nonatomic) WCCgiBlockHelper *summaryCgiBlockHelper; // @synthesize summaryCgiBlockHelper=_summaryCgiBlockHelper;
@property(retain, nonatomic) TextStateHistoryCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSString *sceneSessionId; // @synthesize sceneSessionId=_sceneSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <TextStateHistoryLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (void)onChangeToCardAtIndex:(unsigned long long)arg1;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTapMoreForActivateTextState:(id)arg1 cardView:(id)arg2 memCache:(id)arg3;
- (void)onTapMoreForCardView:(id)arg1 textState:(id)arg2;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)beginIndex;
- (unsigned long long)count;
- (void)deleteHistoryInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkFetchDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetIndexForFetchingDataAtIndex:(unsigned long long)arg1;
- (void)fetchDataFromKey:(unsigned long long)arg1 count:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDataFromIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDataFromPivotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pivotCardListIndexForInfo:(id)arg1;
- (id)cardListDelegate;
- (id)cardListDataProvider;
- (void)saveCache;
- (_Bool)hasFinishedFetchingSummary;
- (_Bool)isFetchingSummary;
- (void)fetchSummaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetSummaryFetchState;
- (void)refreshSceneSessionId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

