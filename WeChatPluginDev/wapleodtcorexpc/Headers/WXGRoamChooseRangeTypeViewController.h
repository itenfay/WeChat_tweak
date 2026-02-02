//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationBar, NSArray, NSMutableArray, NSMutableSet, NSString, UINavigationItem, UITableView;
@protocol WXGRoamChooseRangeTypeViewControllerDelegate;

@interface WXGRoamChooseRangeTypeViewController
{
    long long _enterScene;
    id <WXGRoamChooseRangeTypeViewControllerDelegate> _delegate;
    UITableView *_sheetView;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    NSMutableSet *_selectedSet;
    NSArray *_selectedTags;
    NSMutableArray *_selectedUserIncludes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedUserIncludes; // @synthesize selectedUserIncludes=_selectedUserIncludes;
@property(retain, nonatomic) NSArray *selectedTags; // @synthesize selectedTags=_selectedTags;
@property(retain, nonatomic) NSMutableSet *selectedSet; // @synthesize selectedSet=_selectedSet;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(retain, nonatomic) UITableView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak id <WXGRoamChooseRangeTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(_Bool)arg1;
- (void)onCreate;
- (void)onCancel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelectIncludeUsers;
- (void)onSelectContactTag;
- (void)updateView;
- (void)setupNavBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

