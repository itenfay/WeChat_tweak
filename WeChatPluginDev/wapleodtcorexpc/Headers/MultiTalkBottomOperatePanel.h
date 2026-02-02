//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIImageView, UILabel, VoipDescriptionButton;
@protocol MultiTalkBottomOperatePanelDelegate;

@interface MultiTalkBottomOperatePanel : UIView
{
    _Bool _isInScreenSharingAudienceMode;
    _Bool _isSpeakerReady;
    _Bool _isPanGesturing;
    _Bool _videoButtonOn;
    _Bool _microphoneButtonOn;
    _Bool _speakerButtonOn;
    _Bool _isVideoButtonEnable;
    int _layoutType;
    unsigned int _deviceStatus;
    id <MultiTalkBottomOperatePanelDelegate> _delegate;
    long long _multiPathCellularTips;
    UIView *_contentsView;
    VoipDescriptionButton *_videoButton;
    VoipDescriptionButton *_microphoneButton;
    VoipDescriptionButton *_speakerButton;
    VoipDescriptionButton *_hangupButton;
    MMUIButton *_arrowButtonUp;
    MMUIButton *_arrowButtonDown;
    UIView *_backgroundView;
    double _panMovement;
    unsigned long long _panStatus;
    UIView *_multiPathCellularTipsView;
    UILabel *_multiPathCellularTipsLabel;
    UIImageView *_multiPathCellularArrowView;
}

+ (double)preferredHeightForLayoutType:(int)arg1;
+ (double)preferredHeightForLayoutType:(int)arg1 isInScreenSharingAudienceMode:(_Bool)arg2;
+ (double)preferredHeight;
+ (id)createBasicVoipDescriptionButton;
+ (id)disabledVoipDescriptButtonBackImage;
+ (id)selectedVoipDescriptButtonBackImage;
+ (id)voipSelectHangupAndAcceptButtonBackImage;
+ (id)voipHangupButtonBackImage;
+ (id)normalVoipDescriptButtonBackImage;
+ (_Bool)isiPhoneWithNotch;
- (void).cxx_destruct;
@property(nonatomic) unsigned int deviceStatus; // @synthesize deviceStatus=_deviceStatus;
@property(nonatomic) _Bool isVideoButtonEnable; // @synthesize isVideoButtonEnable=_isVideoButtonEnable;
@property(retain, nonatomic) UIImageView *multiPathCellularArrowView; // @synthesize multiPathCellularArrowView=_multiPathCellularArrowView;
@property(retain, nonatomic) UILabel *multiPathCellularTipsLabel; // @synthesize multiPathCellularTipsLabel=_multiPathCellularTipsLabel;
@property(retain, nonatomic) UIView *multiPathCellularTipsView; // @synthesize multiPathCellularTipsView=_multiPathCellularTipsView;
@property(nonatomic) int layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) _Bool speakerButtonOn; // @synthesize speakerButtonOn=_speakerButtonOn;
@property(nonatomic) _Bool microphoneButtonOn; // @synthesize microphoneButtonOn=_microphoneButtonOn;
@property(nonatomic) _Bool videoButtonOn; // @synthesize videoButtonOn=_videoButtonOn;
@property(nonatomic) unsigned long long panStatus; // @synthesize panStatus=_panStatus;
@property(nonatomic) double panMovement; // @synthesize panMovement=_panMovement;
@property(nonatomic) _Bool isPanGesturing; // @synthesize isPanGesturing=_isPanGesturing;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUIButton *arrowButtonDown; // @synthesize arrowButtonDown=_arrowButtonDown;
@property(retain, nonatomic) MMUIButton *arrowButtonUp; // @synthesize arrowButtonUp=_arrowButtonUp;
@property(retain, nonatomic) VoipDescriptionButton *hangupButton; // @synthesize hangupButton=_hangupButton;
@property(retain, nonatomic) VoipDescriptionButton *speakerButton; // @synthesize speakerButton=_speakerButton;
@property(retain, nonatomic) VoipDescriptionButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain, nonatomic) VoipDescriptionButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) UIView *contentsView; // @synthesize contentsView=_contentsView;
@property(nonatomic) _Bool isSpeakerReady; // @synthesize isSpeakerReady=_isSpeakerReady;
@property(nonatomic) _Bool isInScreenSharingAudienceMode; // @synthesize isInScreenSharingAudienceMode=_isInScreenSharingAudienceMode;
@property(nonatomic) long long multiPathCellularTips; // @synthesize multiPathCellularTips=_multiPathCellularTips;
@property(nonatomic) __weak id <MultiTalkBottomOperatePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isMicrOpen;
- (void)onCarPlayVoIPTalkTemplateClickMute;
- (void)onCarPlayVoIPTalkTemplateClickHangup;
- (void)onArrowButtonClick;
- (void)onFlipCameraButtonClick;
- (void)onHangupButtonClick;
- (void)changeAudioToPort:(id)arg1 hasChanged:(_Bool)arg2;
- (void)updateSpeakerButtonByPort:(id)arg1 hasChanged:(_Bool)arg2;
- (void)onSpeakerButtonClick;
- (void)onMicrophoneButtonClick;
- (void)onVideoButtonClick;
- (void)onTapMultiPathCellularTipsView;
- (void)handleOperationPanelPanGesture:(id)arg1;
- (void)changeToPanelLayoutFromFolded;
- (void)changeToPanelFoldedLayout;
- (int)getCurrentLayoutType;
- (_Bool)isVideoButtonSelected;
- (_Bool)isMicrophoneButtonSelected;
- (_Bool)isSpeakerButtonSelected;
- (_Bool)isSpeakerButtonEnable;
- (void)updateVideoButtonEnabled:(_Bool)arg1;
- (void)updateSpeakerButtonEnabled:(_Bool)arg1;
- (void)updateMicrophoneButtonSelected:(_Bool)arg1;
- (void)updateVideoButtonSelected:(_Bool)arg1;
- (void)updateSpeakerButtonSelected:(_Bool)arg1;
- (void)reportOperationArrowBtnExposeWithRoomKey:(unsigned long long)arg1 roomId:(unsigned long long)arg2;
- (void)reportOperationArrowBtnExposeOrClick:(_Bool)arg1 Expand:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andLayoutType:(int)arg2;
- (void)showAirplayLoadingState:(_Bool)arg1;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(_Bool)arg2;
- (void)animateToChangeLayout;
- (void)layoutArrowButton;
- (void)layoutHangupButton;
- (void)layoutSpeakerButton;
- (void)layoutMicrophoneButton;
- (void)layoutVideoButton;
- (void)layoutBackgroundView;
- (void)layoutContentsView;
- (void)updateMultiPathCellularTipsView;
- (double)currentButtonLeftRightMargin;
- (double)foldedButtonLeftRightMargin;
- (double)currentButtonSideLength;
- (double)currentButtonTitleAlpha;
- (double)currentPanGestureOffsetPercent;
- (double)panGestureTotalOffset;
- (id)createArrowButton;
- (struct UIEdgeInsets)voIPDescriptionButtonImageEdgeInsetsWithLayoutType:(int)arg1 isInScreenSharingAudienceMode:(_Bool)arg2;
- (double)topForLayoutType:(int)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

