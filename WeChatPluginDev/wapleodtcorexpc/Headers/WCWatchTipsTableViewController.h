//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSString, NSTimer;

@interface WCWatchTipsTableViewController
{
    NSArray *_tips;
    NSTimer *_animationTimer;
    MMTableView *_mainTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
- (long long)caculateCellHeightWithTitle:(id)arg1 andSubTitle:(id)arg2 andContent:(id)arg3;
- (void)starPageSwithAnimation:(id)arg1;
- (void)setupWatchFace:(id)arg1 atRow:(long long)arg2;
- (void)setupCell:(id)arg1 withTitle:(id)arg2 andSubTitle:(id)arg3 andContent:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

