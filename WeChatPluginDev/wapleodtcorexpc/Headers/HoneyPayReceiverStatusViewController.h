//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QryHoneyUserDetailResp, UIView, WCPayAgreementView, WCPayNoticeItemView;
@protocol HoneyPayReceiverStatusViewControllerDelegate;

@interface HoneyPayReceiverStatusViewController
{
    id <HoneyPayReceiverStatusViewControllerDelegate> _delegate;
    QryHoneyUserDetailResp *_detail;
    UIView *_introInfosView;
    WCPayAgreementView *_agreementView;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) WCPayAgreementView *agreementView; // @synthesize agreementView=_agreementView;
@property(retain, nonatomic) UIView *introInfosView; // @synthesize introInfosView=_introInfosView;
@property(retain, nonatomic) QryHoneyUserDetailResp *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <HoneyPayReceiverStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)done;
- (id)agreementWording;
- (id)detailCellContentWithInfos:(id)arg1 width:(double)arg2;
- (id)statusViewHeader:(double)arg1 icon:(id)arg2 status:(id)arg3 attention:(id)arg4;
- (id)unbindHeaderView;
- (id)expiredHeaderView;
- (id)inuseHeaderView;
- (id)createdHeaderView;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (_Bool)useBlackStatusbar;
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

