//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIButton;
@protocol WCPayTenpayImportCardInfoViewControllerDelegate;

@interface WCPayTenpayImportCardInfoViewController
{
    _Bool m_bReadAgreement;
    _Bool m_bSubscribeApp;
    UIButton *m_footerButton;
    NSMutableArray *m_arrayInfoGroup;
    id <WCPayTenpayImportCardInfoViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initFooterView;
- (void)onReadAgreement:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)reloadTableView;
- (void)viewDidLoad;
- (void)initInfoTemplate;
- (id)getHeaderView;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

