//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebViewController, NSString, UILabel, WCAdvertiseInfo, WCCanvasComponent, WCCanvasComponentHalfRandomCardItemInfo, WCCanvasHalfRandomSubCardBulletCommentsView, WCFinderEmptyTipsView;
@protocol WCCanvasComponentDelegate, WCCanvasHalfRandomSubCardDelegate;

@interface WCCanvasHalfRandomSubCard : UIView
{
    id <WCCanvasHalfRandomSubCardDelegate> _delegate;
    WCCanvasComponentHalfRandomCardItemInfo *_itemInfo;
    UILabel *_preTitleView;
    UILabel *_titleView;
    UILabel *_descView;
    WCCanvasComponent *_contentItemComponent;
    WCCanvasComponent *_buttonItemComponent;
    WCCanvasHalfRandomSubCardBulletCommentsView *_bulletCommentsView;
    MMWebViewController *_webViewController;
    WCFinderEmptyTipsView *_emptyTipsView;
    WCAdvertiseInfo *_advertiseInfo;
    long long _orientation;
    id <WCCanvasComponentDelegate> _componentDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCanvasComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) WCCanvasHalfRandomSubCardBulletCommentsView *bulletCommentsView; // @synthesize bulletCommentsView=_bulletCommentsView;
@property(retain, nonatomic) WCCanvasComponent *buttonItemComponent; // @synthesize buttonItemComponent=_buttonItemComponent;
@property(retain, nonatomic) WCCanvasComponent *contentItemComponent; // @synthesize contentItemComponent=_contentItemComponent;
@property(retain, nonatomic) UILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UILabel *preTitleView; // @synthesize preTitleView=_preTitleView;
@property(retain, nonatomic) WCCanvasComponentHalfRandomCardItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(nonatomic) __weak id <WCCanvasHalfRandomSubCardDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fetchBulletComments;
- (id)fetchBulletCommentsTitle;
- (_Bool)shouldShowBulletCommentsView;
- (int)onSubCardBulletCommentsViewFetchCanvasFinderCommentScene;
- (id)onSubCardBulletCommentsViewFetchCanvasItemCardId;
- (id)onSubCardBulletCommentsViewFetchCanvasPageId;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (id)fetchRequestUrlWithUrl:(id)arg1 andUpdateExtraInfo:(inout id)arg2;
- (void)initWebView;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)componentReportAddExposureCount;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentDidFullyAppearInMainScreen:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillAppearInMainScreen:(_Bool)arg1;
- (void)setSubviewsHidden:(_Bool)arg1;
- (struct CGSize)calcBulletCommentsViewSizeWithMaxWidth:(double)arg1;
- (struct CGSize)getContentItemSizeWithHeightRemain:(double)arg1;
- (void)setContentItemSize:(struct CGSize)arg1;
- (double)calcRealHeightFor:(double)arg1;
- (double)fetchLineHeightForText:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)prepareComponentsInfo;
- (id)initWithFrame:(struct CGRect)arg1 itemInfo:(id)arg2 delegate:(id)arg3 componentDelegate:(id)arg4 advertiseInfo:(id)arg5 orientation:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

