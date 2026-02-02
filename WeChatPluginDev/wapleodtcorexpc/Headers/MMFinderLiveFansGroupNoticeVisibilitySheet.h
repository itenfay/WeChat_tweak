//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupAnchorEditFansNoticeInfo, MMFinderLivePickerView, MMTableView, NSArray, NSString;
@protocol MMFinderLiveFansGroupNoticeVisibilitySheetDelegate;

@interface MMFinderLiveFansGroupNoticeVisibilitySheet
{
    id <MMFinderLiveFansGroupNoticeVisibilitySheetDelegate> _delegate;
    MMTableView *_tableView;
    NSArray *_itemArray;
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo *_info;
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo *_editedInfo;
    MMFinderLivePickerView *_pickerView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLivePickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *editedInfo; // @synthesize editedInfo=_editedInfo;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditFansNoticeInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveFansGroupNoticeVisibilitySheetDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)superfanEnabled;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)pickerView:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (void)pickerViewWillDissmiss:(id)arg1;
- (void)openPickerView;
- (id)levelStringWithLevel:(unsigned int)arg1;
- (void)initData;
- (void)pageSheetWillDisappear;
- (id)getConfirmButton;
- (id)getBackButton;
- (void)initPageSheetConfig;
- (double)getMaxPanelHeight;
- (double)getPanelContentHeight;
- (double)getContentHeight;
- (void)initViews;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

