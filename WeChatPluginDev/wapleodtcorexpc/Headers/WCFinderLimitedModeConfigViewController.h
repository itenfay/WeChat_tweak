//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UITableView;

@interface WCFinderLimitedModeConfigViewController
{
    RichTextView *_contentTitleLabel;
    UITableView *_contentTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) RichTextView *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
- (void)limitedContentClickConfirmAsSelectedModelArray:(id)arg1;
- (void)datePickerConfirm:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (id)getTableViewHeader;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onClickChooseCategoryPicker;
- (void)onClickBirthDatePicker;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)willDisappear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

