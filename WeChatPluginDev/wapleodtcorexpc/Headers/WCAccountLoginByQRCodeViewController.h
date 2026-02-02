//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSMutableData, NSString, NSURLConnection, UIButton, UIImage, UIImageView, UILabel, UIView, WCButtonListView;
@protocol WCAccountLoginByQRCodeViewControllerDelegate;

@interface WCAccountLoginByQRCodeViewController
{
    UIView *_scanQRCodeView;
    UIView *_qrCodeFrameView;
    UIImageView *_qrCodeImgView;
    MMUIActivityIndicatorView *_loadingView;
    UIView *_qrCodeScannedView;
    UIImageView *_headImgView;
    UIImage *_headImg;
    UILabel *_tipsLabel;
    UILabel *_descriptionLabel;
    UILabel *_nickNameLabel;
    UIButton *_cancelLogIn;
    UIButton *_refreshBtn;
    NSURLConnection *_downloadConnection;
    _Bool _isDownloading;
    NSMutableData *_headImgData;
    WCButtonListView *_bottomWatchLiveButtonView;
    id <WCAccountLoginByQRCodeViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)viewDidTransitionToNewSize;
- (void)setDelegate:(id)arg1;
- (void)updateTipsLabelY;
- (void)makeViewCenterInIpad;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)startDownloadHeadImgWithURL:(id)arg1;
- (void)onRefreshBtnClicked;
- (void)onCancel;
- (void)createDescriptionView;
- (void)createTipsView;
- (void)createLoadingView;
- (void)createQRCodeView;
- (void)createQRCodeFrame;
- (void)createNickNameLabel;
- (void)createHeadImgView;
- (void)createQRCodeScannedView;
- (void)createScanQRCodeView;
- (void)removeRefreshBtn;
- (void)refreshQCodeView;
- (void)showQRCodeExpiredView;
- (void)showQRCodeFailedView;
- (void)showFailedView;
- (void)showLoginingViewWithNickName:(id)arg1 headImgURL:(id)arg2;
- (void)showQRCodeScanView;
- (void)showUserInfoViewWithHeadImgURL:(id)arg1 nickName:(id)arg2;
- (void)onGetQRCodeImg:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

