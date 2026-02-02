//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePaidConnectMicAudienceOperationInfo, MMTableView, NSString;
@protocol MMFinderLivePaidConnectMicAudienceOperationPanelDelegate;

@interface MMFinderLivePaidConnectMicAudienceOperationPanel
{
    id <MMFinderLivePaidConnectMicAudienceOperationPanelDelegate> _delegate;
    MMFinderLivePaidConnectMicAudienceOperationInfo *_info;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLivePaidConnectMicAudienceOperationInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <MMFinderLivePaidConnectMicAudienceOperationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)showConfirmCancelSheet;
- (void)onSelectBid;
- (void)onCancelApply;
- (void)onClose;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getPageSheetContentHeight;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)updateWithInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

