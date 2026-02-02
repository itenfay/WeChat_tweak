//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveAudioOnlyIndicatorView, MMLiveTaskId, MMMinimizeLiveIndicatorView, MMUIButton, UIImageView;

@interface MMMinimizeLiveContainerView : UIView
{
    MMLiveTaskId *_liveTaskId;
    CDUnknownBlockType _onTapClose;
    CDUnknownBlockType _onTapContainer;
    UIImageView *_topShadowView;
    UIImageView *_bottomShadowView;
    MMMinimizeLiveIndicatorView *_liveEndIndicatorView;
    MMMinimizeLiveIndicatorView *_networkFailIndicatorView;
    MMMinimizeLiveIndicatorView *_remoteErrorIndicatorView;
    MMMinimizeLiveIndicatorView *_gamePauseIndicatorView;
    MMMinimizeLiveIndicatorView *_verifyPauseIndicatorView;
    MMMinimizeLiveIndicatorView *_payToContinueIndicatorView;
    MMMinimizeLiveIndicatorView *_audioOnlyModeIndicatorView;
    MMLiveAudioOnlyIndicatorView *_audioOnlyIndicatorDetailView;
    MMMinimizeLiveIndicatorView *_ktvIndicatorView;
    MMUIButton *_closeButton;
    MMUIButton *_bgButton;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *ktvIndicatorView; // @synthesize ktvIndicatorView=_ktvIndicatorView;
@property(nonatomic) __weak MMLiveAudioOnlyIndicatorView *audioOnlyIndicatorDetailView; // @synthesize audioOnlyIndicatorDetailView=_audioOnlyIndicatorDetailView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *audioOnlyModeIndicatorView; // @synthesize audioOnlyModeIndicatorView=_audioOnlyModeIndicatorView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *payToContinueIndicatorView; // @synthesize payToContinueIndicatorView=_payToContinueIndicatorView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *verifyPauseIndicatorView; // @synthesize verifyPauseIndicatorView=_verifyPauseIndicatorView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *gamePauseIndicatorView; // @synthesize gamePauseIndicatorView=_gamePauseIndicatorView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *remoteErrorIndicatorView; // @synthesize remoteErrorIndicatorView=_remoteErrorIndicatorView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *networkFailIndicatorView; // @synthesize networkFailIndicatorView=_networkFailIndicatorView;
@property(retain, nonatomic) MMMinimizeLiveIndicatorView *liveEndIndicatorView; // @synthesize liveEndIndicatorView=_liveEndIndicatorView;
@property(retain, nonatomic) UIImageView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) UIImageView *topShadowView; // @synthesize topShadowView=_topShadowView;
@property(copy, nonatomic) CDUnknownBlockType onTapContainer; // @synthesize onTapContainer=_onTapContainer;
@property(copy, nonatomic) CDUnknownBlockType onTapClose; // @synthesize onTapClose=_onTapClose;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)updateMinimizeStateAccessibility:(id)arg1;
- (void)updateMinimizeDefaultAccessibility;
- (void)hideKTVIndicator;
- (void)hideAudioOnlyModeIndicator;
- (void)hidePayToContinueIndicator;
- (void)hideVerifyPauseIndicator;
- (void)hideGamePauseIndicator;
- (void)hideRemoteErrorIndicator;
- (void)hideNetworkFailIndicator;
- (void)hideLiveEndIndicator;
- (void)hideTopShadow;
- (void)hideBottomShadow;
- (void)removeAllSubViews;
- (void)hideIndicatorsExcept:(id)arg1;
- (void)forceRefreshUI;
- (void)hideIndicators;
- (void)displayKTVIndicator;
- (void)displayAudioOnlyModeIndicator:(_Bool)arg1;
- (void)displayPayToContinueIndicator;
- (void)displayVerifyPauseIndicator;
- (void)displayGamePauseIndicator;
- (void)displayRemoteErrorIndicator;
- (void)displayNetworkFailIndicator;
- (void)displayLiveEndIndicator;
- (void)displayTopShadow;
- (void)displayBottomShadow;
- (void)hideCloseButton;
- (void)displayCloseButton;
- (id)failIndicatorViewWithFrame:(struct CGRect)arg1 hint:(id)arg2;
- (void)updateMaskLayerForView:(id)arg1;
- (id)indicatorBackgroundViewWithFrame:(struct CGRect)arg1;
- (void)onSelfTapped;
- (void)onCloseButtonClicked;
- (void)createKTVIndicatorView;
- (void)createAudioOnlyModeIndicatorView;
- (void)createPayToContinueIndicatorView;
- (void)createVerifyPauseIndicatorView;
- (void)createGamePauseIndicatorView;
- (void)createRemoteErrorIndicatorView;
- (void)createNetworkFailIndicatorView;
- (void)createLiveEndIndicatorView;
- (void)updateTopShadowMask;
- (void)createTopShadowView;
- (void)updateBottomShadowMask;
- (void)createBottomShadowView;
- (void)layoutKTVIndicatorView;
- (void)layoutAudioOnlyModeIndicatorView;
- (void)layoutPayToContinueIndicatorView;
- (void)layoutVerifyPauseIndicatorView;
- (void)layoutGamePauseIndicatorView;
- (void)layoutRemoteErrorIndicatorView;
- (void)layoutNetworkFailIndicatorView;
- (void)layoutEndIndicatorView;
- (void)layoutTopShadowView;
- (void)layoutBottomShadowView;
- (void)layoutBgButton;
- (void)layoutCloseButton;
- (void)layoutContainerView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configBasicAttributes;
- (id)initWithTaskId:(id)arg1;

@end

