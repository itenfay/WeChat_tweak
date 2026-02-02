//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIImageView, UILabel, UIView, WCAdRandomPickCardItemInfo, WCAdRandomPickCardItemsInfo, WCAdURLImageView;
@protocol WCAdRandomPickCardItemViewDelegate;

@interface WCAdRandomPickCardItemView
{
    WCAdRandomPickCardItemInfo *_itemInfo;
    WCAdRandomPickCardItemsInfo *_itemsInfo;
    long long _viewType;
    UILabel *_titleLabel;
    UIImageView *_ellipseImage;
    WCAdURLImageView *_backgroundImageView;
    WCAdURLImageView *_itemImageView;
    UIImageView *_haloImage;
    UIView *_flipContainerView;
    UIView *_rotateContainerView;
    id <WCAdRandomPickCardItemViewDelegate> _delegate;
    MMUIButton *_coverButton;
    long long _viewStatus;
    long long _simpleFlipStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long simpleFlipStatus; // @synthesize simpleFlipStatus=_simpleFlipStatus;
@property(nonatomic) long long viewStatus; // @synthesize viewStatus=_viewStatus;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(nonatomic) __weak id <WCAdRandomPickCardItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *rotateContainerView; // @synthesize rotateContainerView=_rotateContainerView;
@property(retain, nonatomic) UIView *flipContainerView; // @synthesize flipContainerView=_flipContainerView;
@property(retain, nonatomic) UIImageView *haloImage; // @synthesize haloImage=_haloImage;
@property(retain, nonatomic) WCAdURLImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) WCAdURLImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *ellipseImage; // @synthesize ellipseImage=_ellipseImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) WCAdRandomPickCardItemsInfo *itemsInfo; // @synthesize itemsInfo=_itemsInfo;
@property(retain, nonatomic) WCAdRandomPickCardItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onCardViewQuickSwitchAnimtaionDone;
- (void)updateTitleColorWithStatus:(long long)arg1;
- (struct CGSize)calcContentImageSize;
- (struct CGSize)calcBaseContainerSize;
- (double)fetchContentMaxWidth;
- (void)removeAllLayersAnimations;
- (void)addAnimation:(id)arg1 toView:(id)arg2 withInfo:(id)arg3;
- (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2 timingFunctions:(id)arg3 values:(id)arg4 keyTimes:(id)arg5;
- (void)setToStayPut:(_Bool)arg1;
- (void)showQuickSwitch:(_Bool)arg1;
- (void)prepareSubviewsForQuickSwitch:(_Bool)arg1;
- (void)showSimpleFlip:(_Bool)arg1;
- (void)prepareSubviewsForSimpleFlip:(_Bool)arg1;
- (void)showSimpleWave:(_Bool)arg1;
- (void)prepareSubviewsForSimpleWave:(_Bool)arg1;
- (void)showIntroduceTwo:(_Bool)arg1;
- (void)showIntroduceOne:(_Bool)arg1;
- (void)prepareSubviewsForIntroduce:(_Bool)arg1;
- (void)updateViewStatus:(long long)arg1 animated:(_Bool)arg2;
- (void)setItemImageViewForTransitionBeginning:(_Bool)arg1;
- (_Bool)isCardItemsViewTypeNarrow;
- (void)onCoverButtonClicked:(id)arg1;
- (void)resetCardItemView;
- (_Bool)needToLayoutSubviews;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 itemInfo:(id)arg2 itemsInfo:(id)arg3 viewType:(long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

