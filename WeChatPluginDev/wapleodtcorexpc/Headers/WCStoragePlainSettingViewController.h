//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString;

@interface WCStoragePlainSettingViewController
{
    unsigned long long _maxChatLogSize;
    unsigned long long _maxChatLogDBSize;
    double _startLoadCleanData;
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(nonatomic) double startLoadCleanData; // @synthesize startLoadCleanData=_startLoadCleanData;
@property(nonatomic) unsigned long long maxChatLogDBSize; // @synthesize maxChatLogDBSize=_maxChatLogDBSize;
@property(nonatomic) unsigned long long maxChatLogSize; // @synthesize maxChatLogSize=_maxChatLogSize;
- (void)reportNewTopSession;
- (void)reportSessionData;
- (void)onChatLogDataLoadFinished;
- (void)onManageChatLogClick;
- (void)onManageResourceClick;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

