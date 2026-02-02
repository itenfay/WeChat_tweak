//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetWxaGameConfigResponse_WxagGameReviewsConfig, MMUIButton, MMUILabel, MMUIView, MMWebImageView, NSString, UIView;
@protocol WAGameReviewPopSheetDelegate;

@interface WAGameReviewPopSheet
{
    NSString *_appId;
    unsigned int _appVersion;
    unsigned int _appState;
    MMUIView *_interactView;
    MMUIView *_sheetView;
    MMWebImageView *_badgeImgView;
    MMUILabel *_summaryLabel;
    MMUILabel *_detailLabel;
    MMUILabel *_commentLabel;
    MMUIButton *_closeButton;
    MMUIButton *_jumpButton;
    GetWxaGameConfigResponse_WxagGameReviewsConfig *_config;
    id <WAGameReviewPopSheetDelegate> _delegate;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <WAGameReviewPopSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onClickJumpButton:(id)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)resetSheetViewCornerRadius;
- (id)jumpButton;
- (id)closeButton;
- (void)genSheetView;
- (void)addInteractView;
- (double)sheetViewHeight;
- (double)sheetViewWidth;
- (double)sheetViewX;
- (double)sheetViewY;
- (void)releaseViews;
- (void)dismissWithWithoutAnimation;
- (void)relayoutWhenResize;
- (void)showInView:(id)arg1;
- (id)initWithAppid:(id)arg1 appVersion:(unsigned long long)arg2 appState:(unsigned int)arg3 Config:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

