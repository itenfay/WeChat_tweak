//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MMTableView, NSMutableArray, NSString;

@interface ShareTo3rdAppSettingViewController
{
    MMTableView *m_tableView;
    NSMutableArray *_arrSortedAppinfo;
    _Bool _bHasEdit;
    CMessageWrap *m_oMessageWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_oMessageWrap; // @synthesize m_oMessageWrap;
- (void)onSwitchChange:(_Bool)arg1 withAppInfo:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (void)OnCancelModalView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

