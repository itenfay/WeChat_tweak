//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKtvPlayerWaitListInfo, MMLiveTaskId, MMUIImageView, MMUILabel, NSString, UICollectionView, WCFinderContact;

@interface MMFinderLiveKTVSongQueueView : UIView
{
    CDUnknownBlockType _clickActionBlock;
    unsigned long long _state;
    MMLiveTaskId *_taskId;
    MMFinderLiveKtvPlayerWaitListInfo *_waitListInfo;
    MMUILabel *_titleLabel;
    MMUIImageView *_arrowImageView;
    MMUIImageView *_inviteImage;
    UICollectionView *_playerCollectionView;
    WCFinderContact *_contact;
    MMUILabel *_actionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UICollectionView *playerCollectionView; // @synthesize playerCollectionView=_playerCollectionView;
@property(retain, nonatomic) MMUIImageView *inviteImage; // @synthesize inviteImage=_inviteImage;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveKtvPlayerWaitListInfo *waitListInfo; // @synthesize waitListInfo=_waitListInfo;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
- (void)onClickedAction;
- (void)onLiveKTVPlayerWaitListInfoUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)updateState;
- (id)liveTask;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferHeight;
- (double)preferWidth;
- (void)layoutUI;
- (void)setupUI;
- (void)layoutSubviews;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

