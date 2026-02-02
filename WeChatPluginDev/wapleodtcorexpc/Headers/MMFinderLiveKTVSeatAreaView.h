//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMFinderLiveViewController, MMLiveTaskId, NSMutableArray, NSString, OrderedDictionary, UICollectionView;

@interface MMFinderLiveKTVSeatAreaView : UIView
{
    MMLiveTaskId *_taskId;
    UICollectionView *_seatCollectionView;
    OrderedDictionary *_seatOrderDict;
    NSMutableArray *_pendingSeatArr;
    NSString *_singingUserId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *singingUserId; // @synthesize singingUserId=_singingUserId;
@property(retain, nonatomic) NSMutableArray *pendingSeatArr; // @synthesize pendingSeatArr=_pendingSeatArr;
@property(retain, nonatomic) OrderedDictionary *seatOrderDict; // @synthesize seatOrderDict=_seatOrderDict;
@property(retain, nonatomic) UICollectionView *seatCollectionView; // @synthesize seatCollectionView=_seatCollectionView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onTotalScoreChange;
- (void)updateAllSeatUsersSingState;
- (id)getAnchorSeatUserWithMicUserInfo:(id)arg1;
- (id)getMicSeatUserWithMicUserInfo:(id)arg1;
- (id)getCurrAllSeatUserList;
- (void)onMicUsersInfoChanged;
- (void)onEnterKTVMode;
- (void)clearDatas;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 totalScoreChanged:(int)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)onLiveTask:(id)arg1 isKTVModeChangedTo:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)handleConnectMicUserViewTappedAtIndexPath:(id)arg1;
- (id)getSeatUserCellAtIndexPath:(id)arg1;
- (id)getSeatInviteCellAtIndexPath:(id)arg1;
- (unsigned long long)maxSeatCount;
- (double)collectionHeight;
@property(readonly, nonatomic) MMFinderLiveViewController *liveViewVC;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)layoutCollectionView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

