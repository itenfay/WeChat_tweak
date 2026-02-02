//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MagicSclFrameSetView, NSString, UIView, _TtC25MagicCardStarterProtocols22MagicCardStarterHandle, _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig, _TtC6WeChat18MagicSclCustomView, _TtC6WeChat22MagicCardStarterSclBiz;

@interface MagicEmojiDemoViewController
{
    _Bool _isResumed;
    MMUIButton *_preloadButton;
    MMUIButton *_stopButton;
    MMUIButton *_startButton;
    MMUIButton *_coverButton;
    MMUIButton *_notifyButton;
    MMUIButton *_simpleStartButton;
    UIView *_containerView;
    MagicSclFrameSetView *_frameSetView;
    MMUIButton *_startToPlayBtn;
    _TtC6WeChat22MagicCardStarterSclBiz *_starterBiz;
    NSString *_frameSetName;
    NSString *_frameSetDataStr;
    NSString *_frameSetRootName;
    _TtC6WeChat18MagicSclCustomView *_customView;
    _TtC25MagicCardStarterProtocols22MagicCardStarterHandle *_starterHandle;
    _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig *_bizConfig;
    struct CGRect _halfScreen;
    struct CGRect _fullScreen;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig *bizConfig; // @synthesize bizConfig=_bizConfig;
@property(retain, nonatomic) _TtC25MagicCardStarterProtocols22MagicCardStarterHandle *starterHandle; // @synthesize starterHandle=_starterHandle;
@property(retain, nonatomic) _TtC6WeChat18MagicSclCustomView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSString *frameSetRootName; // @synthesize frameSetRootName=_frameSetRootName;
@property(retain, nonatomic) NSString *frameSetDataStr; // @synthesize frameSetDataStr=_frameSetDataStr;
@property(retain, nonatomic) NSString *frameSetName; // @synthesize frameSetName=_frameSetName;
@property(retain, nonatomic) _TtC6WeChat22MagicCardStarterSclBiz *starterBiz; // @synthesize starterBiz=_starterBiz;
@property(nonatomic) struct CGRect fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) struct CGRect halfScreen; // @synthesize halfScreen=_halfScreen;
@property(retain, nonatomic) MMUIButton *startToPlayBtn; // @synthesize startToPlayBtn=_startToPlayBtn;
@property(nonatomic) _Bool isResumed; // @synthesize isResumed=_isResumed;
@property(retain, nonatomic) MagicSclFrameSetView *frameSetView; // @synthesize frameSetView=_frameSetView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *simpleStartButton; // @synthesize simpleStartButton=_simpleStartButton;
@property(retain, nonatomic) MMUIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) MMUIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) MMUIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) MMUIButton *preloadButton; // @synthesize preloadButton=_preloadButton;
- (void)commonStop;
- (void)onFireworkPlayEnd:(id)arg1;
- (id)getFireworkInfoByID:(id)arg1;
- (id)getMagicEmojiViewHolder;
- (void)changeScene;
- (void)commonNotifyJsEvent;
- (void)setupEmojiBiz;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutStartToPlayBtn;
- (void)requestFullScreen;
- (void)initStartToPlayBtn;
- (void)viewDidLoad;
- (id)biz;
- (void)dealloc;

@end

