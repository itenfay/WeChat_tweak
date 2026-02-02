//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableSet, NSString, UILabel, WCMomentsHistoryGroupViewModel;
@protocol WCMomentsHistoryGroupSelectViewControllerDelegate;

@interface WCMomentsHistoryGroupSelectViewController
{
    id <WCMomentsHistoryGroupSelectViewControllerDelegate> _delegate;
    WCMomentsHistoryGroupViewModel *_historyGroupVM;
    MMTableView *_tableView;
    NSMutableSet *_selectedHistoryGroupContactSet;
    UILabel *_noHistoryGroupTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noHistoryGroupTips; // @synthesize noHistoryGroupTips=_noHistoryGroupTips;
@property(retain, nonatomic) NSMutableSet *selectedHistoryGroupContactSet; // @synthesize selectedHistoryGroupContactSet=_selectedHistoryGroupContactSet;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCMomentsHistoryGroupViewModel *historyGroupVM; // @synthesize historyGroupVM=_historyGroupVM;
@property(nonatomic) __weak id <WCMomentsHistoryGroupSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onPopRoomContactVC;
- (void)openGroupDetailWithGroupContact:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)onSaveBarButtonPress:(id)arg1;
- (void)onDismissBarButtonPress:(id)arg1;
- (void)updateRightBarButtonWithState:(_Bool)arg1;
- (void)updateViewDisplayStateWithHistoryGroupCout:(unsigned long long)arg1;
- (void)updateNoHistoryGroupTipsFrame;
- (void)initNoHistoryGroupTips;
- (void)initTableView;
- (void)initView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

