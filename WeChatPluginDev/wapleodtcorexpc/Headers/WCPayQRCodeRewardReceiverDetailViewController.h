//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayNoticeItemView, WCPayQRCodeRewardCodeView;
@protocol WCPayQRCodeRewardReceiverDetailViewControllerDelegate;

@interface WCPayQRCodeRewardReceiverDetailViewController
{
    id <WCPayQRCodeRewardReceiverDetailViewControllerDelegate> _delegate;
    WCPayQRCodeRewardCodeView *_codeView;
    WCPayNoticeItemView *_noticeItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayNoticeItemView *noticeItemView; // @synthesize noticeItemView=_noticeItemView;
@property(retain, nonatomic) WCPayQRCodeRewardCodeView *codeView; // @synthesize codeView=_codeView;
@property(nonatomic) __weak id <WCPayQRCodeRewardReceiverDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRewardCodeViewConfirmToRemoveWording;
- (void)onRewardCodeViewConfirmToSetWording:(id)arg1;
- (void)onRewardCodeViewClickBoxButtonWithCodeDisplayMode:(long long)arg1;
- (void)updateViewAfterGetRemoveWordingResult:(_Bool)arg1;
- (void)updateViewAfterGetSetWordingResult:(_Bool)arg1;
- (void)detailBtnClick;
- (id)getImageFromCodeView;
- (void)saveCodeBtnClick;
- (void)confirmSetupBtnClick;
- (void)settingBtnClick;
- (void)leftBarButtonClick;
- (id)getDetailView;
- (void)setupFooterView;
- (void)setupDetailViewContent;
- (void)setupIntrolView;
- (void)refreshNavigationBar;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

