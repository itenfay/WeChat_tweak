//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString, UIColor, UIFont, UILabel, ZZButtonChainModel;

@interface UIButton (GameChatRoomUtil)
+ (id)imageWithColor:(id)arg1;
+ (CDUnknownBlockType)zz_create;
- (void)setImageTitleSpace:(double)arg1;
- (void)updateAssetButtonWording;
@property(nonatomic) unsigned long long selectedAssetCount;
@property(retain, nonatomic) NSString *finishWording;
@property _Bool shouldAnimateBadge; // @dynamic shouldAnimateBadge;
@property _Bool shouldHideBadgeAtZero; // @dynamic shouldHideBadgeAtZero;
@property(nonatomic) double badgeOriginY; // @dynamic badgeOriginY;
@property(nonatomic) double badgeOriginX; // @dynamic badgeOriginX;
@property(nonatomic) double badgeMinSize; // @dynamic badgeMinSize;
@property(nonatomic) double badgePadding; // @dynamic badgePadding;
@property(retain, nonatomic) UIFont *badgeFont; // @dynamic badgeFont;
@property(retain, nonatomic) UIColor *badgeTextColor; // @dynamic badgeTextColor;
@property(retain, nonatomic) UIColor *badgeBGColor; // @dynamic badgeBGColor;
@property(retain, nonatomic) NSString *badgeValue; // @dynamic badgeValue;
@property(retain, nonatomic) UILabel *badge;
- (void)removeBadge;
- (id)duplicateLabel:(id)arg1;
- (void)updateBadgeValueAnimated:(_Bool)arg1;
- (void)updateBadgeFrame;
- (struct CGSize)badgeExpectedSize;
- (void)refreshBadge;
- (void)badgeInit;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)configMaxWidth:(double)arg1;
@property(copy, nonatomic) CDUnknownBlockType touchDownBlock; // @dynamic touchDownBlock;
- (void)cardUtilBButtonDidClickDown;
- (void)setOnTouchDown:(CDUnknownBlockType)arg1;
- (void)setLeftImageRightTextWithSpace:(double)arg1;
- (unsigned long long)_targetState;
- (void)finderSizetoFitWithSpace:(double)arg1;
- (void)layoutButtonWithImageTitleHorizonSpacing:(double)arg1;
- (void)layoutButtonWithImageTitleVerticalSpacing:(double)arg1;
- (void)mj_centerHorizontallyWithSpacing:(double)arg1;
- (_Bool)isTruncatedWithMaxSize:(struct CGSize)arg1;
- (struct _NSRange)truncatedRangeWithMaxSize:(struct CGSize)arg1 hasThreeDots:(_Bool)arg2;
- (void)whenTap:(CDUnknownBlockType)arg1;
- (void)setTitleWithAlpha:(double)arg1;
- (struct CGSize)setButtonImagePosition:(long long)arg1 spacing:(double)arg2;
- (void)zz_setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setButtonImageTitleStyleRightLeftWithLeftPadding:(double)arg1 rightPadding:(double)arg2;
- (void)setButtonImageTitleStyle:(long long)arg1 padding:(double)arg2;
@property(readonly, copy, nonatomic) ZZButtonChainModel *zz_setup;
- (void)setTitle:(id)arg1 withTapAction:(CDUnknownBlockType)arg2;
- (void)addTapAction:(CDUnknownBlockType)arg1;
- (void)sizeToFitWidth:(double)arg1;
- (void)sizeToFitWidth:(double)arg1 lineBreakMode:(long long)arg2;
- (void)fixButtonImageTime:(shared_ptr_b119579c)arg1;
- (void)fixButtonImage;
- (void)layoutButtonWithStyle:(long long)arg1 imageTitleSpace:(double)arg2;
@end

