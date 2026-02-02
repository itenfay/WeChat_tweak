//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaJSEvent, NSString, QryHoneyPayerDetailResp, UIButton, UISwitch, WCPayNoticeItemView;
@protocol HoneyPayPayerCardDetailViewControllerDelegate;

@interface HoneyPayPayerCardDetailViewController
{
    KindaJSEvent *_kindaJSEvent;
    unsigned long long _entrance;
    id <HoneyPayPayerCardDetailViewControllerDelegate> _delegate;
    QryHoneyPayerDetailResp *_detail;
    UISwitch *_modifyNotificationSwitch;
    UIButton *_doneButton;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UISwitch *modifyNotificationSwitch; // @synthesize modifyNotificationSwitch=_modifyNotificationSwitch;
@property(retain, nonatomic) QryHoneyPayerDetailResp *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <HoneyPayPayerCardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long entrance; // @synthesize entrance=_entrance;
- (void)selectPayWayView:(id)arg1 didSelectCard:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)GetCurrentWebviewViewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)clickMoreRecordCell:(id)arg1;
- (void)clickRecordCell:(id)arg1;
- (void)modifyPayWay;
- (void)modifyNotification:(id)arg1;
- (void)didClickUnbind;
- (void)onRightBarButtonClick;
- (void)clickDoneButton;
- (id)detailCellContentWithInfos:(id)arg1 cellWidth:(double)arg2;
- (void)makeCanceledDetailCell:(id)arg1;
- (id)canceledDetailCell;
- (void)makeCanceledStatusCell:(id)arg1;
- (id)canceledStatusCell;
- (void)makeExpiredDetailCell:(id)arg1;
- (id)expiredDetailCell;
- (void)makeExpiredStatusCell:(id)arg1;
- (id)expiredCell;
- (void)makeModifyCell:(id)arg1;
- (id)modifyCell;
- (void)makeModifySeparatorCell:(id)arg1;
- (id)modifySeparatorCell;
- (void)makeNoRecordCell:(id)arg1;
- (id)noRecordCell;
- (void)makeFooterCell:(id)arg1;
- (id)footerCell;
- (void)makeMoreRecordCell:(id)arg1;
- (id)moreRecordCell;
- (void)makeRecordCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSeparatorCell:(id)arg1;
- (id)separatorCell;
- (void)makeInuseRecords:(id)arg1;
- (void)makeInuseStatusCell:(id)arg1;
- (id)inuseStatusCell;
- (void)makeCreatedStatusCell:(id)arg1 cellInfo:(id)arg2;
- (id)createdStatusCell;
- (void)makeHeaderCell:(id)arg1 cellInfo:(id)arg2;
- (id)headerCell;
- (void)addDoneButton;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

