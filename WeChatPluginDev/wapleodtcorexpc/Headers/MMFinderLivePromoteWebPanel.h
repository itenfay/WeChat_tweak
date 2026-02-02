//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveWebPageSheetParams, MMUIButton, MMWebViewController, NSString, UIView;

@interface MMFinderLivePromoteWebPanel
{
    NSString *_adapterUrl;
    MMWebViewController *_webVC;
    MMFinderLiveWebPageSheetParams *_params;
    double _contentHeight;
    UIView *_contentView;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) MMFinderLiveWebPageSheetParams *params; // @synthesize params=_params;
@property(retain, nonatomic) MMWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) NSString *adapterUrl; // @synthesize adapterUrl=_adapterUrl;
- (void)leftButtonAction;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (id)parentNavigationItemWithWebview:(id)arg1;
- (void)updatePromoteWebPanelWithUrl:(id)arg1 contentViewHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

