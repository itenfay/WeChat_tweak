//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIView, WCImageView;

@interface WCContentItemViewTemplateRedEnvelopesV4
{
    WCImageView *_imageView;
    UIButton *_imageButton;
    MMUILabel *_moneyLabel;
    MMUILabel *_rmbLabel;
    UIView *_blurView;
    _Bool _bTimeLineScene;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (struct CGSize)getImageSize:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool bTimeLineScene; // @synthesize bTimeLineScene=_bTimeLineScene;
- (void)onShowGreetingEntry;
- (void)jumpDetailView;
- (void)onShowDetailView;
- (void)OnSuccessGreetingCallback;
- (void)onShowGreetingView;
- (void)showGreetingView;
- (_Bool)isCurTopViewControllerMatchTheScene;
- (id)getNSStringFromTopViewControllerClass;
- (id)getTopViewController;
- (id)getTimeLineViewController;
- (void)onDownloadFinish:(id)arg1;
- (void)onExposeFromImage:(id)arg1;
- (void)hideMenu;
- (void)onLongPressedWCImage:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onClickWCImage:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)onReceiveRedEnvelopesClick;
- (void)onImageBtnClick:(id)arg1;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)updateImageButtonView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

