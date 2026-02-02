//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveOnlineUserLogic, NSMutableArray, NSString, RichTextView, UICollectionView;

@interface MMGroupLiveOnlineStateView
{
    MMGroupLiveOnlineUserLogic *onlineUserLogic;
    UICollectionView *_onlineUsersCollectionView;
    NSMutableArray *_userList;
    RichTextView *_noUserLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) UICollectionView *onlineUsersCollectionView; // @synthesize onlineUsersCollectionView=_onlineUsersCollectionView;
@property(retain, nonatomic) MMGroupLiveOnlineUserLogic *onlineUserLogic; // @synthesize onlineUserLogic;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)getOnlineUsersScrollView;
- (id)onlineUsersScrollView;
- (void)onHeadImageClicked:(id)arg1 userItem:(id)arg2;
- (void)onKickAudienceForGroupLiveWithError:(id)arg1 userName:(id)arg2;
- (void)onFetchGroupOnlineUserListWithError:(id)arg1 userList:(id)arg2;
- (void)layoutContentView;
- (void)reloadData;
- (void)initView;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (id)getOnlineUserCountTitle:(unsigned long long)arg1;
- (id)getNoUserLabelTitle;
- (id)liveTask;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

