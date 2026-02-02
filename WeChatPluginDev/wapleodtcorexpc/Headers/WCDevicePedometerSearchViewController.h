//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableSet, NSString, UILabel, UIView;
@protocol NSObject><IWCDevicePedometerSearchViewControllerExt;

@interface WCDevicePedometerSearchViewController
{
    UIView *m_footerView;
    UILabel *m_linkHelpBlackLabel;
    UILabel *m_linkHelpBluelabel;
    NSMutableSet *m_deivceDidSet;
    NSMutableArray *m_devicesFound;
    MMTableView *_m_tableView;
    id <NSObject><IWCDevicePedometerSearchViewControllerExt> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NSObject><IWCDevicePedometerSearchViewControllerExt> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onBLEHardDeviceSearch:(id)arg1 modContact:(id)arg2 respData:(id)arg3 errorCode:(int)arg4;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeHeaderView:(id)arg1;
- (void)makeSearchingCell:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onCancel;
- (void)showLinkHelp;
- (void)showLinkHelp:(id)arg1;
- (void)reloadTableData;
- (void)updateFooterViewLocate:(id)arg1;
- (void)updateFooterViewSize;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (void)getDevicesInDB;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

