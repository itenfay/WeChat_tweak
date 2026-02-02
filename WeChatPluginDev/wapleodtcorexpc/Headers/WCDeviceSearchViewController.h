//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, MMTableView, NSMutableArray, NSString, UILabel, WCDevice, WCDeviceSearchLogic;

@interface WCDeviceSearchViewController
{
    MMTableView *m_tableView;
    UILabel *m_headerLbl;
    MMLoadingView *m_loadingView;
    NSMutableArray *m_deviceList;
    unsigned long long m_scene;
    WCDeviceSearchLogic *m_searchLogic;
    WCDevice *m_fliterDevice;
    _Bool isViewFirstLoaded;
    unsigned long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)onHelpBtnClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onDeviceFound:(id)arg1;
- (void)jumpToDeviceBrandContactProfile:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBack:(id)arg1;
- (id)getFooterSettingRichTextView;
- (void)getLoadingCell:(id)arg1;
- (void)initLoadingView;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)reloadData;
- (_Bool)isBLEConnected;
- (_Bool)isWifiConnected;
- (void)startScan;
- (id)initWithScene:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 scene:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

