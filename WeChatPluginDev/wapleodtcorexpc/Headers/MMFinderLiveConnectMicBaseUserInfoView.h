//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveConnectMicUser, MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMFinderLiveTaskId, MMUIButton, UILabel, WCFinderHeadImageView;
@protocol MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate;

@interface MMFinderLiveConnectMicBaseUserInfoView : UIView
{
    _Bool _configureLiveDirtyHandle;
    _Bool _disableHeadImageAutoUpdate;
    _Bool _isHiddenSmallWidgets;
    id <MMFinderLiveConnectMicBaseUserInfoViewDelegate> _actionDelegate;
    id <WCFinderHeadImageViewDelegate> _headImageViewDelegate;
    MMFinderLiveTaskId *_finderLiveTaskId;
    MMFinderLiveConnectMicUser *_connectMicUserInfo;
    WCFinderHeadImageView *_headImageView;
    UILabel *_nicknameLabel;
    MMUIButton *_micMutedButton;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
    MMFinderLiveLiveRoleSignView *_anonymousSignView;
    struct CGRect _displayNormalizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *anonymousSignView; // @synthesize anonymousSignView=_anonymousSignView;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMUIButton *micMutedButton; // @synthesize micMutedButton=_micMutedButton;
@property(nonatomic) _Bool isHiddenSmallWidgets; // @synthesize isHiddenSmallWidgets=_isHiddenSmallWidgets;
@property(nonatomic) _Bool disableHeadImageAutoUpdate; // @synthesize disableHeadImageAutoUpdate=_disableHeadImageAutoUpdate;
@property(nonatomic) _Bool configureLiveDirtyHandle; // @synthesize configureLiveDirtyHandle=_configureLiveDirtyHandle;
@property(nonatomic) struct CGRect displayNormalizedFrame; // @synthesize displayNormalizedFrame=_displayNormalizedFrame;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo; // @synthesize connectMicUserInfo=_connectMicUserInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) __weak id <WCFinderHeadImageViewDelegate> headImageViewDelegate; // @synthesize headImageViewDelegate=_headImageViewDelegate;
@property(nonatomic) __weak id <MMFinderLiveConnectMicBaseUserInfoViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)updateSmallWidgetsHidden:(_Bool)arg1;
- (_Bool)updateConnectMicUserGlobalBadgeLevel:(unsigned int)arg1;
- (unsigned int)getGlobalRank;
- (void)configAnonymousSignView;
- (_Bool)needDisplayAnonymousSignView;
- (_Bool)needDisplayGlobalRankSignView;
- (void)finderNicknameLabelDidClick;
- (void)configGlobalRankSignView;
- (void)updateMicMutedButtonFrame:(struct CGRect)arg1;
- (void)updateMicMutedButtonAppearance;
- (void)configMicMutedButton;
- (void)onClickMicMutedButton;
- (void)createMicMutedButton;
- (void)onConnectMicUserHasChanged;
- (void)configNicknameLabel;
- (void)createNickNameLabel;
- (void)createHeadImageView;
- (void)configHeadImageView;
- (void)updateHeadImageViewSize;
- (void)layoutUI;
- (void)clearAndHide;
- (void)dealloc;
- (void)show;
- (double)getHeadImageViewNormalizedCornerRadius;
@property(readonly, nonatomic) unsigned long long viewType;

@end

