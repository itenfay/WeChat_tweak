//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, FinderLiveNoticeInfo, MMFinderLiveFeedNoticeColumnView, MMFinderLiveMultiCouponForNoticeView, MMFinderLiveNoticeDetailPayView, MMLiveShopShelfDragBar, MMPaddingView, MMUIButton, MMUIImageView, MMUILabel, MMWebImageView, NSString, UILabel, UIScrollView, UIView, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLiveFeedNoticeDetailView
{
    _Bool _isLive;
    _Bool _showHideButton;
    _Bool _isLandscape;
    _Bool _folding;
    int _reportScene;
    CDUnknownBlockType _actionButtonBlock;
    CDUnknownBlockType _unLikeButtonBlock;
    CDUnknownBlockType _onReceiveCouponButtonBlock;
    NSString *_customActionTitleForUnreservedFreeNotice;
    WCFinderContact *_anchorContact;
    FinderLiveNoticeInfo *_noticeInfo;
    UIView *_cardView;
    MMUIImageView *_cardImageView;
    UIView *_cardContentView;
    UIScrollView *_contentScrollView;
    UIView *_contentView;
    MMLiveShopShelfDragBar *_dragBar;
    WCFinderHeadImageView *_anchorAvatarView;
    MMUIButton *_anchorDisplayNameButton;
    MMWebImageView *_anchorVerificationStatusView;
    UILabel *_noticeRecommendationLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMUIButton *_actionButton;
    MMUIButton *_unLikeButton;
    MMUILabel *_couponStateLabel;
    MMPaddingView *_couponLabel;
    MMFinderLiveMultiCouponForNoticeView *_multiCouponView;
    MMFinderLiveNoticeDetailPayView *_noticeDetailPayVIew;
    CAGradientLayer *_gradientLayer;
    MMFinderLiveFeedNoticeColumnView *_columnView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFeedNoticeColumnView *columnView; // @synthesize columnView=_columnView;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) _Bool folding; // @synthesize folding=_folding;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) MMFinderLiveNoticeDetailPayView *noticeDetailPayVIew; // @synthesize noticeDetailPayVIew=_noticeDetailPayVIew;
@property(retain, nonatomic) MMFinderLiveMultiCouponForNoticeView *multiCouponView; // @synthesize multiCouponView=_multiCouponView;
@property(retain, nonatomic) MMPaddingView *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) MMUILabel *couponStateLabel; // @synthesize couponStateLabel=_couponStateLabel;
@property(retain, nonatomic) MMUIButton *unLikeButton; // @synthesize unLikeButton=_unLikeButton;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *noticeRecommendationLabel; // @synthesize noticeRecommendationLabel=_noticeRecommendationLabel;
@property(retain, nonatomic) MMWebImageView *anchorVerificationStatusView; // @synthesize anchorVerificationStatusView=_anchorVerificationStatusView;
@property(retain, nonatomic) MMUIButton *anchorDisplayNameButton; // @synthesize anchorDisplayNameButton=_anchorDisplayNameButton;
@property(retain, nonatomic) WCFinderHeadImageView *anchorAvatarView; // @synthesize anchorAvatarView=_anchorAvatarView;
@property(retain, nonatomic) MMLiveShopShelfDragBar *dragBar; // @synthesize dragBar=_dragBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) MMUIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) _Bool showHideButton; // @synthesize showHideButton=_showHideButton;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) NSString *customActionTitleForUnreservedFreeNotice; // @synthesize customActionTitleForUnreservedFreeNotice=_customActionTitleForUnreservedFreeNotice;
@property(copy, nonatomic) CDUnknownBlockType onReceiveCouponButtonBlock; // @synthesize onReceiveCouponButtonBlock=_onReceiveCouponButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType unLikeButtonBlock; // @synthesize unLikeButtonBlock=_unLikeButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType actionButtonBlock; // @synthesize actionButtonBlock=_actionButtonBlock;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onActionButtonClicked:(id)arg1 view:(id)arg2;
- (id)getGradientLayer:(struct CGRect)arg1 radio1:(double)arg2 radio2:(double)arg3;
- (void)updateGradientLayer:(_Bool)arg1;
- (void)anchorAvatarViewClick;
- (void)executeActionBlock:(_Bool)arg1;
- (void)actionButtonClick;
- (void)unLikeButtonClick;
- (void)openWebViewController:(id)arg1 fromNav:(id)arg2 closeCompletion:(CDUnknownBlockType)arg3;
- (void)onHideButtonReport:(_Bool)arg1;
- (void)onColumnButtonReport:(_Bool)arg1;
- (void)onColumnButtonClick:(id)arg1;
- (double)getCurrentTotalHeight;
- (double)contentViewHeight;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)createUI;
- (double)getTitleLabelTop;
- (void)layoutUI;
- (void)updateNoticeView:(id)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1;
- (double)getFootContentHeight:(id)arg1;
- (_Bool)showColumnView:(id)arg1;
- (void)updateCouponViews:(id)arg1;
- (void)updateWithNoticeInfo:(id)arg1;
- (void)updateActionButtonWhenFree:(id)arg1;
- (void)updateActionButtonWhenNeedPay:(id)arg1;
- (void)updateUnLikeButton:(_Bool)arg1;
- (void)updateActionButton:(id)arg1;
- (void)updateWithAnchorFinderContact:(id)arg1 noticeInfo:(id)arg2 isLive:(_Bool)arg3 showHideButton:(_Bool)arg4 reportScene:(int)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

