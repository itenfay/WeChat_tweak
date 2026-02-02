//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, InterceptPopUp, MidasSdkInfo, NSString, WecoinSubscriptionAgreementHalfPage;

@interface PrepareWecoinSubscriptionResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WecoinSubscriptionAgreementHalfPage *agreementHalfPage; // @dynamic agreementHalfPage;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) InterceptPopUp *interceptInfo; // @dynamic interceptInfo;
@property(retain, nonatomic) MidasSdkInfo *sdkInfo; // @dynamic sdkInfo;
@property(retain, nonatomic) NSString *urlParams; // @dynamic urlParams;

@end

