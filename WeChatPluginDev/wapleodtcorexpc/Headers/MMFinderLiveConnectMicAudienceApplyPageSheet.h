//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, UIView;
@protocol MMFinderLiveConnectMicAudienceApplyPageSheetDelegate;

@interface MMFinderLiveConnectMicAudienceApplyPageSheet
{
    id <MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> _delegate;
    UITableView *_tableView;
    UIView *_separatorBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initializeComponentsWithAutoConnect:(_Bool)arg1 isInPk:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCameraSettingsTapped;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)layoutSubviews;
- (void)cancelAnimated:(_Bool)arg1;
- (id)initWithAutoConnect:(_Bool)arg1 isInPk:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

