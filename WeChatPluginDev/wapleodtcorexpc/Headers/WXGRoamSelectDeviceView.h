//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface WXGRoamSelectDeviceView
{
    double m_cellHeight;
    double m_cellHeightPortable;
    UITableView *_mainTableView;
    UIView *_emptyView;
    UIButton *_addDeviceBtn;
    NSMutableArray *_deviceArr;
    MMLoadingView *_loadingView;
    NSString *_onlineDeviceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *onlineDeviceId; // @synthesize onlineDeviceId=_onlineDeviceId;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableArray *deviceArr; // @synthesize deviceArr=_deviceArr;
@property(retain, nonatomic) UIButton *addDeviceBtn; // @synthesize addDeviceBtn=_addDeviceBtn;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onILinkDeviceRequestFailed;
- (void)onILinkDeviceUpdate:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addDeviceAction;
- (void)initEmptyView;
- (void)setupDetailView;
- (void)pageSheetWillAppear;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

