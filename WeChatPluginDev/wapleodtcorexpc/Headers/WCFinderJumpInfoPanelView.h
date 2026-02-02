//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, WCFinderFeedContentVM;
@protocol WCFinderJumpInfoPanelViewDelegate;

@interface WCFinderJumpInfoPanelView : UIView
{
    _Bool _enableClick;
    int _showPosition;
    WCFinderFeedContentVM *_contentVM;
    id <WCFinderJumpInfoPanelViewDelegate> _delegate;
    NSMutableArray *_jumpInfoViewArray;
    UIFont *_textFont;
    UIColor *_textNormalColor;
    UIColor *_adLabelColor;
    double _bannerPadding;
    double _jumpInfoMargin;
    UIColor *_disableIconColor;
    UIColor *_disableTextColor;
    double _maxWidth;
    unsigned long long _startExposeTime;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startExposeTime; // @synthesize startExposeTime=_startExposeTime;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIColor *disableTextColor; // @synthesize disableTextColor=_disableTextColor;
@property(retain, nonatomic) UIColor *disableIconColor; // @synthesize disableIconColor=_disableIconColor;
@property(nonatomic) _Bool enableClick; // @synthesize enableClick=_enableClick;
@property(nonatomic) double jumpInfoMargin; // @synthesize jumpInfoMargin=_jumpInfoMargin;
@property(nonatomic) double bannerPadding; // @synthesize bannerPadding=_bannerPadding;
@property(retain, nonatomic) UIColor *adLabelColor; // @synthesize adLabelColor=_adLabelColor;
@property(retain, nonatomic) UIColor *textNormalColor; // @synthesize textNormalColor=_textNormalColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) NSMutableArray *jumpInfoViewArray; // @synthesize jumpInfoViewArray=_jumpInfoViewArray;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(nonatomic) __weak id <WCFinderJumpInfoPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)onClickWarningJumpView:(id)arg1;
- (void)clickedCollectionNextEpisodeButton:(id)arg1;
- (void)onClickSubtitleBubble:(id)arg1;
- (void)updateCurLayout:(id)arg1;
- (void)onClickRedCoverBubbleView:(id)arg1;
- (void)onClickClipVideoTemplate;
- (void)onClickEnterLiving:(id)arg1;
- (void)onPresentLiveConcertTicketRequestedWithNoticeInfo:(id)arg1;
- (void)onClickHotSpotView:(id)arg1;
- (id)videoTid;
- (_Bool)videoPauseState;
- (void)onClickAdBannerView:(id)arg1;
- (void)onJumpInfoButtonDidClick:(id)arg1;
- (void)jumpInfoViewDidTapHotZone:(id)arg1 area:(unsigned long long)arg2;
- (void)jumpInfoViewDidTapHotZone:(id)arg1;
- (id)jumpInfoViewWithJumpInfo:(id)arg1 subStyle:(id)arg2;
- (void)onFinderJumpInfoCombinationViewDidClick:(id)arg1;
- (void)finderJumpInfoCarouseView:(id)arg1 didClickCard:(id)arg2;
- (void)finderJumpInfoCarouseView:(id)arg1 changeToCardWithIndex:(long long)arg2;
- (void)onFinderJumpInfoLabelDidClick:(id)arg1;
- (void)onFinderJumpInfoBubbleViewDidClick:(id)arg1;
- (void)onFinderJumpInfoCardDidClick:(id)arg1;
- (void)onFinderJumpInfoDynamicCarouselViewDidClickActionButton:(id)arg1;
- (void)onFinderJumpInfoDynamicCarouselViewDidClickCard:(id)arg1;
- (void)onFinderJumpInfoDynamicCarouselView:(id)arg1 needchangeToPhase:(unsigned long long)arg2;
- (void)onFinderDynamicCardAdViewDidClick:(id)arg1;
- (void)onFinderDynamicCardAdView:(id)arg1 needChangeToPhase:(unsigned long long)arg2;
- (void)onFinderJumpInfoHardAdViewDidClick:(id)arg1;
- (void)onFinderJumpInfoHardAdView:(id)arg1 needChangeToPhase:(unsigned long long)arg2;
- (void)finderJumpInfoView:(id)arg1 needChangeToStyleWithIndex:(unsigned long long)arg2;
- (void)finderJumpInfoView:(id)arg1 changeToShow:(_Bool)arg2 animated:(_Bool)arg3;
- (id)backgroundColorWithJumpInfo:(id)arg1;
- (void)onFinderDidClickBigBtn:(id)arg1;
- (void)hiddenJumpBigFollowBtn:(id)arg1;
- (void)onFinderShowJumpBigFollowBtn:(id)arg1;
- (void)onClickCollectionDesc;
- (void)liveFeedBubbleView:(id)arg1 showNoticeInfo:(id)arg2 username:(id)arg3;
- (void)liveFeedBubbleView:(id)arg1 clickNoticeInfo:(id)arg2 username:(id)arg3;
- (void)onPanelViewShowStateChanged;
- (_Bool)isJumpInfoArrayChanged:(id)arg1;
- (_Bool)needHighlightBigButton:(id)arg1;
- (void)updateLayout;
- (void)setupSubviewLayout:(id)arg1;
- (id)getBypReportChnlExtraForLivingIcon;
- (void)getLivingMarkWithLiveId:(out unsigned long long *)arg1 objectId:(out unsigned long long *)arg2;
- (void)getLivingMarkWithJumpInfo:(out id *)arg1 style:(out id *)arg2;
- (id)getBypReportChnlExtraForNoticeInfo;
- (id)getLiveNoticeInfo;
- (void)getLiveNoticeWithJumpInfo:(out id *)arg1 style:(out id *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateCollectionBubbleWith:(id)arg1;
- (void)updateIsLivingWithTitle:(id)arg1 subTitle:(id)arg2 livingDataItem:(id)arg3;
- (void)updateVideoTemplateIsCameraTemplate:(_Bool)arg1;
- (void)hideLiveAppointment;
- (void)updateLiveAppointmentWith:(id)arg1;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)completePlayAction;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayStateChanged:(_Bool)arg1;
- (void)completionForAppearAnimation;
- (void)changeToAppear:(_Bool)arg1 duration:(double)arg2;
- (void)changeJumpInfoView:(id)arg1 toJumpInfo:(id)arg2 animated:(_Bool)arg3;
- (void)changeJumpInfoViewArray:(id)arg1 toJumpInfoArray:(id)arg2 animated:(_Bool)arg3;
- (void)updateJumpInfoViewMaxWidth:(id)arg1;
- (id)textNormalColorFromJumpInfo:(id)arg1;
- (id)addJumpInfoViewWithJumpInfo:(id)arg1;
- (id)addCarouselViewWithJumpInfoArray:(id)arg1;
- (void)updateWithJumpInfoArray:(id)arg1;
- (id)feedBubbleViewWithOperatingType:(unsigned long long)arg1;
- (unsigned long long)firstOperatingType;
- (id)jumpInfoViewWithBusinessType:(int)arg1;
- (void)resetReuseState;
- (id)initWithShowPosition:(int)arg1 maxWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

