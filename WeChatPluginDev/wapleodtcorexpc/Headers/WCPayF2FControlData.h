//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CgiF2FDynamicCodeResp, WCPayTranferGetUserNameResponse, WCPayTransferPrepayResponseStruct;

@interface WCPayF2FControlData : NSObject
{
    WCPayTranferGetUserNameResponse *_m_transferScanQrCodeResp;
    WCPayTransferPrepayResponseStruct *_m_f2fPlaceOrderResp;
    CgiF2FDynamicCodeResp *_m_f2fDynamicCodeResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CgiF2FDynamicCodeResp *m_f2fDynamicCodeResp; // @synthesize m_f2fDynamicCodeResp=_m_f2fDynamicCodeResp;
@property(retain, nonatomic) WCPayTransferPrepayResponseStruct *m_f2fPlaceOrderResp; // @synthesize m_f2fPlaceOrderResp=_m_f2fPlaceOrderResp;
@property(retain, nonatomic) WCPayTranferGetUserNameResponse *m_transferScanQrCodeResp; // @synthesize m_transferScanQrCodeResp=_m_transferScanQrCodeResp;

@end

