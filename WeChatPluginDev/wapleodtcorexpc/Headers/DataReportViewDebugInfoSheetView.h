//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UIView;

@interface DataReportViewDebugInfoSheetView
{
    UIView *_debugView;
    MMTableView *_tableView;
    NSMutableArray *_debugViewParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *debugViewParams; // @synthesize debugViewParams=_debugViewParams;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *debugView; // @synthesize debugView=_debugView;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)initDebugInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithDebugView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

