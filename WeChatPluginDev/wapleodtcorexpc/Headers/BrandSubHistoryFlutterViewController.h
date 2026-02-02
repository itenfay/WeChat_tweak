//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandTLExptConfig, CMessageWrap, FlutterBrandTLApiImplementation, NSString;

@interface BrandSubHistoryFlutterViewController
{
    _Bool isShowRedDotInMainFrameSession;
    _Bool _didAppear;
    unsigned int redDotCount;
    unsigned int enterSessionInfoNotifyType;
    BrandTLExptConfig *exptConfig;
    unsigned long long source;
    unsigned long long enterRowIndexInMainFrameSession;
    CMessageWrap *enterMsgInMainFrameSession;
    FlutterBrandTLApiImplementation *_apiImpl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(retain, nonatomic) FlutterBrandTLApiImplementation *apiImpl; // @synthesize apiImpl=_apiImpl;
@property(nonatomic) unsigned int enterSessionInfoNotifyType; // @synthesize enterSessionInfoNotifyType;
@property(retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession; // @synthesize enterMsgInMainFrameSession;
@property(nonatomic) unsigned int redDotCount; // @synthesize redDotCount;
@property(nonatomic) _Bool isShowRedDotInMainFrameSession; // @synthesize isShowRedDotInMainFrameSession;
@property(nonatomic) unsigned long long enterRowIndexInMainFrameSession; // @synthesize enterRowIndexInMainFrameSession;
@property(nonatomic) unsigned long long source; // @synthesize source;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig; // @synthesize exptConfig;
- (id)entryPoint;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (id)getMagicBrushFlutterPlugins;
- (void)viewDidLoad;
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

