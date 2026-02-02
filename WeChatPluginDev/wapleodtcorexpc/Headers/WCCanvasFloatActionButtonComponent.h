//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIImageView, UIVisualEffectView, WCCanvasComponent;

@interface WCCanvasFloatActionButtonComponent
{
    UIImageView *_iconView;
    RichTextView *_titleView;
    RichTextView *_descView;
    UIImageView *_backgroundImgView;
    UIVisualEffectView *_backgroundBlurView;
    WCCanvasComponent *_buttonComponent;
    double _appearPaddingTop;
    double _appearPaddingBottom;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) double appearPaddingBottom; // @synthesize appearPaddingBottom=_appearPaddingBottom;
@property(nonatomic) double appearPaddingTop; // @synthesize appearPaddingTop=_appearPaddingTop;
@property(retain, nonatomic) WCCanvasComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;
@property(retain, nonatomic) UIVisualEffectView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
@property(retain, nonatomic) RichTextView *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) RichTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (id)fetchComponentColorFor:(unsigned long long)arg1;
- (void)initBackgroundWithBlurEffect;
- (void)loadBackgroundImgResource;
- (void)initBackgroundImgWithUrl;
- (void)loadIconResource;
- (void)updateContentsLayout;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)initFullViewBtn;
- (double)fetchMaxWidthForContent;
- (id)createTextViewWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4;
- (void)initDescView;
- (void)initTitleView;
- (void)initIconView;
- (void)initButtonComponent;
- (void)initBackgroundStyle;
- (void)initViews;
- (void)componentReportAddExposureCount;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

