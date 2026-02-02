//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, UILabel, UIVisualEffectView;
@protocol WCFinderHalfScreenListenProtocol, WCFinderMemberShipPaymentGuideViewDelegate;

@interface WCFinderMemberShipPaymentGuideView : UIView
{
    id <WCFinderMemberShipPaymentGuideViewDelegate> _delegate;
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate;
    double _operationAreaTopPosition;
    UIVisualEffectView *_blurMaskView;
    UIView *_blackMaskView;
    MMUILabel *_tipsLabel;
    UIButton *_confirmButton;
    UILabel *_confirmLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *confirmLabel; // @synthesize confirmLabel=_confirmLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *blackMaskView; // @synthesize blackMaskView=_blackMaskView;
@property(retain, nonatomic) UIVisualEffectView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(nonatomic) double operationAreaTopPosition; // @synthesize operationAreaTopPosition=_operationAreaTopPosition;
@property(nonatomic) __weak id <WCFinderHalfScreenListenProtocol> halfScreenDelegate; // @synthesize halfScreenDelegate=_halfScreenDelegate;
@property(nonatomic) __weak id <WCFinderMemberShipPaymentGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onConfirm;
- (double)_tipLabelTopPositionWithHalfScreenViewProgress:(double)arg1 halfScreenHeightPercent:(double)arg2;
- (void)_updateLayout;
- (void)halfScreenStateChanged;
- (void)updateConfirmTips:(id)arg1 centerTips:(id)arg2;
- (void)layoutCycleLabel;
- (void)layoutConfirmButton;
- (void)setLineSpace:(double)arg1 withText:(id)arg2 inLabel:(id)arg3;
- (void)layoutSubviews;
- (void)layoutTipsLabel;
- (void)layoutBlackMaskView;
- (void)layoutMaskView;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

