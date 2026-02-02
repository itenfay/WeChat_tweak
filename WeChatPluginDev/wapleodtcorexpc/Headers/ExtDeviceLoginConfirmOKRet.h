//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ExtDeviceLoginConfirmOKRet : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *buttonCancelStr; // @dynamic buttonCancelStr;
@property(retain, nonatomic) NSString *buttonOkStr; // @dynamic buttonOkStr;
@property(nonatomic) unsigned int confirmTimeOut; // @dynamic confirmTimeOut;
@property(retain, nonatomic) NSString *contentStr; // @dynamic contentStr;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) NSString *loginedDevTip; // @dynamic loginedDevTip;
@property(retain, nonatomic) NSString *multiDeviceTipsStr; // @dynamic multiDeviceTipsStr;
@property(nonatomic) unsigned int multiDeviceTipsType; // @dynamic multiDeviceTipsType;
@property(nonatomic) unsigned int reqSessionLimit; // @dynamic reqSessionLimit;
@property(nonatomic) _Bool showPrivacyAgreement; // @dynamic showPrivacyAgreement;
@property(retain, nonatomic) NSString *spamSecondVerifyUrl; // @dynamic spamSecondVerifyUrl;
@property(retain, nonatomic) NSString *titleStr; // @dynamic titleStr;
@property(retain, nonatomic) NSString *usageLink; // @dynamic usageLink;
@property(retain, nonatomic) NSString *warningStr; // @dynamic warningStr;

@end

