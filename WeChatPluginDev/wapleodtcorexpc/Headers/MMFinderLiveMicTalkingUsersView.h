//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, NSArray, NSString, UICollectionView, UIImageView, UILabel;
@protocol MMFinderLiveMicTalkingUsersViewActionDelegate;

@interface MMFinderLiveMicTalkingUsersView : UIView
{
    _Bool _canShow;
    id <MMFinderLiveMicTalkingUsersViewActionDelegate> _actionDelegate;
    MMFinderLiveTaskId *_finderLiveTaskId;
    NSArray *_micTalkingUsers;
    UIView *_noUserTipView;
    UIImageView *_noUserTipIcon;
    UILabel *_noUserTipLabel;
    UICollectionView *_micUsersCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *micUsersCollectionView; // @synthesize micUsersCollectionView=_micUsersCollectionView;
@property(retain, nonatomic) UILabel *noUserTipLabel; // @synthesize noUserTipLabel=_noUserTipLabel;
@property(retain, nonatomic) UIImageView *noUserTipIcon; // @synthesize noUserTipIcon=_noUserTipIcon;
@property(retain, nonatomic) UIView *noUserTipView; // @synthesize noUserTipView=_noUserTipView;
@property(retain, nonatomic) NSArray *micTalkingUsers; // @synthesize micTalkingUsers=_micTalkingUsers;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) _Bool canShow; // @synthesize canShow=_canShow;
@property(nonatomic) __weak id <MMFinderLiveMicTalkingUsersViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateWithMicTalkingUsers:(id)arg1;
- (void)updateViewHidden;
- (void)layoutUsersCollectionView;
- (void)layoutNoUserTipView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

