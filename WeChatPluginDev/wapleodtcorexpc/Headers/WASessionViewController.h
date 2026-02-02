//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableSet, NSString, WAContactGetter;

@interface WASessionViewController
{
    MMTableView *_tableView;
    NSMutableSet *_setCheckUpdateUserName;
    WAContactGetter *_contactGetter;
    NSString *_sceneID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getWeappContactForUsername:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkUpdateContactFromIndex:(unsigned int)arg1;
- (void)confirmReceiveMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmBlockMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)switchSessionNotifyWithIndexPath:(id)arg1;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)onClickRightBarBtn:(id)arg1;
- (void)onWASessionsChanged;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned int)getMsgSearchBusinessType;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getRightBarButton;
- (void)initRightBarButton;
- (void)initTableView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

