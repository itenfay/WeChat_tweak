//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSMutableArray, NSString, UITableView, UIView;

@interface WXGRoamBackupPackageListViewController
{
    double m_cellHeight;
    _Bool _bNeedScrollToDetailIndex;
    UIView *_backgroundView;
    UITableView *_sheetView;
    NSMutableArray *_cellHeightArr;
    long long _showDetailIndex;
    UIView *_emptyView;
    MMLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool bNeedScrollToDetailIndex; // @synthesize bNeedScrollToDetailIndex=_bNeedScrollToDetailIndex;
@property(nonatomic) long long showDetailIndex; // @synthesize showDetailIndex=_showDetailIndex;
@property(retain, nonatomic) NSMutableArray *cellHeightArr; // @synthesize cellHeightArr=_cellHeightArr;
@property(retain, nonatomic) UITableView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1 models:(id)arg2;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1 packageID:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceStopStart;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)arg1;
- (void)onRoamBackupPackageServiceStartGetAllPackage;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)addBackupPackage;
- (void)addNavigationBarInfo;
- (void)makeEmptyView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

