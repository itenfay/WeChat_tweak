//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, WCPayNoticeItemView;
@protocol WCPayQRCodeRewardPayerDetailViewControllerDelegate;

@interface WCPayQRCodeRewardPayerDetailViewController
{
    id <WCPayQRCodeRewardPayerDetailViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayerDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editMoneyBtnClick;
- (void)amountBtnClick:(id)arg1;
- (void)leftBarButtonClick;
- (void)setupTableFooterView;
- (void)setupTableHeaderView;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (id)navigationBarBackgroundColor;
- (void)dealloc;

@end

