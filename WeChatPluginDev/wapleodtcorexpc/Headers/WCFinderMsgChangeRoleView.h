//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIButton, UITableView, UIView, WCFinderMsgChangeRoleViewItem;

@interface WCFinderMsgChangeRoleView
{
    CDUnknownBlockType _changeSuccessfulBlock;
    UITableView *_tableView;
    NSArray *_cellViewModel;
    UIView *_roleContainerView;
    WCFinderMsgChangeRoleViewItem *_selectedItem;
    UIButton *_changeButton;
    long long _currentSelectRoleType;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentSelectRoleType; // @synthesize currentSelectRoleType=_currentSelectRoleType;
@property(retain, nonatomic) UIButton *changeButton; // @synthesize changeButton=_changeButton;
@property(retain, nonatomic) WCFinderMsgChangeRoleViewItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) UIView *roleContainerView; // @synthesize roleContainerView=_roleContainerView;
@property(retain, nonatomic) NSArray *cellViewModel; // @synthesize cellViewModel=_cellViewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType changeSuccessfulBlock; // @synthesize changeSuccessfulBlock=_changeSuccessfulBlock;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)changeRoleAction;
- (void)reloadData;
- (struct UIEdgeInsets)contentInset;
- (id)loadContentView;
- (id)initWithMsgRoleType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

