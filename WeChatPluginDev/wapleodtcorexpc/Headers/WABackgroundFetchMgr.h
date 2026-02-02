//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WABackgroundFetchMgr
{
    NSMutableDictionary *_dicPrefechDataMemoryStore;
    NSMutableDictionary *_dicPeriodDataMemoryStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicPeriodDataMemoryStore; // @synthesize dicPeriodDataMemoryStore=_dicPeriodDataMemoryStore;
@property(retain, nonatomic) NSMutableDictionary *dicPrefechDataMemoryStore; // @synthesize dicPrefechDataMemoryStore=_dicPrefechDataMemoryStore;
- (void)cleanPeriodFetchDataCache:(id)arg1;
- (void)cleanPreFetchDataCache:(id)arg1;
- (id)getPeriodFetchData:(id)arg1;
- (id)getPreFetchData:(id)arg1;
- (void)tryDeleteExpiredData;
- (void)tryDeleteUnstarData;
- (void)handlePeriodFetchResponse:(id)arg1;
- (void)handlePreFetchResponse:(id)arg1 Request:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (_Bool)asyncPreFetchDataIfNeed:(id)arg1 RelativeURL:(id)arg2 EnterScene:(unsigned int)arg3;
- (void)periodFetchData:(id)arg1;
- (void)fetchPeriodData;
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

