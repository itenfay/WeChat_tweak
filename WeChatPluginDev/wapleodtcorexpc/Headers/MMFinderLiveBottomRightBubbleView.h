//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, MMLiveIconButton, MMUIButton, MMUILabel;

@interface MMFinderLiveBottomRightBubbleView : UIView
{
    unsigned long long _backgroundType;
    MMFinderLiveTaskId *_taskId;
    UIView *_containerView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMLiveIconButton *_actionButton;
}

+ (struct CGSize)defaultSize;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveIconButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)layoutSubviews;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (void)updateActionButton;
- (void)onCloseTapped;
- (void)initViews;
- (id)initWithTaskId:(id)arg1;

@end

