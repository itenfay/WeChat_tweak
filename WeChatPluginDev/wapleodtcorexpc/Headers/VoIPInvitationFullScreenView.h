//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUIButton, MultiTalkHDHeadView, UIImageView, UILabel, VoIPHeadImageBlurView, VoIPInvitationInfo, VoipAutoUpdateLabel, VoipDescriptionButton;
@protocol VoIPInvitationFullScreenViewDelegate;

@interface VoIPInvitationFullScreenView : UIView
{
    _Bool _isAccepted;
    VoIPInvitationInfo *_info;
    id <VoIPInvitationFullScreenViewDelegate> _delegate;
    VoIPHeadImageBlurView *_backgroundView;
    UIImageView *_m_profileBackgroundView;
    MMUIButton *_miniInAppButton;
    VoipAutoUpdateLabel *_statusAudoUpdateLabel;
    MultiTalkHDHeadView *_headImageView;
    UILabel *_usrnameLabel;
    VoipDescriptionButton *_acceptButton;
    MMUIActivityIndicatorView *_acceptIndicatorView;
    VoipDescriptionButton *_hangupButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoipDescriptionButton *hangupButton; // @synthesize hangupButton=_hangupButton;
@property(retain, nonatomic) MMUIActivityIndicatorView *acceptIndicatorView; // @synthesize acceptIndicatorView=_acceptIndicatorView;
@property(retain, nonatomic) VoipDescriptionButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *usrnameLabel; // @synthesize usrnameLabel=_usrnameLabel;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) VoipAutoUpdateLabel *statusAudoUpdateLabel; // @synthesize statusAudoUpdateLabel=_statusAudoUpdateLabel;
@property(retain, nonatomic) MMUIButton *miniInAppButton; // @synthesize miniInAppButton=_miniInAppButton;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView=_m_profileBackgroundView;
@property(retain, nonatomic) VoIPHeadImageBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isAccepted; // @synthesize isAccepted=_isAccepted;
@property(nonatomic) __weak id <VoIPInvitationFullScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VoIPInvitationInfo *info; // @synthesize info=_info;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 info:(id)arg2;
- (void)onHangupButtonClickWithSender:(id)arg1;
- (void)onAcceptButtonClickWithSender:(id)arg1;
- (void)onMiniInAppButtonClickWithSender:(id)arg1;
- (void)layoutHangupButton;
- (void)layoutAcceptIndicatorView;
- (void)layoutAcceptButton;
- (void)layoutUsernameLabel;
- (void)layoutHeadImageView;
- (void)layoutStatusLabel;
- (void)layoutMiniInAppButton;
- (void)layoutProfileBackgroundView;
- (void)layoutBackgroundView;

@end

