//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSDictionary, NSString, WCFinderEmptyTipsView, WCFinderJumpInfo;
@protocol WCFinderCardWebViewControllerDelegate;

@interface WCFinderCardWebViewController
{
    id <WCFinderCardWebViewControllerDelegate> _finderDelegate;
    NSDictionary *_envDict;
    MMWebViewController *_webViewController;
    WCFinderEmptyTipsView *_emptyTipsView;
    NSString *_url;
    NSString *_uxinfo;
    WCFinderJumpInfo *_jumpInfo;
    long long _viewControllerCount;
    unsigned long long _jumpInfoPos;
    double _heightRatio;
}

+ (double)heightInFullScreenMode;
- (void).cxx_destruct;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(nonatomic) unsigned long long jumpInfoPos; // @synthesize jumpInfoPos=_jumpInfoPos;
@property(nonatomic) long long viewControllerCount; // @synthesize viewControllerCount=_viewControllerCount;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSDictionary *envDict; // @synthesize envDict=_envDict;
@property(nonatomic) __weak id <WCFinderCardWebViewControllerDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)getHalfDismissTransition;
- (_Bool)isHideBackgroupMask;
- (_Bool)isHideBorderShadow;
- (id)getHalfTransformView;
- (id)getHalfContainerView;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)reportUniversalJumperWithJumperInfo:(id)arg1 eventType:(unsigned long long)arg2;
- (void)updateFinderUI;
- (void)initWebView;
- (_Bool)needCloseOnOrientationChanged;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (void)setIsFixedHeight:(_Bool)arg1;
- (void)updateWithUrl:(id)arg1;
- (void)updateWithJumpInfo:(id)arg1 params:(id)arg2;
- (_Bool)useTransparentNavibar;
- (void)willJumpToOthers;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

