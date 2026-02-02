//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionSummary, NSArray, NSMutableArray, NSMutableDictionary, NSString, OrderedDictionary;
@protocol StoreEmotionDownloadLogicObjectDelegate;

@interface StoreEmotionDownloadLogicObject
{
    _Bool _m_isActive;
    int _maxWWANDownloadPacks;
    NSArray *_serverPids;
    OrderedDictionary *_needDownloadPids;
    NSMutableDictionary *_emotionsProgress;
    NSMutableDictionary *_emotionsState;
    id <StoreEmotionDownloadLogicObjectDelegate> _delegate;
    NSMutableArray *_failedArray;
    EmotionSummary *_downloadingItemSummary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmotionSummary *downloadingItemSummary; // @synthesize downloadingItemSummary=_downloadingItemSummary;
@property(retain, nonatomic) NSMutableArray *failedArray; // @synthesize failedArray=_failedArray;
@property(nonatomic) _Bool m_isActive; // @synthesize m_isActive=_m_isActive;
@property(nonatomic) __weak id <StoreEmotionDownloadLogicObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *emotionsState; // @synthesize emotionsState=_emotionsState;
@property(retain, nonatomic) NSMutableDictionary *emotionsProgress; // @synthesize emotionsProgress=_emotionsProgress;
@property(retain) OrderedDictionary *needDownloadPids; // @synthesize needDownloadPids=_needDownloadPids;
@property(retain, nonatomic) NSArray *serverPids; // @synthesize serverPids=_serverPids;
@property(nonatomic) int maxWWANDownloadPacks; // @synthesize maxWWANDownloadPacks=_maxWWANDownloadPacks;
- (void)downloadHighPrivillageWithItem:(id)arg1;
- (void)onAllEmotionDownloadFinish;
- (void)configEmotionProgressWithProductID:(id)arg1;
- (id)getStoreEmotionList;
- (void)getNeededDownloadStoreEmotionFromServerPids:(id)arg1;
- (void)downloadFirstStoreEmoticon;
- (void)startInternalLogic;
- (void)downloadServerXMLEmotionWithPid:(id)arg1;
- (_Bool)isActive;
- (void)onStoreEmotionDownloadLogicObjectFailedWithItem:(id)arg1;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (int)getStateWithItem:(id)arg1;
- (float)getDownloadingProgressFromItem:(id)arg1;
- (id)returnDownloadingInfoToMgr;
- (void)startLogicWithPids:(id)arg1;
- (void)startLogic;
- (id)initWithServerPids:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

