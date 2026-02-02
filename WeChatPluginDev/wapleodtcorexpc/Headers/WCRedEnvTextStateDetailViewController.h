//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaProxy, MMUILabel, NSString, PAGView, UIButton, UIImageView, UIView, WCRedEnvTextStateInfo;
@protocol WCRedEnvTextStateDetailViewControllerDelegate;

@interface WCRedEnvTextStateDetailViewController
{
    _Bool _hasPageFile;
    _Bool _m_bIsSetWXStatusClick;
    id <WCRedEnvTextStateDetailViewControllerDelegate> _delegate;
    WCRedEnvTextStateInfo *_detailInfo;
    KindaProxy *_kindProxy;
    UIView *_m_coverView;
    UIView *_m_containerView;
    UIImageView *_m_pictureBGImgView;
    PAGView *_m_pagView;
    MMUILabel *_m_greetingLabel;
    MMUILabel *_m_amountLabel;
    MMUILabel *_m_yuanLabel;
    UIView *_m_setWXStatusView;
    UIView *_m_exclusiveView;
    UIButton *_m_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton=_m_cancelButton;
@property(retain, nonatomic) UIView *m_exclusiveView; // @synthesize m_exclusiveView=_m_exclusiveView;
@property(retain, nonatomic) UIView *m_setWXStatusView; // @synthesize m_setWXStatusView=_m_setWXStatusView;
@property(retain, nonatomic) MMUILabel *m_yuanLabel; // @synthesize m_yuanLabel=_m_yuanLabel;
@property(retain, nonatomic) MMUILabel *m_amountLabel; // @synthesize m_amountLabel=_m_amountLabel;
@property(retain, nonatomic) MMUILabel *m_greetingLabel; // @synthesize m_greetingLabel=_m_greetingLabel;
@property(retain, nonatomic) PAGView *m_pagView; // @synthesize m_pagView=_m_pagView;
@property(retain, nonatomic) UIImageView *m_pictureBGImgView; // @synthesize m_pictureBGImgView=_m_pictureBGImgView;
@property(retain, nonatomic) UIView *m_containerView; // @synthesize m_containerView=_m_containerView;
@property(retain, nonatomic) UIView *m_coverView; // @synthesize m_coverView=_m_coverView;
@property(nonatomic) _Bool m_bIsSetWXStatusClick; // @synthesize m_bIsSetWXStatusClick=_m_bIsSetWXStatusClick;
@property(nonatomic) _Bool hasPageFile; // @synthesize hasPageFile=_hasPageFile;
@property(retain, nonatomic) KindaProxy *kindProxy; // @synthesize kindProxy=_kindProxy;
@property(retain, nonatomic) WCRedEnvTextStateInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(nonatomic) __weak id <WCRedEnvTextStateDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)get_hb_height_2022;
- (int)get_hb_width_2022;
- (void)setWxStatus;
- (void)dismiss;
- (void)onSetWxStatus;
- (void)showAnimation;
- (void)showReceiveView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onCloseClick:(id)arg1;
- (void)onCoverTap:(id)arg1;
- (void)playPagView;
- (_Bool)hasExclusiveView;
- (_Bool)hasSetWXStatusEntry;
- (_Bool)isReceiver;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)layoutContainerView;
- (void)layoutReceiveView;
- (void)setupView;
- (void)setupData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDetailInfo:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

