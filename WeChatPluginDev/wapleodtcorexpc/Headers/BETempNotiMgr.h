//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BETempNotiMgr
{
}

+ (int)genAffTaskId;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)GetFirstUnReadMessage;
- (unsigned long long)getTotalUnreadCount;
- (void)onBatchReadFromLocalId:(long long)arg1;
- (_Bool)deleteMsgByLocalId:(long long)arg1;
- (id)laterDataListFrom:(long long)arg1 limit:(unsigned int)arg2 hasMore:(_Bool *)arg3;
- (id)dataListFrom:(long long)arg1 limit:(unsigned int)arg2 hasMore:(_Bool *)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

