//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CustomVisualEffectView, NSString, UIView, WCCanvasRandomLayoutEncorePickInfo;

@interface WCCanvasRandomPickCardButtonView
{
    WCCanvasRandomLayoutEncorePickInfo *_encoreInfo;
    UIView *_highlightedCoverView;
    CustomVisualEffectView *_blurView;
}

+ (struct CGSize)calcButtonViewSizeWithEncoreInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CustomVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *highlightedCoverView; // @synthesize highlightedCoverView=_highlightedCoverView;
@property(retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *encoreInfo; // @synthesize encoreInfo=_encoreInfo;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)setButtonImage:(id)arg1;
- (void)generateSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 encoreInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

