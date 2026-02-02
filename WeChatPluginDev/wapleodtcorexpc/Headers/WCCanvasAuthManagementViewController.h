//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, WCTableViewManager;

@interface WCCanvasAuthManagementViewController
{
    NSDictionary *_userInfo;
    WCTableViewManager *_tableViewMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewManager *tableViewMgr; // @synthesize tableViewMgr=_tableViewMgr;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)reportUserAction:(id)arg1 name:(id)arg2;
- (void)opAutoFillData:(id)arg1;
- (void)opLocationPermission:(id)arg1;
- (id)genSwitchCellForSel:(SEL)arg1 title:(id)arg2 desc:(id)arg3 on:(_Bool)arg4;
- (void)updateTableCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

