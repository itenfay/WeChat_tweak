//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UILabel, UIScrollView, WXGRoamBackendHandler;

@interface WXGRoamPanelViewController
{
    UIScrollView *_scrollView;
    UILabel *_showInfoLabel;
    WXGRoamBackendHandler *_backendHandler;
    NSArray *_backupPackages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *backupPackages; // @synthesize backupPackages=_backupPackages;
@property(retain, nonatomic) WXGRoamBackendHandler *backendHandler; // @synthesize backendHandler=_backendHandler;
@property(retain, nonatomic) UILabel *showInfoLabel; // @synthesize showInfoLabel=_showInfoLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)cleanCache;
- (void)enterRDMDeviceList;
- (void)onRoamBackendGetRoamBackupPackagesGetResponse:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetRoamBackupPackagesSetResponse:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)getBackupPackages;
- (void)deleteBackupPackage;
- (void)changeBackupPackage;
- (void)setBackupPackage;
- (void)cleanPortable;
- (void)setupScrollView;
- (void)viewDidLoad;
- (void)onPressRightNavigationButton;
- (void)onPressLeftNavigationButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

