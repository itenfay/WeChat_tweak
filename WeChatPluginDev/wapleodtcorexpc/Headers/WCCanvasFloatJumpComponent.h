//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, WCCanvasComponent;

@interface WCCanvasFloatJumpComponent
{
    MMUILabel *_titleView;
    MMUIImageView *_iconView;
    WCCanvasComponent *_buttonComponent;
    long long _jumpCount;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long jumpCount; // @synthesize jumpCount=_jumpCount;
@property(retain, nonatomic) WCCanvasComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;
@property(retain, nonatomic) MMUIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)initBgButton;
- (void)initTitleView;
- (void)initButtonComponent;
- (void)initViews;
- (void)componentReportAddExposureCount;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;

@end

