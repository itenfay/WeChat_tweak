//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BSTLExptConfig, BSTimelineFlutterPlugin, BTLFinderLiveTexturePlugin, CMessageWrap, ECSTimelineReportLogic;

@interface BSTimelineFlutterViewController
{
    _Bool isShowRedDotInMainFrameSession;
    _Bool _hasViewWillBePushedOnce;
    _Bool _didAppear;
    _Bool _canShowPersonalCenter;
    _Bool _enableAd;
    _Bool _enableBrandService;
    unsigned int redDotCount;
    unsigned int enterSessionInfoNotifyType;
    BSTLExptConfig *exptConfig;
    unsigned long long source;
    unsigned long long enterRowIndexInMainFrameSession;
    CMessageWrap *enterMsgInMainFrameSession;
    BSTimelineFlutterPlugin *_apiImpl;
    BTLFinderLiveTexturePlugin *_finderLiveTexturePlugin;
    ECSTimelineReportLogic *_reportLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableBrandService; // @synthesize enableBrandService=_enableBrandService;
@property(nonatomic) _Bool enableAd; // @synthesize enableAd=_enableAd;
@property(nonatomic) _Bool canShowPersonalCenter; // @synthesize canShowPersonalCenter=_canShowPersonalCenter;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) _Bool hasViewWillBePushedOnce; // @synthesize hasViewWillBePushedOnce=_hasViewWillBePushedOnce;
@property(retain, nonatomic) ECSTimelineReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) BTLFinderLiveTexturePlugin *finderLiveTexturePlugin; // @synthesize finderLiveTexturePlugin=_finderLiveTexturePlugin;
@property(retain, nonatomic) BSTimelineFlutterPlugin *apiImpl; // @synthesize apiImpl=_apiImpl;
@property(nonatomic) unsigned int enterSessionInfoNotifyType; // @synthesize enterSessionInfoNotifyType;
@property(retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession; // @synthesize enterMsgInMainFrameSession;
@property(nonatomic) unsigned int redDotCount; // @synthesize redDotCount;
@property(nonatomic) _Bool isShowRedDotInMainFrameSession; // @synthesize isShowRedDotInMainFrameSession;
@property(nonatomic) unsigned long long enterRowIndexInMainFrameSession; // @synthesize enterRowIndexInMainFrameSession;
@property(nonatomic) unsigned long long source; // @synthesize source;
@property(retain, nonatomic) BSTLExptConfig *exptConfig; // @synthesize exptConfig;
- (_Bool)shouldUpdatePageStateWhenPreRenderStart;
- (void)_updateCreationCenterInfo;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onNotificationUnreadCountChange;
- (void)onTimelinePageActiveChange:(_Bool)arg1;
- (id)entryPoint;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)updateEnterInfo;
- (void)didTakeSnapshot:(id)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)registerPlugin;
- (void)dealloc;
- (id)initWithExptConfig:(id)arg1;

@end

