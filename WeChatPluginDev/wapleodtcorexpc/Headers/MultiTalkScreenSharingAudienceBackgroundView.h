//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MultiTalkHDHeadView, NSString, UIButton, UIImageView, UILabel;

@interface MultiTalkScreenSharingAudienceBackgroundView : UIView
{
    _Bool _isOperationViewsHidden;
    _Bool _canShowUserAvatarView;
    _Bool _isLandscapeSupport;
    UIView *_topBar;
    UIButton *_closeButton;
    UIButton *_orientationButton;
    UILabel *_titleLabel;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _userTapToChangeOperationViewsAppearanceCallback;
    NSString *_sharingScreenUserName;
    NSString *_currentTalkingUserName;
    MultiTalkHDHeadView *_userAvatarView;
    UIImageView *_talkingIcon;
    CDUnknownBlockType _orientationButtonCallback;
    CAGradientLayer *_topBarGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *topBarGradientLayer; // @synthesize topBarGradientLayer=_topBarGradientLayer;
@property(copy, nonatomic) CDUnknownBlockType orientationButtonCallback; // @synthesize orientationButtonCallback=_orientationButtonCallback;
@property(nonatomic) _Bool isLandscapeSupport; // @synthesize isLandscapeSupport=_isLandscapeSupport;
@property(nonatomic) _Bool canShowUserAvatarView; // @synthesize canShowUserAvatarView=_canShowUserAvatarView;
@property(retain, nonatomic) UIImageView *talkingIcon; // @synthesize talkingIcon=_talkingIcon;
@property(retain, nonatomic) MultiTalkHDHeadView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(copy, nonatomic) NSString *currentTalkingUserName; // @synthesize currentTalkingUserName=_currentTalkingUserName;
@property(copy, nonatomic) NSString *sharingScreenUserName; // @synthesize sharingScreenUserName=_sharingScreenUserName;
@property(nonatomic) _Bool isOperationViewsHidden; // @synthesize isOperationViewsHidden=_isOperationViewsHidden;
@property(copy, nonatomic) CDUnknownBlockType userTapToChangeOperationViewsAppearanceCallback; // @synthesize userTapToChangeOperationViewsAppearanceCallback=_userTapToChangeOperationViewsAppearanceCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *orientationButton; // @synthesize orientationButton=_orientationButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
- (void)rotationDetectorRoationDidChange:(id)arg1;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)updateSharingScreenUserName:(id)arg1;
- (void)clearData;
- (void)onTapView;
- (void)onOrientationButtonClick:(id)arg1;
- (void)onCloseButtonClick;
- (void)checkAndAnimateToHideUserAvatarView;
- (void)updateUserAvatar;
- (void)layoutUserAvatarView;
- (void)layoutTitleLabel;
- (void)layoutOrientationButton;
- (void)layoutCloseButton;
- (void)layoutTopBar;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 shouldSupportTapGesture:(_Bool)arg2;

@end

