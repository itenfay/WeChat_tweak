//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet;
@protocol WCLogicMgrDelegate;

@interface WCLogicMgr
{
    id <WCLogicMgrDelegate> m_delegate;
    NSMutableSet *setWorkingItems;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCLogicMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onModifyDataItemStarStatusWithResponse:(id)arg1 event:(unsigned int)arg2;
- (_Bool)modifyDataItem:(id)arg1 isStarred:(_Bool)arg2;
- (void)onSetDataItemTogetherWithResponse:(id)arg1 event:(unsigned int)arg2;
- (_Bool)setDataItemTogetherByRemovingCurrentUser:(id)arg1;
- (void)modifyDataItem:(id)arg1 visibilityOp:(id)arg2;
- (void)setDataItem:(id)arg1 ignoreNotify:(_Bool)arg2;
- (_Bool)cancelLikeDataItem:(id)arg1 context:(id)arg2;
- (_Bool)deleteCommentWithItemID:(id)arg1 commentID:(id)arg2 context:(id)arg3;
- (void)updateDataItemDetailWithGroupDetail:(id)arg1;
- (void)updateDataItemDetail:(id)arg1;
- (_Bool)responseForSnsObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)requestForSnsObjectDetailRequest:(id)arg1 groupDetail:(_Bool)arg2;
- (void)deleteDataItem:(id)arg1;
- (void)setDataItemHate:(id)arg1;
- (void)setDataItemPublic:(id)arg1;
- (void)setDataItemPrivate:(id)arg1;
- (void)onOperationModifyShareScope:(id)arg1 Finished:(long long)arg2;
- (void)onOperationBlockMention:(id)arg1 Finished:(long long)arg2;
- (void)onOperationCancelLike:(id)arg1 finished:(long long)arg2 context:(id)arg3;
- (void)onOperationDeleteComment:(id)arg1 finished:(long long)arg2 context:(id)arg3;
- (void)onOperationSetOpen:(id)arg1 Finished:(long long)arg2;
- (void)onOperationSetPrivacy:(id)arg1 Finished:(long long)arg2;
- (void)onOperationDeleteObj:(id)arg1 Finished:(long long)arg2 withResp:(id)arg3;
- (void)onOperation:(id)arg1 Finished:(long long)arg2 withResp:(id)arg3 context:(id)arg4;
- (_Bool)responseForSnsObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForSnsObjectOpRequest:(id)arg1 context:(id)arg2;
- (_Bool)requestForSnsObjectOpRequest:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

