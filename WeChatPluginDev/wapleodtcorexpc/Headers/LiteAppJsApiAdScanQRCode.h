//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiAdScanQRCode
{
    NSString *_qrUrl;
    NSString *_qrExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *qrUrl; // @synthesize qrUrl=_qrUrl;
- (void)onUpdateQrCode:(id)arg1 componentId:(id)arg2 snsId:(id)arg3;
- (void)scanQRCode:(id)arg1 qrExtInfo:(id)arg2;
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

@end

