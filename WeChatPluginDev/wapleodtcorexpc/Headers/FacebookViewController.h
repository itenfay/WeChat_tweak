//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, UIButton;
@protocol FacebookViewControllerDelegate;

@interface FacebookViewController
{
    UIButton *m_bindBtn;
    UIButton *m_unBindBtn;
    UIButton *m_doneBtn;
    MMTableViewInfo *m_tableViewInfo;
    id <FacebookViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FacebookViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onUnBindFacebookFinish:(unsigned int)arg1;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)autoDismis;
- (void)onUnbind;
- (void)done;
- (void)onUnBindAccount;
- (void)bind;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateTableCell;
- (void)initFooterView;
- (void)initHeaderView;
- (void)dealloc;
- (void)disMiss;
- (void)updateView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

