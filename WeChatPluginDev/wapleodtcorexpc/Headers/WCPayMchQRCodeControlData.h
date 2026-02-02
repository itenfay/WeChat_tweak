//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CgiGetQrcodeUrlMchResp, CgiGetShortTermQrcodeMchResp, CgiSaveQrcodeMchResp, NSMutableArray, VoiceOperateSwitchMchResponse;

@interface WCPayMchQRCodeControlData : NSObject
{
    int _mchCodeMoneyScene;
    CgiGetQrcodeUrlMchResp *_qrCodeUrlResp;
    CgiSaveQrcodeMchResp *_saveQrCodeResp;
    CgiGetShortTermQrcodeMchResp *_fixedQrCodeResp;
    VoiceOperateSwitchMchResponse *_voiceOperateResp;
    NSMutableArray *_arrFacingReceiveMoneyPayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFacingReceiveMoneyPayer; // @synthesize arrFacingReceiveMoneyPayer=_arrFacingReceiveMoneyPayer;
@property(nonatomic) int mchCodeMoneyScene; // @synthesize mchCodeMoneyScene=_mchCodeMoneyScene;
@property(retain, nonatomic) VoiceOperateSwitchMchResponse *voiceOperateResp; // @synthesize voiceOperateResp=_voiceOperateResp;
@property(retain, nonatomic) CgiGetShortTermQrcodeMchResp *fixedQrCodeResp; // @synthesize fixedQrCodeResp=_fixedQrCodeResp;
@property(retain, nonatomic) CgiSaveQrcodeMchResp *saveQrCodeResp; // @synthesize saveQrCodeResp=_saveQrCodeResp;
@property(retain, nonatomic) CgiGetQrcodeUrlMchResp *qrCodeUrlResp; // @synthesize qrCodeUrlResp=_qrCodeUrlResp;

@end

