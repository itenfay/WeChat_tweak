//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageGridView, NSString, SightIconView, UIImageView, UILabel, WCBizAppReaderMessageBigPicView, WCBizAppReaderMessageBigPicViewModel;

@interface WCContentItemViewTemplateNews
{
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UIImageView *_coverIconView;
    UILabel *_descLabel;
    double _targetMargin;
    double _targetWidth;
    SightIconView *_videoIconView;
    WCBizAppReaderMessageBigPicView *_bizAppBigPicView;
    WCBizAppReaderMessageBigPicViewModel *_bizAppBigPicViewModel;
    long long _bizMpDispalyStyle;
}

+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2 showDetail:(_Bool)arg3;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (id)getTrimDesc:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long bizMpDispalyStyle; // @synthesize bizMpDispalyStyle=_bizMpDispalyStyle;
@property(retain, nonatomic) WCBizAppReaderMessageBigPicViewModel *bizAppBigPicViewModel; // @synthesize bizAppBigPicViewModel=_bizAppBigPicViewModel;
@property(retain, nonatomic) WCBizAppReaderMessageBigPicView *bizAppBigPicView; // @synthesize bizAppBigPicView=_bizAppBigPicView;
@property(retain, nonatomic) SightIconView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) double targetMargin; // @synthesize targetMargin=_targetMargin;
- (void)notifyCanvasViewOutFullScreen:(id)arg1;
- (void)openShareAdCanvas:(id)arg1 fromDetail:(_Bool)arg2 dataItem:(id)arg3;
- (void)reportLinkAdClickWithActionType:(long long)arg1;
- (void)onCloseCanvasPageView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)internalOpenWebView:(id)arg1 plainUrl:(id)arg2 urlString:(id)arg3 endOpInfo:(id)arg4;
- (void)throwUrlMessage;
- (void)reportEcsData:(id)arg1 dataItem:(id)arg2;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)dealloc;
- (void)onClickWCImage:(id)arg1;
- (void)layoutDefault;
- (void)layoutBizAppBigPicViews;
- (void)layoutSubviews;
- (void)cancelNotShowTheUrlAgain;
- (void)confirmNotShowTheUrlAgain;
- (void)onTryNotShowTheUrlAgain:(id)arg1;
- (_Bool)canShowForwardMenuItem;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (_Bool)isAsk;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)initBizAppBigPicViewWithViewModel:(id)arg1;
- (void)initTemplateNewsViewWithWCDataItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

