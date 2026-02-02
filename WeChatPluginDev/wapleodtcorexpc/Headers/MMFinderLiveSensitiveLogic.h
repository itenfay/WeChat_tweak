//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSMutableArray, NSString, WCFinderLiveBaseCgi;

@interface MMFinderLiveSensitiveLogic
{
    _Bool _isInvokeingAction;
    CDUnknownBlockType _onSensitiveDataItemListUpdateCallback;
    CDUnknownBlockType _onSensitiveDataActionFailCallback;
    MMFinderLiveTaskId *_liveTaskId;
    NSMutableArray *_baseSensitiveDataItemList;
    NSMutableArray *_sensitiveDataItemList;
    NSMutableArray *_pendingActionItemList;
    WCFinderLiveBaseCgi *_invokingCGI;
    unsigned long long _currMaxActionId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currMaxActionId; // @synthesize currMaxActionId=_currMaxActionId;
@property(nonatomic) __weak WCFinderLiveBaseCgi *invokingCGI; // @synthesize invokingCGI=_invokingCGI;
@property(nonatomic) _Bool isInvokeingAction; // @synthesize isInvokeingAction=_isInvokeingAction;
@property(retain, nonatomic) NSMutableArray *pendingActionItemList; // @synthesize pendingActionItemList=_pendingActionItemList;
@property(retain, nonatomic) NSMutableArray *sensitiveDataItemList; // @synthesize sensitiveDataItemList=_sensitiveDataItemList;
@property(retain, nonatomic) NSMutableArray *baseSensitiveDataItemList; // @synthesize baseSensitiveDataItemList=_baseSensitiveDataItemList;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType onSensitiveDataActionFailCallback; // @synthesize onSensitiveDataActionFailCallback=_onSensitiveDataActionFailCallback;
@property(copy, nonatomic) CDUnknownBlockType onSensitiveDataItemListUpdateCallback; // @synthesize onSensitiveDataItemListUpdateCallback=_onSensitiveDataItemListUpdateCallback;
- (id)getActionDescription:(id)arg1;
- (id)getSensitiveDataItemListFromPendingActions:(id)arg1;
- (id)getNextBatchActionItemList;
- (void)invokeNextPendingActionIfNeeded;
- (void)clearPendingActions;
- (unsigned long long)getNextActionId;
- (void)updateBaseSensitiveDataItemList:(id)arg1;
- (void)updateSensitiveDataItemListIfNeeded:(id)arg1;
- (void)onActionInvokeEnd;
- (void)invokeDeleteAction:(id)arg1;
- (void)invokeAddAction:(id)arg1;
- (void)invokeRequestAction:(id)arg1;
- (_Bool)hasPendingAction;
- (id)currentSensitiveDataItems;
- (void)deleteSensitiveDataItem:(id)arg1;
- (void)addSensitiveDataItem:(id)arg1;
- (void)requestSensitiveDataItem;
- (void)clearCache;
- (void)onActionServiceInit:(id)arg1;
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

