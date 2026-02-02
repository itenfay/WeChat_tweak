//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, WAPhoneNumberPageSheetViewModel;

@interface WAPNPageSheetListView
{
    MMTableView *_tableView;
}

+ (Class)cellClass;
+ (double)maxTableViewHeight;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)pageSheet;
- (id)sheetInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) WAPhoneNumberPageSheetViewModel *viewDataModel; // @dynamic viewDataModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

