//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, MMUIActivityIndicatorView, NSString, UIColor;

@interface MMAcceptAgreementBaseViewController
{
    MMUIActivityIndicatorView *m_buttonLoadingView;
    MMTableViewInfo *_m_tableViewInfo;
    MMTableView *_m_tableView;
    MMAcceptAgreementCommonHeadView *_m_commonHeadView;
    UIColor *_m_navigationBarColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *m_navigationBarColor; // @synthesize m_navigationBarColor=_m_navigationBarColor;
@property(retain, nonatomic) MMAcceptAgreementCommonHeadView *m_commonHeadView; // @synthesize m_commonHeadView=_m_commonHeadView;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView=_m_tableView;
@property(retain, nonatomic) MMTableViewInfo *m_tableViewInfo; // @synthesize m_tableViewInfo=_m_tableViewInfo;
- (id)navigationBarBackgroundColor;
- (void)reloadFootViewWithTableContentHeight:(double)arg1 operateButton:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)buttonStopLoading:(id)arg1 buttonTitle:(id)arg2;
- (void)buttonStartLoading:(id)arg1;
- (id)genWeakActionButton;
- (id)genActionButton;
- (void)reloadTableData;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initTableView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

