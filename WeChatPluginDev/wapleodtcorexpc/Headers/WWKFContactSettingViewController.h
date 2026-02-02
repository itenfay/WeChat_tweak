//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableViewInfo, NSString;
@protocol WWKFContactSettingViewControllerDelegate;

@interface WWKFContactSettingViewController
{
    id <WWKFContactSettingViewControllerDelegate> _delegate;
    MMTableViewInfo *_tableInfo;
    CContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MMTableViewInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
@property(nonatomic) __weak id <WWKFContactSettingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSetAllowReportLocation:(id)arg1 allowReport:(_Bool)arg2 success:(_Bool)arg3;
- (void)onShare;
- (void)onSwitchAllowReportLocation:(id)arg1;
- (void)reloadData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

