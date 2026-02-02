//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTLFinderLiveTexturePlugin, BrandTLExptConfig, BrandTimelineReportLogic, CMessageWrap, FlutterBrandTLApiImplementation, MusicCallbackApi, NSString;

@interface BrandTLFlutterViewController
{
    _Bool isShowRedDotInMainFrameSession;
    _Bool _hasViewWillBePushedOnce;
    _Bool _didAppear;
    _Bool _canShowPersonalCenter;
    _Bool _enableAd;
    _Bool _enableBrandService;
    unsigned int redDotCount;
    unsigned int enterSessionInfoNotifyType;
    BrandTLExptConfig *exptConfig;
    unsigned long long source;
    unsigned long long enterRowIndexInMainFrameSession;
    CMessageWrap *enterMsgInMainFrameSession;
    FlutterBrandTLApiImplementation *_apiImpl;
    BTLFinderLiveTexturePlugin *_finderLiveTexturePlugin;
    BrandTimelineReportLogic *_reportLogic;
    MusicCallbackApi *_flutterMusicPlayerCallBack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MusicCallbackApi *flutterMusicPlayerCallBack; // @synthesize flutterMusicPlayerCallBack=_flutterMusicPlayerCallBack;
@property(nonatomic) _Bool enableBrandService; // @synthesize enableBrandService=_enableBrandService;
@property(nonatomic) _Bool enableAd; // @synthesize enableAd=_enableAd;
@property(nonatomic) _Bool canShowPersonalCenter; // @synthesize canShowPersonalCenter=_canShowPersonalCenter;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) _Bool hasViewWillBePushedOnce; // @synthesize hasViewWillBePushedOnce=_hasViewWillBePushedOnce;
@property(retain, nonatomic) BrandTimelineReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) BTLFinderLiveTexturePlugin *finderLiveTexturePlugin; // @synthesize finderLiveTexturePlugin=_finderLiveTexturePlugin;
@property(retain, nonatomic) FlutterBrandTLApiImplementation *apiImpl; // @synthesize apiImpl=_apiImpl;
@property(nonatomic) unsigned int enterSessionInfoNotifyType; // @synthesize enterSessionInfoNotifyType;
@property(retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession; // @synthesize enterMsgInMainFrameSession;
@property(nonatomic) unsigned int redDotCount; // @synthesize redDotCount;
@property(nonatomic) _Bool isShowRedDotInMainFrameSession; // @synthesize isShowRedDotInMainFrameSession;
@property(nonatomic) unsigned long long enterRowIndexInMainFrameSession; // @synthesize enterRowIndexInMainFrameSession;
@property(nonatomic) unsigned long long source; // @synthesize source;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig; // @synthesize exptConfig;
- (_Bool)shouldUpdatePageStateWhenPreRenderStart;
- (void)insertMockCanvasModelToRecAtIndex:(long long)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)reportAdBrandCardOnClick;
- (void)setupMagicBrushEnv:(_Bool)arg1;
- (void)_updateCreationCenterInfo;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onNotificationUnreadCountChange;
- (void)onTimelinePageActiveChange:(_Bool)arg1;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onEvent:(int)arg3 error:(id)arg4;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (id)entryPoint;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)updateEnterInfo;
- (void)didTakeSnapshot:(id)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (id)getMagicBrushFlutterPlugins;
- (void)viewDidLoad;
- (void)setupPlugins;
- (void)dealloc;
- (id)initWithExptConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

