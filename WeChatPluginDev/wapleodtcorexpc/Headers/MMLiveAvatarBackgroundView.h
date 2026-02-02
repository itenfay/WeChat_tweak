//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, MMWebImageView, WCFinderDataItem, WCFinderHeadImageView;

@interface MMLiveAvatarBackgroundView : UIView
{
    UIView *_avatarContainerView;
    MMWebImageView *_coverImageView;
    WCFinderHeadImageView *_avatarImageView;
    UIView *_maskContainerView;
    UIView *_customContentView;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveTask *_liveTask;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) UIView *maskContainerView; // @synthesize maskContainerView=_maskContainerView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
- (void)initializeImageViews;
- (void)addCustomContentView:(id)arg1;
- (void)addMaskBlurWithColor:(id)arg1;
- (id)tryGetAnchorDefaultCoverImageUrlInKTVMode:(id)arg1;
- (void)refreshImage;
- (id)initWithFinderDataItem:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithTask:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

