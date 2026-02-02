//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;
@protocol WAAppOperateLogicDelegate;

@interface WAAppOperateLogic
{
    NSMutableDictionary *m_operationInfo;
    NSMutableArray *m_starOperations;
    id <WAAppOperateLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAAppOperateLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *m_starOperations; // @synthesize m_starOperations;
@property(retain, nonatomic) NSMutableDictionary *m_operationInfo; // @synthesize m_operationInfo;
- (int)transferUpdateWxaRecordReasonFromOperationSyncReason:(unsigned int)arg1;
- (void)operateStarItemsForTransferedReason:(int)arg1;
- (void)operateStarItemsForReason:(unsigned int)arg1;
- (void)operateStarItem:(id)arg1 positionWithPreItem:(id)arg2 nextItem:(id)arg3 actionType:(unsigned int)arg4 inScene:(unsigned int)arg5;
- (void)moveStaredItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (void)unStarItem:(id)arg1 inScene:(unsigned int)arg2;
- (void)starItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (id)convertWxaAppItem2AppItemData:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)handleGetWxaCommUseApp:(id)arg1;
- (void)handleUpdateStarRecord:(id)arg1;
- (void)handleFaildUpdateUsageOperationAsync:(id)arg1;
- (void)handleUpdateWeAppUsageRecord:(id)arg1;
- (void)handleGetWeAppUsageRecord:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)updateAppUsageToSvrWithOpration:(id)arg1;
- (void)getCommonUseAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getStarAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getLatestUsageAppItemsFromSvrInScene:(unsigned int)arg1;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 withCommonUse:(_Bool)arg2 requestInfo:(id)arg3 inScene:(unsigned int)arg4;
- (void)excuteOpration:(id)arg1;
- (void)runAllOperation;
- (void)addAppOperationInRetryQueue:(id)arg1;
- (void)saveStarData;
- (void)saveData;
- (void)fetchData;

@end

