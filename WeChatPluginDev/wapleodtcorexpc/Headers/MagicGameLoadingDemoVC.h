//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MagicSclFrameSetView, UIView;

@interface MagicGameLoadingDemoVC
{
    _Bool _isResumed;
    MMUIButton *_preloadButton;
    MMUIButton *_stopButton;
    MMUIButton *_startButton;
    MMUIButton *_appIdButton;
    UIView *_containerView;
    MagicSclFrameSetView *_frameSetView;
    MMUIButton *_startToPlayBtn;
    struct CGRect _halfScreen;
    struct CGRect _fullScreen;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) struct CGRect halfScreen; // @synthesize halfScreen=_halfScreen;
@property(retain, nonatomic) MMUIButton *startToPlayBtn; // @synthesize startToPlayBtn=_startToPlayBtn;
@property(nonatomic) _Bool isResumed; // @synthesize isResumed=_isResumed;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *appIdButton; // @synthesize appIdButton=_appIdButton;
@property(retain, nonatomic) MMUIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) MMUIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) MMUIButton *preloadButton; // @synthesize preloadButton=_preloadButton;
- (void)stop;
- (void)preload;
- (void)updateFrameSetData;
- (void)start;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutStartToPlayBtn;
- (void)requestFullScreen;
- (void)initStartToPlayBtn;
- (void)alert;
- (void)setConfig:(id)arg1 type:(unsigned long long)arg2;
- (void)viewDidLoad;
- (id)biz;
- (void)dealloc;

@end

