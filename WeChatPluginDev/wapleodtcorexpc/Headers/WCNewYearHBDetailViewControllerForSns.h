//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIWindow, MMWebImageView, NSString, UILabel, UIView, WCMediaItem, WCNewYearHBDetailDataForSns;

@interface WCNewYearHBDetailViewControllerForSns
{
    WCMediaItem *_mediaItem;
    MMUIWindow *_fullScreenWindow;
    UIView *_bgView;
    UIView *_coverFrameView;
    MMWebImageView *_coverImgView;
    double _curProgress;
    UILabel *_moneyLabel;
    UILabel *_tipsLabel;
    MMTableView *m_tableView;
    UIView *m_oHeaderView;
    WCNewYearHBDetailDataForSns *_detailData;
    UILabel *_rmbUnitLabel;
}

- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelDownloadSuccess:(id)arg1 downloadType:(long long)arg2;
- (void)updateWithDetailData:(id)arg1;
- (void)setupSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)GetHeaderView:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)initTableView;
- (_Bool)useTransparentNavibar;
- (void)onClose;
- (void)initNavBar;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

