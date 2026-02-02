//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAAnimationGroup, CShakeChecker, ExposureInfo, NSMutableArray, NSString, UIBezierPath, UIButton, UIImageView, UILabel, UITapGestureRecognizer, WCPayImageMaskView, WCPayWebImageView;
@protocol WCPayLotteryViewDelegate;

@interface WCPayLotteryView : UIView
{
    _Bool _bCanShake;
    _Bool _bCanScratch;
    _Bool _isShaking;
    _Bool _isMaskViewScratchAll;
    _Bool _isMaskViewBeginScratch;
    _Bool _isHasClickDrawLottery;
    _Bool _isHasExposeAwardBtn;
    _Bool _isNewDrawLotteryType;
    _Bool _isHasShowNewTypeMaskImageView;
    _Bool _isAfter3s;
    _Bool _isMaskViewAnimating;
    unsigned int _drawLotteryType;
    id <WCPayLotteryViewDelegate> _delegate;
    ExposureInfo *_exposureInfo;
    UIView *_topLineView;
    UIView *_bottomLineView;
    WCPayWebImageView *_backgroundImageView;
    WCPayWebImageView *_awardsImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_awardButton;
    WCPayImageMaskView *_maskImageView;
    UIImageView *_shakeMaskImageView;
    NSMutableArray *_emitterLayerArray;
    CShakeChecker *_shakeChecker;
    long long _numberOfShake;
    UIBezierPath *_prevPath;
    UIImageView *_shakeAnimateImageView;
    UILabel *_shakeLabel;
    UITapGestureRecognizer *_tapGesture;
    CAAnimationGroup *_animationGroup;
    struct CGRect _maskImageViewMaskBounds;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int drawLotteryType; // @synthesize drawLotteryType=_drawLotteryType;
@property(nonatomic) _Bool isMaskViewAnimating; // @synthesize isMaskViewAnimating=_isMaskViewAnimating;
@property(retain, nonatomic) CAAnimationGroup *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool isAfter3s; // @synthesize isAfter3s=_isAfter3s;
@property(retain, nonatomic) UILabel *shakeLabel; // @synthesize shakeLabel=_shakeLabel;
@property(retain, nonatomic) UIImageView *shakeAnimateImageView; // @synthesize shakeAnimateImageView=_shakeAnimateImageView;
@property(nonatomic) _Bool isHasShowNewTypeMaskImageView; // @synthesize isHasShowNewTypeMaskImageView=_isHasShowNewTypeMaskImageView;
@property(nonatomic) _Bool isNewDrawLotteryType; // @synthesize isNewDrawLotteryType=_isNewDrawLotteryType;
@property(nonatomic) _Bool isHasExposeAwardBtn; // @synthesize isHasExposeAwardBtn=_isHasExposeAwardBtn;
@property(nonatomic) _Bool isHasClickDrawLottery; // @synthesize isHasClickDrawLottery=_isHasClickDrawLottery;
@property(nonatomic) _Bool isMaskViewBeginScratch; // @synthesize isMaskViewBeginScratch=_isMaskViewBeginScratch;
@property(nonatomic) _Bool isMaskViewScratchAll; // @synthesize isMaskViewScratchAll=_isMaskViewScratchAll;
@property(retain, nonatomic) UIBezierPath *prevPath; // @synthesize prevPath=_prevPath;
@property(nonatomic) long long numberOfShake; // @synthesize numberOfShake=_numberOfShake;
@property(nonatomic) _Bool isShaking; // @synthesize isShaking=_isShaking;
@property(retain, nonatomic) CShakeChecker *shakeChecker; // @synthesize shakeChecker=_shakeChecker;
@property(retain, nonatomic) NSMutableArray *emitterLayerArray; // @synthesize emitterLayerArray=_emitterLayerArray;
@property(retain, nonatomic) UIImageView *shakeMaskImageView; // @synthesize shakeMaskImageView=_shakeMaskImageView;
@property(retain, nonatomic) WCPayImageMaskView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIButton *awardButton; // @synthesize awardButton=_awardButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *awardsImageView; // @synthesize awardsImageView=_awardsImageView;
@property(retain, nonatomic) WCPayWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) ExposureInfo *exposureInfo; // @synthesize exposureInfo=_exposureInfo;
@property(nonatomic) __weak id <WCPayLotteryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect maskImageViewMaskBounds; // @synthesize maskImageViewMaskBounds=_maskImageViewMaskBounds;
@property(nonatomic) _Bool bCanScratch; // @synthesize bCanScratch=_bCanScratch;
@property(nonatomic) _Bool bCanShake; // @synthesize bCanShake=_bCanShake;
- (_Bool)isUserHasDrawLottery;
- (id)genEmitterLayerCells:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
- (void)stopAllCurrentEmitterLayer;
- (void)startShowScartchAnimationWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 birthRate:(double)arg3;
- (void)showEmitterEffectWithMinPoint:(struct CGPoint)arg1 maxPoint:(struct CGPoint)arg2;
- (void)imageMaskView:(id)arg1 clearPercentDidChanged:(float)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (void)imageMaskView:(id)arg1 tapOnPoint:(struct CGPoint)arg2;
- (id)getscratchTipsImage:(struct CGRect)arg1;
- (void)doNewTypleMaskImageViewFadeAnimation;
- (void)updateNewTypeMaskViewSubview;
- (void)updateAfterAnimatieTitle;
- (void)updateNewTypeTitle;
- (void)updateNewTypeShakeIconView;
- (void)handleTapGesture:(id)arg1;
- (void)updateMaskView;
- (void)clickButton:(id)arg1;
- (void)updateAwardButtonStatus;
- (void)internalUpdateBtn;
- (id)genGreenButton:(id)arg1;
- (void)updateAwardButton;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)updateIconView;
- (void)updateTopAndBottomLine;
- (void)updateBackgroundView;
- (void)updateWithExposureInfo:(id)arg1;
- (void)layoutSubviews;
- (void)oldShakeOperation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)newShakeOperation:(unsigned int)arg1;
- (void)startShakeForPrice;
- (void)OnShake;
- (void)stopCheckShake;
- (void)startCheckShake;
- (void)setupShakeOneShake;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

