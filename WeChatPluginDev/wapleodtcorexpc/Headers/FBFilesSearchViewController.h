//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UINavigationController;
@protocol FBFilesSearchViewControllerDelegate;

@interface FBFilesSearchViewController
{
    id <FBFilesSearchViewControllerDelegate> _delegate;
    unsigned long long _type;
    MMTableView *_tableView;
    UINavigationController *_originalNav;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *originalNav; // @synthesize originalNav=_originalNav;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <FBFilesSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFileBrowseCellTouchIndexPath:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadTableView;
- (void)heroDidEndTransition;
- (void)addLeftEdgeGestureState;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(_Bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithVCType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

