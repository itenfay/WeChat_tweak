//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface ModifyPlanReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindSerialNo; // @dynamic bindSerialNo;
@property(retain, nonatomic) NSString *cardTail; // @dynamic cardTail;
@property(nonatomic) unsigned int day; // @dynamic day;
@property(nonatomic) unsigned int usrPlanId; // @dynamic usrPlanId;
@property(retain, nonatomic) NSString *wxpEncPasswd; // @dynamic wxpEncPasswd;

@end

