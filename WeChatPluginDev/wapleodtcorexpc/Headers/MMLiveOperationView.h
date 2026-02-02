//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCommentView, MMLiveConnectedMicAudienceView, MMLiveGradientView, MMLiveOnlineStateView, NSString;
@protocol MMLiveOperationViewDelegate, MMLiveOperationViewUIDelegate, MMUIViewControllerDelegate;

@interface MMLiveOperationView
{
    _Bool _isLiveNameEdited;
    _Bool _isAnchor;
    _Bool _connectMicButtonShowRedDot;
    _Bool _shouldShowHeatValue;
    _Bool _liveRewardEnabled;
    _Bool _shouldIgnoreBackViewTapped;
    _Bool _isShouldShowNewHeatValueStyle;
    MMLiveCommentView *_commentView;
    MMLiveOnlineStateView *_onlineStateView;
    NSString *_liveTitle;
    long long _roleType;
    id <MMLiveOperationViewUIDelegate> _uiDelegate;
    id <MMLiveOperationViewDelegate> _operationDelegate;
    id <MMUIViewControllerDelegate> _vcDelegate;
    unsigned long long _connectMicButtonState;
    MMLiveConnectedMicAudienceView *_connectedMicAudienceView;
    MMLiveGradientView *_topShadowView;
    MMLiveGradientView *_bottomShadowView;
    unsigned long long _topShadowForbidOptionFlag;
    unsigned long long _bottomShadowForbidOptionFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bottomShadowForbidOptionFlag; // @synthesize bottomShadowForbidOptionFlag=_bottomShadowForbidOptionFlag;
@property(nonatomic) unsigned long long topShadowForbidOptionFlag; // @synthesize topShadowForbidOptionFlag=_topShadowForbidOptionFlag;
@property(retain, nonatomic) MMLiveGradientView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) MMLiveGradientView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(nonatomic) _Bool isShouldShowNewHeatValueStyle; // @synthesize isShouldShowNewHeatValueStyle=_isShouldShowNewHeatValueStyle;
@property(nonatomic) _Bool shouldIgnoreBackViewTapped; // @synthesize shouldIgnoreBackViewTapped=_shouldIgnoreBackViewTapped;
@property(nonatomic) _Bool liveRewardEnabled; // @synthesize liveRewardEnabled=_liveRewardEnabled;
@property(nonatomic) _Bool shouldShowHeatValue; // @synthesize shouldShowHeatValue=_shouldShowHeatValue;
@property(retain, nonatomic) MMLiveConnectedMicAudienceView *connectedMicAudienceView; // @synthesize connectedMicAudienceView=_connectedMicAudienceView;
@property(nonatomic) _Bool connectMicButtonShowRedDot; // @synthesize connectMicButtonShowRedDot=_connectMicButtonShowRedDot;
@property(nonatomic) unsigned long long connectMicButtonState; // @synthesize connectMicButtonState=_connectMicButtonState;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(nonatomic) __weak id <MMLiveOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) __weak id <MMLiveOperationViewUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(readonly, nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(nonatomic) _Bool isLiveNameEdited; // @synthesize isLiveNameEdited=_isLiveNameEdited;
@property(retain, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(retain, nonatomic) MMLiveOnlineStateView *onlineStateView; // @synthesize onlineStateView=_onlineStateView;
@property(retain, nonatomic) MMLiveCommentView *commentView; // @synthesize commentView=_commentView;
- (void)onFontSizeChange;
- (void)reLoadBottomShadowView;
- (id)extractBottomShadowView;
- (void)refreshWidgetsForFontSizeChange;
- (void)extraOperationInfoUpdated;
- (void)onAnchorPayGameSettedValueChanged;
- (void)onAnchorStartLiveFinished;
- (void)operationPermissionChanged;
- (void)clearOrRecoverScreen;
- (id)minimizeSrcView;
- (void)showTopShadowView;
- (void)onBottomShadowForbidOptionFlagChanged;
- (void)clearBottomShadowShowForbidOption:(long long)arg1;
- (void)setBottomShadowShowForbidOption:(long long)arg1;
- (void)onTopShadowForbidOptionFlagChanged;
- (void)clearTopShadowShowForbidOption:(long long)arg1;
- (void)setTopShadowShowForbidOption:(long long)arg1;
- (void)hideShadowView;
- (void)showShadowView;
- (id)getConnectMicVideoPreviewPanel;
- (id)getConnectMicOperationPanel;
- (void)updateHeatValue:(unsigned long long)arg1;
- (void)updateRewardTotalAmountInHeat:(unsigned long long)arg1;
- (void)updateRewardWecoinCnt:(unsigned long long)arg1;
- (void)updateOnlineUserCnt:(unsigned long long)arg1 withOnlineViewCnt:(unsigned long long)arg2;
- (void)updateOnlineUserCnt:(unsigned long long)arg1;
- (void)checkAndHideAllContents;
- (void)checkAndShowAllContents;
- (void)showAllContentsForAnchor;
- (void)showAllContentsForAudience;
- (void)hideAllContents;
- (void)forceLayoutForOrientationChanged;
- (void)layoutShadowView;
- (void)layoutUI;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

