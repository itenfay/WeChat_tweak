//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, MMTableView, NSArray, NSString;

@interface TemplateMsgRecvViewController
{
    NSString *_username;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    NSArray *_msgRecvState;
    _Bool _bStateChanged;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onTemplateMsgConnectionChange:(unsigned int)arg1;
- (void)onTemplateMsgRecvStateChangedForUser:(id)arg1 withData:(id)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)onRecvSwitchChanged:(id)arg1;
- (void)showSubView;
- (void)initTableView;
- (void)initEmptyView;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

