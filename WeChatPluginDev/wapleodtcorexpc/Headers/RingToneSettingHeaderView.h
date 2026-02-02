//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, RingToneDetail, RingToneImageView, RingToneToolView, SightIconView, UIButton;
@protocol RingToneSettingHeaderViewDelegate;

@interface RingToneSettingHeaderView : UIView
{
    int _layoutScene;
    id <RingToneSettingHeaderViewDelegate> _delegate;
    RingToneDetail *_ring;
    UIView *_ringCardView;
    MMUILabel *_titleLabel;
    MMUILabel *_authorLabel;
    UIView *_lineView;
    UIButton *_addExclusiveFriendButton;
    RingToneToolView *_toolView;
    MMUILabel *_descLabel;
    SightIconView *_playImageView;
    RingToneImageView *_coverImageView;
    UIButton *_defaultLabel;
    UIButton *_backgroundButton;
}

+ (double)DefaultHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) int layoutScene; // @synthesize layoutScene=_layoutScene;
@property(retain, nonatomic) UIButton *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) RingToneImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) SightIconView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RingToneToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIButton *addExclusiveFriendButton; // @synthesize addExclusiveFriendButton=_addExclusiveFriendButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *ringCardView; // @synthesize ringCardView=_ringCardView;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(nonatomic) __weak id <RingToneSettingHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)resetToDefault;
- (void)onTapRingCardView;
- (void)onAddButtonTap;
- (void)initExclusiveRingViews;
- (void)setTipWhenHasExclusiveRing:(_Bool)arg1;
- (void)loadRingDetail:(id)arg1;
- (void)loadInvalidRing;
- (void)loadDefaultRing;
- (void)layoutNewStackView;
- (void)changeToMaximize;
- (void)changeToMinimize:(_Bool)arg1;
- (void)initView;
- (void)layoutViewWithScene:(int)arg1 isDefault:(_Bool)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

