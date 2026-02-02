//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface WCPlayLiveWithoutLoginQRCodeViewController
{
    CDUnknownBlockType _cancelCompletion;
    CDUnknownBlockType _didAppearCompletion;
    CDUnknownBlockType _refreshQrcodeCompletion;
    UIImageView *_qrCodeImgView;
    UILabel *_descriptionLabel;
    MMUIActivityIndicatorView *_loadingView;
    UIButton *_refreshButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *qrCodeImgView; // @synthesize qrCodeImgView=_qrCodeImgView;
@property(copy, nonatomic) CDUnknownBlockType refreshQrcodeCompletion; // @synthesize refreshQrcodeCompletion=_refreshQrcodeCompletion;
@property(copy, nonatomic) CDUnknownBlockType didAppearCompletion; // @synthesize didAppearCompletion=_didAppearCompletion;
@property(copy, nonatomic) CDUnknownBlockType cancelCompletion; // @synthesize cancelCompletion=_cancelCompletion;
- (void)willEnterForeground;
- (void)showRefreshView;
- (void)cleanQrcode;
- (void)stopLoadingView;
- (void)showLoadingView;
- (void)onRefreshBtnClicked:(id)arg1;
- (void)onCancel;
- (void)updateQRCode:(id)arg1;
- (void)layoutUI;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)useTableView;
- (_Bool)useSheetView;
- (void)viewDidLoad;
- (void)dealloc;

@end

