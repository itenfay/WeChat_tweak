//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSRegularExpression, NSString, UIButton, UIColor, WCFinderHeadImageView, WCFinderImageRedDotBaseView, WCFinderLinearView, WCFinderProfileReporter, WCFinderProfileWarnningView, WCFinderSteamProfileHeaderTheme, WCFinderStreamProfileHeadData, WCFinderStreamProfileHeaderViewMeasure;
@protocol WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate;

@interface WCFinderStreamProfileHeaderView : UIView
{
    _Bool limitOne;
    _Bool _headerRightContainerAlignTop;
    WCFinderProfileReporter *_reporter;
    WCFinderSteamProfileHeaderTheme *_theme;
    id <WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate> _delegate;
    WCFinderStreamProfileHeaderViewMeasure *_measure;
    UIColor *_darkBtnBGColor;
    WCFinderStreamProfileHeadData *_viewModel;
    UIView *_headerImageContainer;
    UIView *_headerRightContainer;
    WCFinderHeadImageView *_headImageView;
    NSString *_headerImageUrl;
    WCFinderProfileWarnningView *_warnningView;
    WCFinderImageRedDotBaseView *_moreActionButton;
    UIButton *_followButton;
    WCFinderLinearView *_userNameInfoContainer;
    WCFinderLinearView *_nameAreaContainer;
    UIView *_infoContainer;
    NSMutableDictionary *_customItemInsets;
    NSMutableDictionary *_infoItemInsets;
    NSMutableDictionary *_specialPadding;
    NSMutableDictionary *_customLayoutFuncBlockMap;
    NSMutableDictionary *_redDotChangeNotifyBlocks;
    NSRegularExpression *_signatureIgnoreEmailRegex;
}

