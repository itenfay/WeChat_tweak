//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, MMUIView, NSString, UIView, WAProfileRatingView;
@protocol WAEvaluatePopSheetDelegate;

@interface WAEvaluatePopSheet
{
    NSString *_appId;
    NSString *_weAppName;
    MMUIView *_interactView;
    WAProfileRatingView *_ratingView;
    MMUIView *_evaluteWhiteView;
    MMUIView *_wechatLogoView;
    MMUILabel *_descLabel;
    MMUILabel *_ratingTipsLabel;
    MMUIButton *_commitButton;
    _Bool _bScoreChanged;
    id <WAEvaluatePopSheetDelegate> _delegate;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <WAEvaluatePopSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCommitButtonClicked;
- (void)onInteractViewTap;
- (void)onCloseButtonClick;
- (id)getInviteTextWithTruncateWithFont:(id)arg1;
- (void)onEvaluateScoreChanged:(id)arg1;
- (void)addInteractView;
- (id)genWechatLogoView;
- (void)genEvaluateWhiteView;
- (void)dismissWithWithoutAnimation;
- (void)showInView:(id)arg1;
- (double)evaluateViewWidth;
- (void)resetEvaluateViewCornerRadius;
- (void)relayoutWhenResize;
- (void)_releaseViews;
- (id)initWithAppid:(id)arg1 WeAppName:(id)arg2;

@end

