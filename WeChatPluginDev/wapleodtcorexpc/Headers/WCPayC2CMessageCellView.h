//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, NSMutableDictionary, NSString, UIImageView, UIView, WCPayC2CMessageViewModel, WCPayWebImageView, WCPayWebPagView;

@interface WCPayC2CMessageCellView
{
    WCPayWebImageView *_showResourceImageView;
    UIImageView *_showResourceMaskView;
    WCPayWebImageView *_showResourceWidgetImageView;
    NSString *_bgImageName;
    NSString *_bgHighlightImageName;
    NSString *_maskImageName;
    NSString *_maskHighlightImageName;
    NSMutableDictionary *_showResourceMaskImageViewCache;
    UIView *_showResourceBgView;
    WCPayWebImageView *_corpLogoIcon;
    WCPayWebPagView *_pagView;
    CAShapeLayer *_skinMaskLayer;
    WCPayWebPagView *_atmospherePagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWebPagView *atmospherePagView; // @synthesize atmospherePagView=_atmospherePagView;
@property(retain, nonatomic) CAShapeLayer *skinMaskLayer; // @synthesize skinMaskLayer=_skinMaskLayer;
@property(retain, nonatomic) WCPayWebPagView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) WCPayWebImageView *corpLogoIcon; // @synthesize corpLogoIcon=_corpLogoIcon;
@property(retain, nonatomic) UIView *showResourceBgView; // @synthesize showResourceBgView=_showResourceBgView;
@property(retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache; // @synthesize showResourceMaskImageViewCache=_showResourceMaskImageViewCache;
@property(retain, nonatomic) NSString *maskHighlightImageName; // @synthesize maskHighlightImageName=_maskHighlightImageName;
@property(retain, nonatomic) NSString *maskImageName; // @synthesize maskImageName=_maskImageName;
@property(retain, nonatomic) NSString *bgHighlightImageName; // @synthesize bgHighlightImageName=_bgHighlightImageName;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
@property(retain, nonatomic) WCPayWebImageView *showResourceWidgetImageView; // @synthesize showResourceWidgetImageView=_showResourceWidgetImageView;
@property(retain, nonatomic) UIImageView *showResourceMaskView; // @synthesize showResourceMaskView=_showResourceMaskView;
@property(retain, nonatomic) WCPayWebImageView *showResourceImageView; // @synthesize showResourceImageView=_showResourceImageView;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (void)initSourceViewInside;
- (id)generateMaskImage:(id)arg1 isSender:(_Bool)arg2;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)playPagIfNeed;
- (void)playAtmopherePagIfNeed;
- (_Bool)isHongBaoHandled;
- (void)onAnimationEnd:(id)arg1;
- (id)demoCoverAtmospherePagFile;
- (void)updateHbSourceImageView;
- (void)updateBgImageView:(_Bool)arg1;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)updateIconView;
- (_Bool)isHBC2CHandledMsg;
- (_Bool)isHBC2CMsg;
- (_Bool)isAAC2CHandledMsg;
- (_Bool)isAAC2CMsg;
- (void)updateStatus;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WCPayC2CMessageViewModel *viewModel; // @dynamic viewModel;

@end

