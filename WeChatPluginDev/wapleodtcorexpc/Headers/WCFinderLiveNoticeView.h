//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveNoticeInfo, FinderLiveNoticeListInfo, MMPaddingView, MMUIButton, NSString, RichTextView, UIColor, UIImageView, UILabel, WCFinderLiveNoticePayActionView, WCFinderLiveNoticeViewItemView;
@protocol WCFinderLiveNoticeViewDelegate;

@interface WCFinderLiveNoticeView : UIView
{
    _Bool _isAuthor;
    _Bool _introductionExpandable;
    _Bool _showCoveredStyle;
    _Bool _displayArrow;
    _Bool _hideActionButton;
    _Bool _isInList;
    _Bool _isMemberVisitant;
    _Bool _isStartReminder;
    id <WCFinderLiveNoticeViewDelegate> _delegate;
    FinderLiveNoticeInfo *_noticeInfo;
    FinderLiveNoticeListInfo *_noticeList;
    long long _introductionStyle;
    UIColor *_btnBGColor;
    unsigned long long _openScene;
    WCFinderLiveNoticeViewItemView *_mainNoticeItemView;
    UIImageView *_liveLogoView;
    UILabel *_noticeTimeLabel;
    RichTextView *_noticeIntroductionTextView;
    UILabel *_noticeRecommendationReasonLabel;
    UILabel *_bookingNumberLabel;
    UIView *_splitLineView;
    UIColor *_actionTextColor;
    UILabel *_topLabel;
    MMUIButton *_actionButton;
    WCFinderLiveNoticePayActionView *_payActionView;
    WCFinderLiveNoticeViewItemView *_moreNoticesItemView;
    UILabel *_moreNoticesLabel;
    UILabel *_couponsStateView;
    MMPaddingView *_couponsTitleLabel;
    UIColor *_profileActionTextColor;
    NSString *_anchorUsername;
    struct UIEdgeInsets _contentInsets;
}

+ (double)getTopLabelHeight:(_Bool)arg1;
+ (unsigned long long)lineNumbersForIntroductionStyle:(long long)arg1;
+ (id)getStartTimeText:(id)arg1;
+ (id)generateDisplayedIntroductionContentForInfo:(id)arg1 introductionStyle:(long long)arg2;
+ (_Bool)showsMoreNoticesWithNoticeList:(id)arg1;
+ (id)getReserveString:(id)arg1;
+ (id)getTitleFont:(_Bool)arg1;
+ (double)heightWithIdentity:(_Bool)arg1 noticeInfo:(id)arg2 noticeList:(id)arg3 width:(double)arg4 introductionStyle:(long long)arg5 isInList:(_Bool)arg6 memberVisitant:(_Bool)arg7 isStartReminder:(_Bool)arg8;
+ (double)heightWithIdentity:(_Bool)arg1 noticeInfo:(id)arg2 noticeList:(id)arg3 width:(double)arg4 introductionStyle:(long long)arg5 isInList:(_Bool)arg6 memberVisitant:(_Bool)arg7 isStartReminder:(_Bool)arg8 displayLiveTimeOnSingleLine:(_Bool)arg9;
+ (double)detailViewMarginRightWithIsAuthor:(_Bool)arg1 isInList:(_Bool)arg2 isStartReminder:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
@property(retain, nonatomic) UIColor *profileActionTextColor; // @synthesize profileActionTextColor=_profileActionTextColor;
@property(retain, nonatomic) MMPaddingView *couponsTitleLabel; // @synthesize couponsTitleLabel=_couponsTitleLabel;
@property(retain, nonatomic) UILabel *couponsStateView; // @synthesize couponsStateView=_couponsStateView;
@property(retain, nonatomic) UILabel *moreNoticesLabel; // @synthesize moreNoticesLabel=_moreNoticesLabel;
@property(retain, nonatomic) WCFinderLiveNoticeViewItemView *moreNoticesItemView; // @synthesize moreNoticesItemView=_moreNoticesItemView;
@property(retain, nonatomic) WCFinderLiveNoticePayActionView *payActionView; // @synthesize payActionView=_payActionView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UIColor *actionTextColor; // @synthesize actionTextColor=_actionTextColor;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UILabel *bookingNumberLabel; // @synthesize bookingNumberLabel=_bookingNumberLabel;
@property(retain, nonatomic) UILabel *noticeRecommendationReasonLabel; // @synthesize noticeRecommendationReasonLabel=_noticeRecommendationReasonLabel;
@property(retain, nonatomic) RichTextView *noticeIntroductionTextView; // @synthesize noticeIntroductionTextView=_noticeIntroductionTextView;
@property(retain, nonatomic) UILabel *noticeTimeLabel; // @synthesize noticeTimeLabel=_noticeTimeLabel;
@property(retain, nonatomic) UIImageView *liveLogoView; // @synthesize liveLogoView=_liveLogoView;
@property(retain, nonatomic) WCFinderLiveNoticeViewItemView *mainNoticeItemView; // @synthesize mainNoticeItemView=_mainNoticeItemView;
@property(nonatomic) _Bool isStartReminder; // @synthesize isStartReminder=_isStartReminder;
@property(nonatomic) _Bool isMemberVisitant; // @synthesize isMemberVisitant=_isMemberVisitant;
@property(nonatomic) _Bool isInList; // @synthesize isInList=_isInList;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(nonatomic) _Bool hideActionButton; // @synthesize hideActionButton=_hideActionButton;
@property(retain, nonatomic) UIColor *btnBGColor; // @synthesize btnBGColor=_btnBGColor;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) _Bool displayArrow; // @synthesize displayArrow=_displayArrow;
@property(nonatomic) _Bool showCoveredStyle; // @synthesize showCoveredStyle=_showCoveredStyle;
@property(nonatomic) long long introductionStyle; // @synthesize introductionStyle=_introductionStyle;
@property(nonatomic) _Bool introductionExpandable; // @synthesize introductionExpandable=_introductionExpandable;
@property(retain, nonatomic) FinderLiveNoticeListInfo *noticeList; // @synthesize noticeList=_noticeList;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) __weak id <WCFinderLiveNoticeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)getkContentPaddingVertical;
- (double)getkContentSpacingVertical;
- (double)getCardTitlePaddingLeft;
- (double)getCardTitleIconPadding;
- (_Bool)needShowNoticeIntroductionTextView:(id)arg1;
- (id)cardAccessibilityLabel;
- (void)updateCardAccessibility;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onMoreNoticesButtonClicked:(id)arg1;
- (void)onMainNoticeButtonClicked:(id)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (void)resetIntroductionStyleIfNeeded;
- (void)shrinkIntroductionTextView;
- (void)expandIntroductionTextView;
- (_Bool)displayTimeInSingleLine;
- (_Bool)isOpenFromMember;
- (_Bool)enableShowActionButton;
- (void)updateActionButtonWhenFree;
- (void)updateActionButtonWhenNeedPay;
- (void)updateActionButton;
- (void)flashNoticeViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)showColumnView:(id)arg1;
- (void)onCouponDidUpdate:(id)arg1;
- (void)updateWithIdentity:(_Bool)arg1 anchorFinderUsername:(id)arg2 noticeInfo:(id)arg3 noticeList:(id)arg4 isInList:(_Bool)arg5 memberVisitant:(_Bool)arg6 isStartReminder:(_Bool)arg7;
- (id)getCurrentActionTextColor;
- (void)updateProfileActionTextColor:(id)arg1;
- (double)getArrowPaddingRightWhenNotInList;
- (void)layoutSubviews;
- (void)initSubviews;
- (_Bool)showsMoreNotices;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)getDescColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

