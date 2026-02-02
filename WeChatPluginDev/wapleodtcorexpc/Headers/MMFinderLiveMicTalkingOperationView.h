//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, MMUIActivityIndicatorView, MMUIButton, UIImageView, UILabel, VoiceRecordTextureButtonView, WCLiveBottomTextButton;
@protocol MMFinderLiveMicTalkingOperationViewActionDelegate;

@interface MMFinderLiveMicTalkingOperationView : UIView
{
    _Bool _isPressingTalkButton;
    id <MMFinderLiveMicTalkingOperationViewActionDelegate> _actionDelegate;
    unsigned long long _talkState;
    MMFinderLiveTaskId *_finderLiveTaskId;
    WCLiveBottomTextButton *_closeButton;
    UIView *_pressTalkButtonBackgroundView;
    MMUIButton *_pressTalkButton;
    UIView *_recordContainerView;
    UIImageView *_backgroundImageView;
    VoiceRecordTextureButtonView *_voiceRecordView;
    MMUIActivityIndicatorView *_talkLoadingView;
    UIImageView *_talkingImageView;
    UILabel *_talkTipLabel;
    unsigned long long _lastUpdateVolumeTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastUpdateVolumeTime; // @synthesize lastUpdateVolumeTime=_lastUpdateVolumeTime;
@property(retain, nonatomic) UILabel *talkTipLabel; // @synthesize talkTipLabel=_talkTipLabel;
@property(retain, nonatomic) UIImageView *talkingImageView; // @synthesize talkingImageView=_talkingImageView;
@property(retain, nonatomic) MMUIActivityIndicatorView *talkLoadingView; // @synthesize talkLoadingView=_talkLoadingView;
@property(retain, nonatomic) VoiceRecordTextureButtonView *voiceRecordView; // @synthesize voiceRecordView=_voiceRecordView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *recordContainerView; // @synthesize recordContainerView=_recordContainerView;
@property(retain, nonatomic) MMUIButton *pressTalkButton; // @synthesize pressTalkButton=_pressTalkButton;
@property(retain, nonatomic) UIView *pressTalkButtonBackgroundView; // @synthesize pressTalkButtonBackgroundView=_pressTalkButtonBackgroundView;
@property(retain, nonatomic) WCLiveBottomTextButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId; // @synthesize finderLiveTaskId=_finderLiveTaskId;
@property(nonatomic) _Bool isPressingTalkButton; // @synthesize isPressingTalkButton=_isPressingTalkButton;
@property(nonatomic) unsigned long long talkState; // @synthesize talkState=_talkState;
@property(nonatomic) __weak id <MMFinderLiveMicTalkingOperationViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)updateTalkingVolume:(unsigned long long)arg1;
- (void)cancelTalk;
- (void)updateTalkViewsAppearance;
- (void)onTalkButtonTouchUp;
- (void)onTalkButtonTouchDown;
- (void)onCloseButtonClicked;
- (void)layoutRecordViews;
- (void)layoutPressTalkButton;
- (void)layoutCloseButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithTaskId:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2;

@end

