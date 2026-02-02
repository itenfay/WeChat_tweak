//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, WAPlateAuthPageSheetViewModel;

@interface WAPlateAuthPageSheetListView
{
    MMTableView *_tableView;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)plateFormatString:(id)arg1;
- (id)pageSheet;
- (id)sheetInfo;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToPlateById:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) WAPlateAuthPageSheetViewModel *viewDataModel; // @dynamic viewDataModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

