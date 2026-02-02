//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIView, WCPayThirdC2CMessageViewModel, WCPayWebImageView;

@interface WCPayThirdC2CMessageCellView
{
    NSMutableDictionary *_showResourceMaskImageViewCache;
    WCPayWebImageView *_showResourceImageView;
    UIView *_showResourceBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *showResourceBgView; // @synthesize showResourceBgView=_showResourceBgView;
@property(retain, nonatomic) WCPayWebImageView *showResourceImageView; // @synthesize showResourceImageView=_showResourceImageView;
@property(retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache; // @synthesize showResourceMaskImageViewCache=_showResourceMaskImageViewCache;
- (void)onTouchUpInside;
- (void)initSourceViewInside;
- (void)initThirdC2CSoureViewInside;
- (id)generateMaskImage:(id)arg1 isSender:(_Bool)arg2;
- (void)updateBackground;
- (void)initTitleLabel;
- (void)updateStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WCPayThirdC2CMessageViewModel *viewModel; // @dynamic viewModel;

@end

