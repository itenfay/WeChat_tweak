//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, UILabel;

@interface MMShowHelpViewController
{
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_userName;
    UILabel *m_labelProduct;
    _Bool m_bFullVersion;
    _Bool m_clearLocalInfo;
}

- (void).cxx_destruct;
- (void)onBack;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateProduct;
- (id)getHeaderView;
- (void)reloadTableData;
- (void)onExitApp;
- (void)showMemStat;
- (void)clearInitMark;
- (void)onShowRecoverAPNSToken;
- (void)onShowClearInitMark;
- (void)showRecoverView;
- (void)showUploadStackView;
- (void)showUploadLogView;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

@end