+ (id)parseJumpInfoTailIcon:(id)arg1 size:(struct CGSize *)arg2 padding:(double *)arg3;
+ (_Bool)supportDarkModel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *signatureIgnoreEmailRegex; // @synthesize signatureIgnoreEmailRegex=_signatureIgnoreEmailRegex;
@property(retain, nonatomic) NSMutableDictionary *redDotChangeNotifyBlocks; // @synthesize redDotChangeNotifyBlocks=_redDotChangeNotifyBlocks;
@property(retain, nonatomic) NSMutableDictionary *customLayoutFuncBlockMap; // @synthesize customLayoutFuncBlockMap=_customLayoutFuncBlockMap;
@property(retain, nonatomic) NSMutableDictionary *specialPadding; // @synthesize specialPadding=_specialPadding;
@property(retain, nonatomic) NSMutableDictionary *infoItemInsets; // @synthesize infoItemInsets=_infoItemInsets;
@property(retain, nonatomic) NSMutableDictionary *customItemInsets; // @synthesize customItemInsets=_customItemInsets;
@property(retain, nonatomic) UIView *infoContainer; // @synthesize infoContainer=_infoContainer;
@property(retain, nonatomic) WCFinderLinearView *nameAreaContainer; // @synthesize nameAreaContainer=_nameAreaContainer;
@property(retain, nonatomic) WCFinderLinearView *userNameInfoContainer; // @synthesize userNameInfoContainer=_userNameInfoContainer;
@property(nonatomic) __weak UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) WCFinderImageRedDotBaseView *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) WCFinderProfileWarnningView *warnningView; // @synthesize warnningView=_warnningView;
@property(retain, nonatomic) NSString *headerImageUrl; // @synthesize headerImageUrl=_headerImageUrl;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool headerRightContainerAlignTop; // @synthesize headerRightContainerAlignTop=_headerRightContainerAlignTop;
@property(retain, nonatomic) UIView *headerRightContainer; // @synthesize headerRightContainer=_headerRightContainer;
@property(retain, nonatomic) UIView *headerImageContainer; // @synthesize headerImageContainer=_headerImageContainer;
@property(retain, nonatomic) WCFinderStreamProfileHeadData *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIColor *darkBtnBGColor; // @synthesize darkBtnBGColor=_darkBtnBGColor;
@property(retain, nonatomic) WCFinderStreamProfileHeaderViewMeasure *measure; // @synthesize measure=_measure;
@property(nonatomic) __weak id <WCFinderStreamProfileHeaderViewDelegate><WCFinderStreamProfileHeaderViewSizeToFitDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) WCFinderProfileReporter *reporter; // @synthesize reporter=_reporter;
- (void)onRichView:(id)arg1 expandChanged:(_Bool)arg2;
- (long long)currentMMUserInterfaceStyle;
- (long long)overrideUserInterfaceStyle;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onHeaderViewCoverChanged:(long long)arg1;
- (void)onHeaderViewModelChanged;
- (void)sizeToFit;
- (void)onNameLineAreaHeightChange;
- (double)layoutInfoContainer;
- (void)layoutuserNameInfoContainer:(double)arg1;
- (double)containerMaxWidth;
- (void)layoutHeaderRightView:(double *)arg1;
- (double)layoutHeaderArea;
- (double)layoutElements;
- (void)onClickServiceMenuItem:(id)arg1;
- (void)setupClubMember;
- (_Bool)hiddenMessageButton;
- (id)serviceKFJumpInfo;
- (_Bool)showServiceWecomKF;
- (_Bool)showWecomKF;
- (id)buttonTitleColor;
- (void)setupButtonIconTextPadding:(id)arg1 padding:(double)arg2;
- (void)setupNormalButtonBackground:(id)arg1;
- (void)setupLiveButton:(id)arg1;
- (void)setupNewLifeButton:(id)arg1;
- (void)setupPostActionButton:(id)arg1;
- (void)setupWecomKFButton:(id)arg1;
- (void)setupMemberZoneButton:(id)arg1;
- (void)setupAddWechatButton:(id)arg1;
- (void)setupMsgButton:(id)arg1;
- (struct CGRect)followButtonFrame;
- (void)setupFollowButton:(id)arg1;
- (void)setupPostTipsView;
- (void)setupButtons;
- (void)setupMusicInfo;
- (void)setupStoreActionButton:(id)arg1;
- (void)setupFollowRecommend:(id)arg1;
- (void)setupServiceView;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)setupCards;
- (void)settupSuperTingRadioView;
- (void)setupWinterOlympicsView;
- (void)setupMiniApp;
- (void)setupStoreView;
- (void)setupAddFriendView;
- (void)setupBrandInfoView;
- (void)setupPOIView;
- (void)setupFans;
- (void)setupShowInWXProfile;
- (void)setupFollowCount;
- (id)userAccountInfo;
- (void)setupMomentsCount;
- (void)setupOriginalStatement;
- (void)setupIPMCN;
- (id)signatureDisplayText;
- (void)setupSignature;
- (void)setupSignatureGuide;
- (void)setupGameAchievement;
- (id)createTagLabel;
- (void)setupPostButton:(id)arg1;
- (_Bool)shouldShowPostButton;
- (_Bool)setupMoreMoreButton:(id)arg1;
- (void)setupHeaderRightButtons;
- (void)setupThiredLines;
- (id)displayAuthInfoText:(id)arg1;
- (void)setupAuthViews;
- (void)setupNameLineViews;
- (void)setupHeaderView;
- (void)setupWarnningView;
- (void)updateWithViewModel:(id)arg1;
- (void)updateActionButton:(id)arg1 color:(id)arg2;
- (id)createMaskButtonWithHeight:(double)arg1 maskColor:(id)arg2;
- (id)createNormalIconArrowField:(id)arg1;
- (id)createIconArrowField:(id)arg1;
- (id)createLinkIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createColorIconArrowField:(id)arg1 coveredIcon:(id)arg2;
- (id)createLabel:(id)arg1 color:(id)arg2 coveredColor:(id)arg3;
- (id)createHeadImageView;
- (id)createHeadImageViewContainer;
- (double)headerImageTop;
- (double)headerImageBottom;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

