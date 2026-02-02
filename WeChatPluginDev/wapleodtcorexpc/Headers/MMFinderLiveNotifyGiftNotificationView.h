//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FinderJumpInfo, FinderLiveAppMsgLiveRewardInfo, MMFinderLiveRewardGiftItem, MMUILabel, NSString, PAGView, UIImageView;
@protocol MMFinderLiveNotifyGiftNotificationViewDelegate;

@interface MMFinderLiveNotifyGiftNotificationView : UIView
{
    id <MMFinderLiveNotifyGiftNotificationViewDelegate> _delegate;
    UIView *_contentView;
    FinderJumpInfo *_jumpInfo;
    CAGradientLayer *_gradientLayer;
    UIView *_gradientBackgroundView;
    MMUILabel *_descriptionLabel;
    UIImageView *_giftImageView;
    PAGView *_giftAnimationView;
    UIImageView *_arrowView;
    FinderLiveAppMsgLiveRewardInfo *_rewardInfo;
    MMFinderLiveRewardGiftItem *_giftItem;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) FinderLiveAppMsgLiveRewardInfo *rewardInfo; // @synthesize rewardInfo=_rewardInfo;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) PAGView *giftAnimationView; // @synthesize giftAnimationView=_giftAnimationView;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveNotifyGiftNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onTap:(id)arg1;
- (void)updateDescriptionLabel:(id)arg1;
- (void)stopGiftAnimation;
- (void)playGiftAnimation;
- (void)loadAndPlayGiftAnimationWithPAGFile:(id)arg1;
- (void)updateWithJumpInfo:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

