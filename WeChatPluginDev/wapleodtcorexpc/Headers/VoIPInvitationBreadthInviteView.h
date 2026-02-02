//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMUIButton, MMUILabel, MultiTalkHDHeadView, UIImageView, UIVisualEffectView, VOIPVideoRender, VoIPInvitationInfo, VoipAutoUpdateLabel, VoipDescriptionButton, XImageViewRenderer;
@protocol VoIPInvitationBreadthInviteViewDelegate;

@interface VoIPInvitationBreadthInviteView : UIView
{
    _Bool _isAccepted;
    _Bool _disableVideoCapture;
    VoIPInvitationInfo *_info;
    id <VoIPInvitationBreadthInviteViewDelegate> _delegate;
    VOIPVideoRender *_videoRender;
    XImageViewRenderer *_rciLocalRender;
    UIImageView *_backgroundView;
    MMUIButton *_expandButton;
    UIView *_captureView;
    UIVisualEffectView *_captureVisualEffectView;
    MultiTalkHDHeadView *_headView;
    VoipDescriptionButton *_acceptDescriptionButton;
    MMUIActivityIndicatorView *_acceptIndicatorView;
    VoipDescriptionButton *_hangupDescriptionButton;
    MMUILabel *_usrnameLabel;
    VoipAutoUpdateLabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoipAutoUpdateLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *usrnameLabel; // @synthesize usrnameLabel=_usrnameLabel;
@property(retain, nonatomic) VoipDescriptionButton *hangupDescriptionButton; // @synthesize hangupDescriptionButton=_hangupDescriptionButton;
@property(retain, nonatomic) MMUIActivityIndicatorView *acceptIndicatorView; // @synthesize acceptIndicatorView=_acceptIndicatorView;
@property(retain, nonatomic) VoipDescriptionButton *acceptDescriptionButton; // @synthesize acceptDescriptionButton=_acceptDescriptionButton;
@property(retain, nonatomic) MultiTalkHDHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIVisualEffectView *captureVisualEffectView; // @synthesize captureVisualEffectView=_captureVisualEffectView;
@property(retain, nonatomic) UIView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) MMUIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool disableVideoCapture; // @synthesize disableVideoCapture=_disableVideoCapture;
@property(nonatomic) _Bool isAccepted; // @synthesize isAccepted=_isAccepted;
@property(retain, nonatomic) XImageViewRenderer *rciLocalRender; // @synthesize rciLocalRender=_rciLocalRender;
@property(retain, nonatomic) VOIPVideoRender *videoRender; // @synthesize videoRender=_videoRender;
@property(nonatomic) __weak id <VoIPInvitationBreadthInviteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VoIPInvitationInfo *info; // @synthesize info=_info;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVOForDescriptionLabel;
- (void)onMyselfClick:(id)arg1;
- (void)onHangupDescriptionButtonClick:(id)arg1;
- (void)onAcceptDescriptionButtonClick:(id)arg1;
@property(readonly, nonatomic) double userNameCenterY;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 info:(id)arg2;
- (void)layoutLabels;
- (void)layoutDescriptionLabel;
- (void)layoutUserNameLabel;
- (void)layoutHangUpDescriptionButton;
- (void)layoutAcceptIndicatorView;
- (void)layoutAcceptDescriptionButton;
- (void)layoutHeadView;
- (void)layoutCaptureVisualEffectView;
- (void)layoutCaptureView;
- (void)layoutExpandButton;
- (void)layoutBackgroundView;

@end

