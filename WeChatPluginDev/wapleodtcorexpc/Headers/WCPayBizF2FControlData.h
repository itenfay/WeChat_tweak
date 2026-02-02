//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BusiF2FActQryResp, BusiF2FPayOkResp, BusiF2FPlaceOrderReq, BusiF2FPlaceOrderResp, BusiF2FSucPageResp, CgiF2FDynamicCodeResp, NSString, WCPayTranferGetUserNameResponse;

@interface WCPayBizF2FControlData : NSObject
{
    unsigned int _busiType;
    unsigned int _get_pay_wifi;
    unsigned int _mch_time;
    unsigned int _qrcode_level;
    unsigned int _payAmountInCent;
    NSString *_upperWording;
    NSString *_mchName;
    NSString *_mchPhoto;
    NSString *_rcvr_ticket;
    NSString *_mch_type;
    NSString *_receiver_openid;
    NSString *_receiverDisplayName;
    NSString *_receiverHeadImageUrl;
    NSString *_payerComment;
    BusiF2FPlaceOrderResp *_placeOrderResp;
    BusiF2FPayOkResp *_payOkResp;
    BusiF2FActQryResp *_actQryResp;
    WCPayTranferGetUserNameResponse *_transferScanQrCodeResp;
    BusiF2FPlaceOrderReq *_m_placeOrderReq;
    BusiF2FSucPageResp *_m_bizSucPageResp;
    CgiF2FDynamicCodeResp *_m_f2fDynamicCodeResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CgiF2FDynamicCodeResp *m_f2fDynamicCodeResp; // @synthesize m_f2fDynamicCodeResp=_m_f2fDynamicCodeResp;
@property(retain, nonatomic) BusiF2FSucPageResp *m_bizSucPageResp; // @synthesize m_bizSucPageResp=_m_bizSucPageResp;
@property(retain, nonatomic) BusiF2FPlaceOrderReq *m_placeOrderReq; // @synthesize m_placeOrderReq=_m_placeOrderReq;
@property(retain, nonatomic) WCPayTranferGetUserNameResponse *transferScanQrCodeResp; // @synthesize transferScanQrCodeResp=_transferScanQrCodeResp;
@property(retain, nonatomic) BusiF2FActQryResp *actQryResp; // @synthesize actQryResp=_actQryResp;
@property(retain, nonatomic) BusiF2FPayOkResp *payOkResp; // @synthesize payOkResp=_payOkResp;
@property(retain, nonatomic) BusiF2FPlaceOrderResp *placeOrderResp; // @synthesize placeOrderResp=_placeOrderResp;
@property(retain, nonatomic) NSString *payerComment; // @synthesize payerComment=_payerComment;
@property(nonatomic) unsigned int payAmountInCent; // @synthesize payAmountInCent=_payAmountInCent;
@property(retain, nonatomic) NSString *receiverHeadImageUrl; // @synthesize receiverHeadImageUrl=_receiverHeadImageUrl;
@property(retain, nonatomic) NSString *receiverDisplayName; // @synthesize receiverDisplayName=_receiverDisplayName;
@property(nonatomic) unsigned int qrcode_level; // @synthesize qrcode_level=_qrcode_level;
@property(retain, nonatomic) NSString *receiver_openid; // @synthesize receiver_openid=_receiver_openid;
@property(nonatomic) unsigned int mch_time; // @synthesize mch_time=_mch_time;
@property(retain, nonatomic) NSString *mch_type; // @synthesize mch_type=_mch_type;
@property(nonatomic) unsigned int get_pay_wifi; // @synthesize get_pay_wifi=_get_pay_wifi;
@property(retain, nonatomic) NSString *rcvr_ticket; // @synthesize rcvr_ticket=_rcvr_ticket;
@property(retain, nonatomic) NSString *mchPhoto; // @synthesize mchPhoto=_mchPhoto;
@property(retain, nonatomic) NSString *mchName; // @synthesize mchName=_mchName;
@property(retain, nonatomic) NSString *upperWording; // @synthesize upperWording=_upperWording;
@property(nonatomic) unsigned int busiType; // @synthesize busiType=_busiType;
- (_Bool)isBusinessF2FReceive;

@end

