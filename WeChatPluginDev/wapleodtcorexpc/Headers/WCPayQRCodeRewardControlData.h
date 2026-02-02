//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CgiGetRewardQrcodeResp, CgiRewardPlaceOrderResp, CgiScanRewardQrcodeResp, NSString;

@interface WCPayQRCodeRewardControlData : NSObject
{
    NSString *_scanUrl;
    NSString *_sourceWebViewUrl;
    long long _payChannel;
    long long _setupViewControllerScene;
    long long _payerSelectedAmount;
    CContact *_receiverContact;
    CgiGetRewardQrcodeResp *_getQRCodeResp;
    CgiScanRewardQrcodeResp *_scanRewardQrcodeResp;
    CgiRewardPlaceOrderResp *_placeOrderResp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CgiRewardPlaceOrderResp *placeOrderResp; // @synthesize placeOrderResp=_placeOrderResp;
@property(retain, nonatomic) CgiScanRewardQrcodeResp *scanRewardQrcodeResp; // @synthesize scanRewardQrcodeResp=_scanRewardQrcodeResp;
@property(retain, nonatomic) CgiGetRewardQrcodeResp *getQRCodeResp; // @synthesize getQRCodeResp=_getQRCodeResp;
@property(retain, nonatomic) CContact *receiverContact; // @synthesize receiverContact=_receiverContact;
@property(nonatomic) long long payerSelectedAmount; // @synthesize payerSelectedAmount=_payerSelectedAmount;
@property(nonatomic) long long setupViewControllerScene; // @synthesize setupViewControllerScene=_setupViewControllerScene;
@property(nonatomic) long long payChannel; // @synthesize payChannel=_payChannel;
@property(retain, nonatomic) NSString *sourceWebViewUrl; // @synthesize sourceWebViewUrl=_sourceWebViewUrl;
@property(retain, nonatomic) NSString *scanUrl; // @synthesize scanUrl=_scanUrl;

@end

