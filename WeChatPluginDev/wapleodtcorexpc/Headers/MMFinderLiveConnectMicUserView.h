//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMFinderLiveConnectMicUser, MoveWithTouchAlgorithm, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, WCFinderHeadImageView;
@protocol MMFinderLiveConnectMicUserViewDelegate;

@interface MMFinderLiveConnectMicUserView : UIView
{
    _Bool _useVideo;
    _Bool _canShowHangupButton;
    _Bool _isMovingView;
    _Bool _isInShowAnimation;
    _Bool _isInHideAnimation;
    _Bool _isInMoveResultAnimation;
    id <MMFinderLiveConnectMicUserViewDelegate> _actionDelegate;
    unsigned long long _state;
    MMFinderLiveConnectMicUser *_connectMicUser;
    UIButton *_hangupButton;
    MoveWithTouchAlgorithm *_moveAlgorithm;
    UIView *_blurBackgroundView;
    UIView *_userInfoContainerView;
    UILabel *_nicknameLabel;
    UIImageView *_talkingIconView;
    UIView *_otherInfoContainerView;
    UIImageView *_tipIconView;
    UILabel *_tipLabel;
    UILabel *_connectingTipLabel;
    UIView *_randomMicContainerView;
    WCFinderHeadImageView *_randomMicAvatarView;
    UILabel *_randomMicTipLabel;
    UIView *_randomMicAvatarAnimationContainerFirstView;
    UIView *_randomMicAvatarAnimationContainerSecondView;
    UIImageView *_randomMicMatchedIconView;
    unsigned long long _randomMicAnimationState;
    unsigned long long _rollingAnimationPhase;
    CAShapeLayer *_shapeLayer;
    double _viewEdgeOffsetTopBottom;
    NSMutableDictionary *_avatarCache;
    long long _avatarsRolled;
    NSMutableArray *_avatarItems;
    struct CGPoint _currentOrigin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *avatarItems; // @synthesize avatarItems=_avatarItems;
@property(nonatomic) long long avatarsRolled; // @synthesize avatarsRolled=_avatarsRolled;
@property(retain, nonatomic) NSMutableDictionary *avatarCache; // @synthesize avatarCache=_avatarCache;
@property(nonatomic) double viewEdgeOffsetTopBottom; // @synthesize viewEdgeOffsetTopBottom=_viewEdgeOffsetTopBottom;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) _Bool isInMoveResultAnimation; // @synthesize isInMoveResultAnimation=_isInMoveResultAnimation;
@property(nonatomic) _Bool isInHideAnimation; // @synthesize isInHideAnimation=_isInHideAnimation;
@property(nonatomic) _Bool isInShowAnimation; // @synthesize isInShowAnimation=_isInShowAnimation;
@property(nonatomic) _Bool isMovingView; // @synthesize isMovingView=_isMovingView;
@property(nonatomic) _Bool canShowHangupButton; // @synthesize canShowHangupButton=_canShowHangupButton;
@property(nonatomic) _Bool useVideo; // @synthesize useVideo=_useVideo;
@property(nonatomic) struct CGPoint currentOrigin; // @synthesize currentOrigin=_currentOrigin;
@property(nonatomic) unsigned long long rollingAnimationPhase; // @synthesize rollingAnimationPhase=_rollingAnimationPhase;
@property(nonatomic) unsigned long long randomMicAnimationState; // @synthesize randomMicAnimationState=_randomMicAnimationState;
@property(retain, nonatomic) UIImageView *randomMicMatchedIconView; // @synthesize randomMicMatchedIconView=_randomMicMatchedIconView;
@property(retain, nonatomic) UIView *randomMicAvatarAnimationContainerSecondView; // @synthesize randomMicAvatarAnimationContainerSecondView=_randomMicAvatarAnimationContainerSecondView;
@property(retain, nonatomic) UIView *randomMicAvatarAnimationContainerFirstView; // @synthesize randomMicAvatarAnimationContainerFirstView=_randomMicAvatarAnimationContainerFirstView;
@property(retain, nonatomic) UILabel *randomMicTipLabel; // @synthesize randomMicTipLabel=_randomMicTipLabel;
@property(retain, nonatomic) WCFinderHeadImageView *randomMicAvatarView; // @synthesize randomMicAvatarView=_randomMicAvatarView;
@property(retain, nonatomic) UIView *randomMicContainerView; // @synthesize randomMicContainerView=_randomMicContainerView;
@property(retain, nonatomic) UILabel *connectingTipLabel; // @synthesize connectingTipLabel=_connectingTipLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipIconView; // @synthesize tipIconView=_tipIconView;
@property(retain, nonatomic) UIView *otherInfoContainerView; // @synthesize otherInfoContainerView=_otherInfoContainerView;
@property(retain, nonatomic) UIImageView *talkingIconView; // @synthesize talkingIconView=_talkingIconView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIView *userInfoContainerView; // @synthesize userInfoContainerView=_userInfoContainerView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) MoveWithTouchAlgorithm *moveAlgorithm; // @synthesize moveAlgorithm=_moveAlgorithm;
@property(retain, nonatomic) UIButton *hangupButton; // @synthesize hangupButton=_hangupButton;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUser; // @synthesize connectMicUser=_connectMicUser;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <MMFinderLiveConnectMicUserViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)commitStagedUpdatesForItemsInRollingAnimationPhase:(id)arg1;
- (void)commitStagedUpdatesForItemsInRollingAnimationPhase:(unsigned long long)arg1 delay:(_Bool)arg2;
- (void)resetAvatarItems;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldForcePortrait;
- (_Bool)shouldLockToPortrait;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)updateAvatarsWithFinderLiveContacts:(id)arg1;
- (void)checkAndUpdatePosition;
- (void)adsorbToWindow;
- (void)hangup;
- (_Bool)isSelfCloserToTheLeft;
- (void)clearAndHideWithAnimation:(_Bool)arg1;
- (void)clearAndHide;
- (void)clearRandomMicAnimationData;
- (void)checkAndChangeStateToWait;
- (void)updateConnectMicUser:(id)arg1;
- (void)showWithConnectMicUser:(id)arg1 state:(unsigned long long)arg2 useVideo:(_Bool)arg3 andCanShowHangupButton:(_Bool)arg4;
- (void)startScaleUserAvatarAnimation;
- (void)showUserAvatarAndClearRandomMicAvatarAnimation:(_Bool)arg1;
- (void)startSecondRandomMicAvatarAnimation;
- (void)startFirstRandomMicAvatarAnimationIsNewStart:(_Bool)arg1;
- (void)checkAndStartRandomMicAvatarAnimation;
- (void)updateRandomMicAvatarView;
- (void)updateViewCorner;
- (id)createRandomAvatarViewWithIndexSet:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createMoveAlgorithm;
- (struct CGSize)currentViewSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

