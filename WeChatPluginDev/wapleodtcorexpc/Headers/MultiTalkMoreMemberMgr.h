//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiTalkMoreMemberMgr
{
    unsigned long long _maxMultiTalkMemCount;
}

@property(nonatomic) unsigned long long maxMultiTalkMemCount; // @synthesize maxMultiTalkMemCount=_maxMultiTalkMemCount;
- (void)onExptItemListChange;
- (unsigned long long)maxMultiTalkMemberCount;
- (void)clearData;
- (void)checkAndUpdateData;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

