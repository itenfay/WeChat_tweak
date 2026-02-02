//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ScanQRCodeLogicController, WCActionSheetWithScanWXCode;

@interface WAJSEventHandler_showImageOperateSheet
{
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    _Bool _hasScanScreen;
    double _elementTop;
    double _elementLeft;
    double _elementWidth;
    double _elementHeight;
    NSString *_imageUrl;
    double _imageWidth;
    double _imageHeight;
    NSString *_base64DataString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *base64DataString; // @synthesize base64DataString=_base64DataString;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) double elementHeight; // @synthesize elementHeight=_elementHeight;
@property(nonatomic) double elementWidth; // @synthesize elementWidth=_elementWidth;
@property(nonatomic) double elementLeft; // @synthesize elementLeft=_elementLeft;
@property(nonatomic) double elementTop; // @synthesize elementTop=_elementTop;
- (void)addImgFavWithImageData:(id)arg1;
- (void)saveImgWithImageData:(id)arg1;
- (void)sendMsgWithImageData:(id)arg1;
- (void)asyncGetImageData:(id)arg1 AndPerformSelector:(SEL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didShowScanResult;
- (void)onScanEnds;
- (void)PreScanQRCode:(id)arg1;
- (id)tryGetLocalImage:(id)arg1;
- (id)tryGetImageFromBase64Data;
- (id)getImageData;
- (void)tryScanImage;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

