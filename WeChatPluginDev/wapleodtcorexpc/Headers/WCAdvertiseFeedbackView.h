//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, MMUIView, NSMutableArray, NSString, UIButton, WCDataItem;

@interface WCAdvertiseFeedbackView
{
    _Bool _hasDislikeInfo;
    _Bool _onAnimation;
    _Bool _isIndicatorBeRotate;
    _Bool _isSpecialAd;
    _Bool _showGuideAdManage;
    WCDataItem *_dataItem;
    NSString *_feedbackTitle;
    MMUIView *_bgView;
    MMUIView *_containerView;
    MMUIView *_panelView;
    MMUIImageView *_indicatorView;
    MMUIView *_reasonBtnContainerView;
    MMUILabel *_titleView;
    MMUILabel *_descView;
    UIButton *_confirmBtn;
    MMUIView *_cutOffLine;
    UIButton *_complainBtn;
    NSMutableArray *_reasonBtnArray;
    NSMutableArray *_defaultFeedbackBtnArray;
    UIButton *_guideAdManageBtn;
    NSString *_toastTitleOnHide;
    NSString *_specialAdWording;
    NSString *_adManageUrl;
    struct CGPoint _clickPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adManageUrl; // @synthesize adManageUrl=_adManageUrl;
@property(nonatomic) _Bool showGuideAdManage; // @synthesize showGuideAdManage=_showGuideAdManage;
@property(retain, nonatomic) NSString *specialAdWording; // @synthesize specialAdWording=_specialAdWording;
@property(nonatomic) _Bool isSpecialAd; // @synthesize isSpecialAd=_isSpecialAd;
@property(nonatomic) _Bool isIndicatorBeRotate; // @synthesize isIndicatorBeRotate=_isIndicatorBeRotate;
@property(nonatomic) _Bool onAnimation; // @synthesize onAnimation=_onAnimation;
@property(retain, nonatomic) NSString *toastTitleOnHide; // @synthesize toastTitleOnHide=_toastTitleOnHide;
@property(retain, nonatomic) UIButton *guideAdManageBtn; // @synthesize guideAdManageBtn=_guideAdManageBtn;
@property(retain, nonatomic) NSMutableArray *defaultFeedbackBtnArray; // @synthesize defaultFeedbackBtnArray=_defaultFeedbackBtnArray;
@property(retain, nonatomic) NSMutableArray *reasonBtnArray; // @synthesize reasonBtnArray=_reasonBtnArray;
@property(retain, nonatomic) UIButton *complainBtn; // @synthesize complainBtn=_complainBtn;
@property(retain, nonatomic) MMUIView *cutOffLine; // @synthesize cutOffLine=_cutOffLine;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIView *reasonBtnContainerView; // @synthesize reasonBtnContainerView=_reasonBtnContainerView;
@property(retain, nonatomic) MMUIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) MMUIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMUIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) struct CGPoint clickPoint; // @synthesize clickPoint=_clickPoint;
@property(nonatomic) _Bool hasDislikeInfo; // @synthesize hasDislikeInfo=_hasDislikeInfo;
@property(retain, nonatomic) NSString *feedbackTitle; // @synthesize feedbackTitle=_feedbackTitle;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (_Bool)needShowGuideAdManage;
- (void)adjustTitleAndDescLabelWidth;
- (void)setGuideAdManageTitleAndDesc;
- (void)setNegativeTileAndDesc;
- (void)notifyFeedbackViewDisappear:(id)arg1;
- (void)addCornersToPanelView;
- (void)setContainerFrame:(_Bool)arg1;
- (void)checkAndSetContainerFrame;
- (void)setupComplainView:(id)arg1;
- (void)layoutGuideAdManageButtonWithOffsetY:(double)arg1;
- (void)layoutReasonBtn:(id)arg1 andOffsetY:(double)arg2;
- (void)layoutSpecialAdPanelView;
- (void)layoutPanelView:(_Bool)arg1;
- (id)fetchSelectedReasonButtonList;
- (void)updateConfirmButtonTitle:(id)arg1 weakStyle:(_Bool)arg2;
- (void)checkAndSetConfirmButtonState;
- (void)onClickNegativeReasonButton:(id)arg1;
- (void)onClickPositiveButton;
- (void)onClickNegativeButton;
- (void)onClickReasonBtn:(id)arg1;
- (void)onClickGuideAdManageBtn:(id)arg1;
- (void)onClickComplainBtn;
- (void)onClickConfirmBtn;
- (void)onTapBackground;
- (void)initGuideAdManageButton;
- (id)genReasonBtnWithReason:(id)arg1 iconSVG:(id)arg2;
- (void)initReasonButtons;
- (void)initDefaultFeedbackButtons;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (void)hideInnerWithToast:(id)arg1;
- (void)hideInner;
- (void)initSpecialAdView;
- (void)initSubview;
- (void)initFeedBackData;
- (void)initRootViewController;
- (void)dealloc;
- (void)hide;
- (void)show;
- (id)initWithData:(id)arg1 andClickPoint:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

