//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIColor, UIImageView, UIVisualEffectView, WCCanvasComponent;

@interface WCCanvasFloatConversionBarComponent
{
    WCCanvasComponent *_buttonComponent;
    UIImageView *_backgroundContentView;
    UIVisualEffectView *_backgroundBlurView;
    UIImageView *_iconView;
    MMUILabel *_titleView;
    MMUILabel *_descView;
    unsigned long long _showingAnimationStage;
    UIColor *_buttonOriBackgroundColor;
    UIColor *_buttonOriTextColor;
    struct CGRect _buttonOriFrame;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *buttonOriTextColor; // @synthesize buttonOriTextColor=_buttonOriTextColor;
@property(retain, nonatomic) UIColor *buttonOriBackgroundColor; // @synthesize buttonOriBackgroundColor=_buttonOriBackgroundColor;
@property(nonatomic) struct CGRect buttonOriFrame; // @synthesize buttonOriFrame=_buttonOriFrame;
@property(nonatomic) unsigned long long showingAnimationStage; // @synthesize showingAnimationStage=_showingAnimationStage;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIVisualEffectView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIImageView *backgroundContentView; // @synthesize backgroundContentView=_backgroundContentView;
@property(retain, nonatomic) WCCanvasComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;
- (double)fetchMaxWidthForContent;
- (id)loadImageForUrl:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)showComponentAnimationStage3;
- (void)showComponentAnimationHold2;
- (void)showComponentAnimationStage2;
- (void)showComponentAnimationHold1;
- (void)showComponentInitAnimation;
- (unsigned long long)fetchComponentInitAnimationStage;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)componentReportAddExposureCount;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)prepareForAnimation;
- (void)updateContentViewsLayout;
- (void)generateContentViews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

