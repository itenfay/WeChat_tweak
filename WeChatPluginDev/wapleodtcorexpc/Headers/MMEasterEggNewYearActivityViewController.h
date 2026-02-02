//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMEasterEggNewYearActivityCardView, MMEasterEggNewYearActivityInfo, MMEasterEggNewYearActivityMaterialInfo, MMEasterEggNewYearActivityReportObject, NSString, UIButton, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, UIScrollView, UIView;
@protocol MMEasterEggNewYearActivityViewControllerDelegate;

@interface MMEasterEggNewYearActivityViewController
{
    _Bool _isFromChatRoom;
    _Bool _canShowCard;
    id <MMEasterEggNewYearActivityViewControllerDelegate> _delegate;
    MMEasterEggNewYearActivityInfo *_activityInfo;
    MMEasterEggNewYearActivityReportObject *_reportObject;
    UIScrollView *_contentView;
    UIImageView *_backgroundLogoView;
    UIButton *_bottomLinkButton;
    UILabel *_bottomSubLabel;
    UIView *_separatorView;
    UIButton *_disableButton;
    UIImageView *_bigLuckyBagView;
    MMEasterEggNewYearActivityCardView *_cardView;
    MMEasterEggNewYearActivityMaterialInfo *_materialInfo;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture; // @synthesize screenEdgePanGesture=_screenEdgePanGesture;
@property(nonatomic) _Bool canShowCard; // @synthesize canShowCard=_canShowCard;
@property(retain, nonatomic) MMEasterEggNewYearActivityMaterialInfo *materialInfo; // @synthesize materialInfo=_materialInfo;
@property(nonatomic) __weak MMEasterEggNewYearActivityCardView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak UIImageView *bigLuckyBagView; // @synthesize bigLuckyBagView=_bigLuckyBagView;
@property(nonatomic) __weak UIButton *disableButton; // @synthesize disableButton=_disableButton;
@property(nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak UILabel *bottomSubLabel; // @synthesize bottomSubLabel=_bottomSubLabel;
@property(nonatomic) __weak UIButton *bottomLinkButton; // @synthesize bottomLinkButton=_bottomLinkButton;
@property(nonatomic) __weak UIImageView *backgroundLogoView; // @synthesize backgroundLogoView=_backgroundLogoView;
@property(nonatomic) __weak UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMEasterEggNewYearActivityReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(nonatomic) _Bool isFromChatRoom; // @synthesize isFromChatRoom=_isFromChatRoom;
@property(retain, nonatomic) MMEasterEggNewYearActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) __weak id <MMEasterEggNewYearActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapActionButton;
- (void)jumpToPageWithType:(unsigned long long)arg1 info:(id)arg2;
- (void)getCouponForAppId:(id)arg1 stockId:(id)arg2;
- (void)openMoneyForMaterialId:(unsigned long long)arg1;
- (void)showCardIfNeeded;
- (void)onTapDisableButton;
- (void)onTapBottomLinkButton;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (id)getResultCardViewAnimation;
- (void)enableBottomLink:(id)arg1;
- (void)layoutButtonLinkButton;
- (void)layoutContentView;
- (void)closeWithError:(id)arg1;
- (void)continueWithMaterialInfo:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (_Bool)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldInteractiveDismiss;
- (_Bool)useTransparentNavibar;
- (void)initGesture;
- (void)initTicking;
- (void)initData;
- (void)initView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithActivityInfo:(id)arg1 reportSessionId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

