//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSIndexPath, NSString;
@protocol WCPaySingleSelectedTableViewControllerDelegate;

@interface WCPaySingleSelectTableViewController
{
    id <WCPaySingleSelectedTableViewControllerDelegate> _delegate;
    NSString *_viewControllerTitle;
    NSArray *_displayData;
    NSIndexPath *_selectedIndexPath;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *displayData; // @synthesize displayData=_displayData;
@property(retain, nonatomic) NSString *viewControllerTitle; // @synthesize viewControllerTitle=_viewControllerTitle;
@property(nonatomic) __weak id <WCPaySingleSelectedTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupContentView;
- (void)onDone;
- (void)OnCancel;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithDelegate:(id)arg1 title:(id)arg2 displayData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

