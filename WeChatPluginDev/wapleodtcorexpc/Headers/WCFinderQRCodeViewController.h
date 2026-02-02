//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderQRCodeResponse, MMWebImageView, NSString, UIButton, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderQCCodeNameCardViewModel;

@interface WCFinderQRCodeViewController
{
    UIView *_cardView;
    MMWebImageView *_avatar;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    WCFinderAuthInfoIconView *_icon;
    UIImageView *_qrcodeView;
    UILabel *_tipsLabel;
    UIButton *_saveQRCodeButton;
    WCFinderQCCodeNameCardViewModel *_viewModel;
    FinderQRCodeResponse *_qrcodeResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderQRCodeResponse *qrcodeResponse; // @synthesize qrcodeResponse=_qrcodeResponse;
@property(retain, nonatomic) WCFinderQCCodeNameCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *saveQRCodeButton; // @synthesize saveQRCodeButton=_saveQRCodeButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *qrcodeView; // @synthesize qrcodeView=_qrcodeView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
- (void)registerYReportSdk;
- (void)qrcodeCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qrcodeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)didTapSaveQRCodeButton;
- (void)layoutView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

