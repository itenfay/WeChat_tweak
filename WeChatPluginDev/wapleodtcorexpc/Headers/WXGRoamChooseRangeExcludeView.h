//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView;

@interface WXGRoamChooseRangeExcludeView
{
    long long _enterScene;
    UITableView *_sheetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) long long enterScene; // @synthesize enterScene=_enterScene;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(_Bool)arg1;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getHeaderViewWithWidth:(double)arg1 isTypeHeader:(_Bool)arg2;
- (void)setupView;
- (void)updateNav;
- (void)onComplete;
- (void)pageSheetWillAppear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

