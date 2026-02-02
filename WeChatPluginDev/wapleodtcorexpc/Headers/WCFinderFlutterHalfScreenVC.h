//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFlutterViewController, NSString, WCFinderFlutterHalfScreenPlugin, WCFinderFlutterHalfScreenVCConfig;

@interface WCFinderFlutterHalfScreenVC
{
    WCFinderFlutterHalfScreenVCConfig *_config;
    WCFinderFlutterHalfScreenPlugin *_halfScreenPlugin;
    MMFlutterViewController *_flutterVC;
    unsigned long long _cancelMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cancelMode; // @synthesize cancelMode=_cancelMode;
@property(retain, nonatomic) MMFlutterViewController *flutterVC; // @synthesize flutterVC=_flutterVC;
@property(retain, nonatomic) WCFinderFlutterHalfScreenPlugin *halfScreenPlugin; // @synthesize halfScreenPlugin=_halfScreenPlugin;
@property(retain, nonatomic) WCFinderFlutterHalfScreenVCConfig *config; // @synthesize config=_config;
- (void)onHalfScreenPluginUpdateContentHeight:(double)arg1;
- (void)onHalfScreenPluginCancelWithAnimated:(_Bool)arg1;
- (id)extraFlutterParams;
- (id)_flutterParams;
- (id)extraFlutterPlugins;
- (id)_flutterPlugins;
- (id)flutterRouter;
- (void)setupUI;
- (_Bool)panelDragPanGesShouldBegin:(id)arg1;
- (void)panelSheetWillCloseWithAction:(unsigned long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)loadContentView;
- (void)baseInit;
- (id)initWithConfig:(id)arg1;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

