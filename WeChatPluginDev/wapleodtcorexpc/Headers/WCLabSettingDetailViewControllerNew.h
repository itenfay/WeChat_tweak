//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UISwitch, UITableView, WCLabsAppItem;

@interface WCLabSettingDetailViewControllerNew
{
    WCLabsAppItem *_labItem;
    UITableView *_tableView;
    UISwitch *_labSwitch;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UISwitch *labSwitch; // @synthesize labSwitch=_labSwitch;
- (void)initTableView;
- (id)genFeedbackFromStr;
- (void)onClickVisisWeAppWithLabItem:(id)arg1;
- (void)onClickExposeButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithLabItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

