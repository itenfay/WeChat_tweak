//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUILabel, NSString, WWKFContactOpLogic;

@interface WWKFSessionViewController
{
    MMUILabel *_emptyTipsLabel;
    MMTableView *_tableView;
    WWKFContactOpLogic *_contactOpLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKFContactOpLogic *contactOpLogic; // @synthesize contactOpLogic=_contactOpLogic;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUILabel *emptyTipsLabel; // @synthesize emptyTipsLabel=_emptyTipsLabel;
- (void)registerYReportSdk;
- (void)reportCellLeftSlideAction:(long long)arg1 cellData:(id)arg2;
- (void)onMenuItemsAppearInSessionCellData:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1 sessionCellData:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onWWKFSessionsChanged;
- (void)unbindWWKFContactOnIndexPath:(id)arg1;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned int)getMsgSearchBusinessType;
- (void)updateEmptyTipsLabelState;
- (void)setupEmptyTipsLabel;
- (void)setupMainTableView;
- (id)init;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

