//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString, UIView;

@interface MMFinderScreenRecordWebTipView
{
    UIView *_contentView;
    MMWebViewController *_webViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)createUI;
- (void)initWebView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

