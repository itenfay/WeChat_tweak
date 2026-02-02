//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderSyncRequest, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderSyncManager
{
    NSMutableDictionary *_md5List;
    NSMutableArray *_syncRequestArray;
    FinderSyncRequest *_currentSyncRequest;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) FinderSyncRequest *currentSyncRequest; // @synthesize currentSyncRequest=_currentSyncRequest;
@property(retain, nonatomic) NSMutableArray *syncRequestArray; // @synthesize syncRequestArray=_syncRequestArray;
@property(retain, nonatomic) NSMutableDictionary *md5List; // @synthesize md5List=_md5List;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)mockCgiFailAction:(id)arg1;
- (void)_syncWithRequest:(id)arg1;
- (void)checkQueue;
- (void)syncWithRequest:(id)arg1;
- (_Bool)checkSyncSelectorCanIgnore:(id)arg1;
- (void)updateSyncBuffer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

