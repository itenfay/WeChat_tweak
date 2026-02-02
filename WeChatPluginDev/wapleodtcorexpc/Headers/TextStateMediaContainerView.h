//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMusicFadeOutLayer, NSString, TextStateIcon, TextStateMediaEffectCompositeView;
@protocol TextState3rdPartyHandler, TextStateBaseMediaView, TextStateBaseMediaViewDelegate;

@interface TextStateMediaContainerView : UIView
{
    _Bool _forceAspectRatio;
    _Bool _useCoverForContent;
    _Bool _staticContent;
    _Bool _hideBigIconForDefaultImage;
    _Bool _forbidUpdateData;
    _Bool _disable3rdPartyContent;
    _Bool _playing;
    _Bool _wantToPlay;
    _Bool _autoPausedWhenEnterBackground;
    _Bool _firstRefreshBackground;
    unsigned int _effects;
    double _mediaAspectRatio;
    id <TextStateBaseMediaViewDelegate> _delegate;
    UIView<TextStateBaseMediaView> *_mediaView;
    UIView *_mediaCoverView;
    UIView *_mediaBackgroundView;
    double _aspectRatio;
    double _transitionProgress;
    id <TextState3rdPartyHandler> _thirdPartyHandler;
    CDUnknownBlockType _mediaProgressChangeHandler;
    TextStateIcon *_icon;
    double _yOffset;
    UIView *_containerView;
    MMMusicFadeOutLayer *_maskLayer;
    MMMusicFadeOutLayer *_coverMaskLayer;
    TextStateMediaEffectCompositeView *_effectsCompositeView;
    UIView *_backgroundBlurView;
}

+ (id)containerViewFromUsername:(id)arg1 model:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool firstRefreshBackground; // @synthesize firstRefreshBackground=_firstRefreshBackground;
@property(nonatomic) _Bool autoPausedWhenEnterBackground; // @synthesize autoPausedWhenEnterBackground=_autoPausedWhenEnterBackground;
@property(nonatomic) _Bool wantToPlay; // @synthesize wantToPlay=_wantToPlay;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool disable3rdPartyContent; // @synthesize disable3rdPartyContent=_disable3rdPartyContent;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) TextStateMediaEffectCompositeView *effectsCompositeView; // @synthesize effectsCompositeView=_effectsCompositeView;
@property(retain, nonatomic) MMMusicFadeOutLayer *coverMaskLayer; // @synthesize coverMaskLayer=_coverMaskLayer;
@property(retain, nonatomic) MMMusicFadeOutLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool forbidUpdateData; // @synthesize forbidUpdateData=_forbidUpdateData;
@property(nonatomic) _Bool hideBigIconForDefaultImage; // @synthesize hideBigIconForDefaultImage=_hideBigIconForDefaultImage;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) _Bool staticContent; // @synthesize staticContent=_staticContent;
@property(nonatomic) _Bool useCoverForContent; // @synthesize useCoverForContent=_useCoverForContent;
@property(retain, nonatomic) TextStateIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType mediaProgressChangeHandler; // @synthesize mediaProgressChangeHandler=_mediaProgressChangeHandler;
@property(retain, nonatomic) id <TextState3rdPartyHandler> thirdPartyHandler; // @synthesize thirdPartyHandler=_thirdPartyHandler;
@property(nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(nonatomic) unsigned int effects; // @synthesize effects=_effects;
@property(nonatomic) _Bool forceAspectRatio; // @synthesize forceAspectRatio=_forceAspectRatio;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UIView *mediaBackgroundView; // @synthesize mediaBackgroundView=_mediaBackgroundView;
@property(retain, nonatomic) UIView *mediaCoverView; // @synthesize mediaCoverView=_mediaCoverView;
@property(retain, nonatomic) UIView<TextStateBaseMediaView> *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak id <TextStateBaseMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)displayDataReady;
- (void)onMediaProgressChange:(double)arg1;
- (void)onMediaViewRefresh;
- (void)onMediaFinishPlaying;
- (void)requestUpdateDataSource;
- (void)__checkValidFor3rdPartyMediaWithCacheOnly:(_Bool)arg1;
- (void)checkValidFor3rdPartyMediaWithCacheOnly:(_Bool)arg1;
- (void)resetPlayMedia;
@property(nonatomic, getter=isForceMuted) _Bool forceMuted;
@property(nonatomic, getter=isMuted) _Bool muted;
- (void)pausePlayMediaVideoStream;
- (void)stopPlayMedia;
- (void)pausePlayMedia;
- (_Bool)shouldResidentPlayMedia;
- (_Bool)residentPlayMedia;
- (_Bool)longPressEvent:(_Bool)arg1;
- (void)startPlayMedia;
- (_Bool)shouldHandleMedia;
- (void)didEnterBackground;
- (void)willEnterForeground;
@property(nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
- (void)refreshSubviewLevel;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)dealloc;
- (void)updateFrom3rdPartyHandler:(id)arg1;
- (void)updateUsername:(id)arg1 model:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

