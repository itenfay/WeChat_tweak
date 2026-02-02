//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SightView, UIButton, UIView, WCCanvasDynamicDataLoader;

@interface WCCanvasSightComponent
{
    _Bool _sightReady;
    _Bool _sightPlaying;
    _Bool _bSlientPlay;
    SightView *_sightView;
    UIButton *_button;
    UIButton *_voiceIconButton;
    NSString *_currentSightUrl;
    UIButton *_jumpStreamVideoBtn;
    UIView *_bottomLineView;
    WCCanvasDynamicDataLoader *_dataLoader;
    struct CGSize _sightSize;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) _Bool bSlientPlay; // @synthesize bSlientPlay=_bSlientPlay;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIButton *jumpStreamVideoBtn; // @synthesize jumpStreamVideoBtn=_jumpStreamVideoBtn;
@property(nonatomic) struct CGSize sightSize; // @synthesize sightSize=_sightSize;
@property(retain, nonatomic) NSString *currentSightUrl; // @synthesize currentSightUrl=_currentSightUrl;
@property(nonatomic) _Bool sightPlaying; // @synthesize sightPlaying=_sightPlaying;
@property(nonatomic) _Bool sightReady; // @synthesize sightReady=_sightReady;
@property(retain, nonatomic) UIButton *voiceIconButton; // @synthesize voiceIconButton=_voiceIconButton;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SightView *sightView; // @synthesize sightView=_sightView;
- (void)resetSightViewAudioState:(_Bool)arg1;
- (void)checkAndStartFloatTimer;
- (void)cancelFloatComponentTrigger;
- (void)onNotifyToShowFloatComponent;
- (void)startWaitForTriggerTime;
- (_Bool)hasFloatComponentInfo;
- (void)onClickSight:(id)arg1;
- (void)onClickStreamVideoBtn:(id)arg1;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onVoiceComponentHasPlayWithSound:(id)arg1;
- (void)SightDidFailForUrl:(id)arg1;
- (void)SightDidLoad:(id)arg1 Url:(id)arg2;
- (void)SightDidReceiveProgress:(double)arg1 Url:(id)arg2;
- (void)SightWillBeginLoadForUrl:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (_Bool)shouldCheckPlayerHasInitWhenSetThumbImageContentMode;
- (_Bool)shouldVideoLayerRasterize;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)onClickIconViewOfSightView:(id)arg1;
- (void)tryToPauseWithShowThumb:(_Bool)arg1;
- (unsigned long long)getSightViewScene;
- (void)onVoiceIconBtnClick:(id)arg1;
- (void)tryToSetVideoPlayingState:(_Bool)arg1;
- (void)trytoPauseSight;
- (void)tryToPlaySight;
- (_Bool)tryToLoadSight;
- (_Bool)tryToLoadThumbImage;
- (void)componentWillResumeState:(_Bool)arg1;
- (void)componentWillStopState:(_Bool)arg1;
- (void)componentWillEnterForeground;
- (void)componentDidEnterBackground;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setup;
- (void)clear;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

