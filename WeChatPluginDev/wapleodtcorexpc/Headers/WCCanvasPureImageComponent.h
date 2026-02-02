//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIImageView, WCCanvasDynamicDataLoader, WXFullScreenGestureRecognizer;

@interface WCCanvasPureImageComponent
{
    WCCanvasDynamicDataLoader *_dataLoader;
    UIImageView *_m_imageView;
    WXFullScreenGestureRecognizer *_gesture;
    NSMutableDictionary *_qrCodeUrlUpdateDic;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *qrCodeUrlUpdateDic; // @synthesize qrCodeUrlUpdateDic=_qrCodeUrlUpdateDic;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)onUpdateQrCode:(id)arg1 componentId:(id)arg2 snsId:(id)arg3;
- (void)checkAndUpdateQrCodeUrl;
- (void)loadImage:(_Bool)arg1;
- (void)doScanQRCode;
- (void)onFullScreenLongPressBegin;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)initGesture;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

