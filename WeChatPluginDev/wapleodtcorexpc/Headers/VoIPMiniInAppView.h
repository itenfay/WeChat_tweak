//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CContact, MultiTalkHDHeadView, UIButton, UILabel, VOIPVideoRender, VoIPHeadImageBlurView, VoipMinimizeView, XImageViewRenderer;
@protocol VoIPMiniInAppViewDelegate;

@interface VoIPMiniInAppView : UIView
{
    _Bool _isAudioMode;
    _Bool _isLocalCaptureBack;
    _Bool _isLocalCaptureSuspend;
    _Bool _isRemoteCaptureSuspend;
    id <VoIPMiniInAppViewDelegate> _delegate;
    CContact *_remoteContact;
    unsigned long long _talkingStatus;
    unsigned long long _extendStatus;
    double _rotateDegree;
    UIView *_mainView;
    VoipMinimizeView *_minimizeView;
    VOIPVideoRender *_m_peerRender;
    XImageViewRenderer *_rciLocalRenderer;
    XImageViewRenderer *_rciRemoteRenderer;
    UIView *_m_peerRenderView;
    VOIPVideoRender *_m_selfRender;
    UIView *_m_selfRenderView;
    MultiTalkHDHeadView *_headImageView;
    VoIPHeadImageBlurView *_localHeadImageBlurView;
    VoIPHeadImageBlurView *_remoteHeadImageBlurView;
    UIButton *_mainButton;
    UIView *_speratorLineView;
    UIView *_extendView;
    UILabel *_extendLabel;
    UIButton *_extendButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *extendButton; // @synthesize extendButton=_extendButton;
@property(retain, nonatomic) UILabel *extendLabel; // @synthesize extendLabel=_extendLabel;
@property(retain, nonatomic) UIView *extendView; // @synthesize extendView=_extendView;
@property(retain, nonatomic) UIView *speratorLineView; // @synthesize speratorLineView=_speratorLineView;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) VoIPHeadImageBlurView *remoteHeadImageBlurView; // @synthesize remoteHeadImageBlurView=_remoteHeadImageBlurView;
@property(retain, nonatomic) VoIPHeadImageBlurView *localHeadImageBlurView; // @synthesize localHeadImageBlurView=_localHeadImageBlurView;
@property(retain, nonatomic) MultiTalkHDHeadView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *m_selfRenderView; // @synthesize m_selfRenderView=_m_selfRenderView;
@property(retain, nonatomic) VOIPVideoRender *m_selfRender; // @synthesize m_selfRender=_m_selfRender;
@property(retain, nonatomic) UIView *m_peerRenderView; // @synthesize m_peerRenderView=_m_peerRenderView;
@property(retain, nonatomic) XImageViewRenderer *rciRemoteRenderer; // @synthesize rciRemoteRenderer=_rciRemoteRenderer;
@property(retain, nonatomic) XImageViewRenderer *rciLocalRenderer; // @synthesize rciLocalRenderer=_rciLocalRenderer;
@property(retain, nonatomic) VOIPVideoRender *m_peerRender; // @synthesize m_peerRender=_m_peerRender;
@property(retain, nonatomic) VoipMinimizeView *minimizeView; // @synthesize minimizeView=_minimizeView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) double rotateDegree; // @synthesize rotateDegree=_rotateDegree;
@property(nonatomic) unsigned long long extendStatus; // @synthesize extendStatus=_extendStatus;
@property(nonatomic) unsigned long long talkingStatus; // @synthesize talkingStatus=_talkingStatus;
@property(nonatomic) _Bool isRemoteCaptureSuspend; // @synthesize isRemoteCaptureSuspend=_isRemoteCaptureSuspend;
@property(nonatomic) _Bool isLocalCaptureSuspend; // @synthesize isLocalCaptureSuspend=_isLocalCaptureSuspend;
@property(nonatomic) _Bool isLocalCaptureBack; // @synthesize isLocalCaptureBack=_isLocalCaptureBack;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(retain, nonatomic) CContact *remoteContact; // @synthesize remoteContact=_remoteContact;
@property(nonatomic) __weak id <VoIPMiniInAppViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)preferredSize;
- (struct CGSize)contentViewSize;
- (struct CGSize)defaultContentViewSize;
- (void)onExtendButtonClick:(id)arg1;
- (void)layoutExtendButton;
- (void)layoutExtendLabel;
- (void)layoutExtendView;
- (void)layoutSperatorLineView;
- (void)onMainButtonClick:(id)arg1;
- (void)layoutMainButton;
- (void)layoutRemoteHeadImageBlurView;
- (void)layoutLocalHeadImageBlurView;
- (void)layoutHeadImageView;
- (void)layoutSelfRenderView;
- (void)layoutPeerRenderView;
- (void)layoutMinimizeView;
- (void)layoutContentView;
- (void)updateDescMode:(unsigned long long)arg1 withDisplayTime:(double)arg2;
- (void)setupDuration:(double)arg1;
- (void)reset;
- (id)remoteViewRenderer;
- (id)localViewRenderer;
- (id)smallRender;
- (id)mainRender;

@end

