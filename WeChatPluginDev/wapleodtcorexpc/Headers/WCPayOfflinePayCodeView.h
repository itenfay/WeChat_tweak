//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, NSString, QBarCodeView, UIView;
@protocol WCPayOfflinePayCodeViewDelegate;

@interface WCPayOfflinePayCodeView
{
    double _secondsToRefresh;
    _Bool _inAnimation;
    _Bool _enable;
    int _payCodeStyle;
    NSString *_barCodeString;
    NSString *_qrCodeString;
    id <WCPayOfflinePayCodeViewDelegate> _delegate;
    QBarCodeView *_imageBarView;
    MMUILabel *_barCodeLabel;
    UIView *_barCodeBackGroundView;
    MMUILabel *_tipsLabel;
    MMUIView *_noticeContentView;
    MMUIView *_noticePreConfirmView;
    QBarCodeView *_imageQRView;
    UIView *_qRCodeBackGroundView;
    UIView *_maskView;
}

+ (double)height;
+ (double)barCodeWidth;
+ (double)qrCodeWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *qRCodeBackGroundView; // @synthesize qRCodeBackGroundView=_qRCodeBackGroundView;
@property(retain, nonatomic) QBarCodeView *imageQRView; // @synthesize imageQRView=_imageQRView;
@property(retain, nonatomic) MMUIView *noticePreConfirmView; // @synthesize noticePreConfirmView=_noticePreConfirmView;
@property(retain, nonatomic) MMUIView *noticeContentView; // @synthesize noticeContentView=_noticeContentView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *barCodeBackGroundView; // @synthesize barCodeBackGroundView=_barCodeBackGroundView;
@property(retain, nonatomic) MMUILabel *barCodeLabel; // @synthesize barCodeLabel=_barCodeLabel;
@property(retain, nonatomic) QBarCodeView *imageBarView; // @synthesize imageBarView=_imageBarView;
@property(nonatomic) __weak id <WCPayOfflinePayCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *qrCodeString; // @synthesize qrCodeString=_qrCodeString;
@property(copy, nonatomic) NSString *barCodeString; // @synthesize barCodeString=_barCodeString;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) int payCodeStyle; // @synthesize payCodeStyle=_payCodeStyle;
- (void)showBarCodeNoticeViewWhenUserTakeScreenshot;
- (_Bool)isBarcodeViewFullScreen;
- (void)removePreConfirmTipsViewIfNeed;
- (void)preconfirmTipsViewBtnPress;
- (void)genNoticePreConfirmView;
- (void)barcodeAnimationEnd;
- (void)barcodeAnimationBegin;
- (void)exitFullScreenWithView:(id)arg1 animation:(_Bool)arg2;
- (void)codeViewTapped:(id)arg1;
- (void)exitFullScreenIfNeedAnimation:(_Bool)arg1;
- (void)updateCodeImage;
- (void)updateCodeImageWithPayCodeStyle:(int)arg1;
- (void)updateAutoRefreshCount;
- (void)cancelAutoRefreshCounting;
- (void)startAutoRefreshCountingAfterSeconds:(unsigned long long)arg1;
- (void)startAutoRefreshCounting;
- (void)resetViews;
- (void)dealloc;
- (void)setAlpha:(double)arg1;
- (void)adjustViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

