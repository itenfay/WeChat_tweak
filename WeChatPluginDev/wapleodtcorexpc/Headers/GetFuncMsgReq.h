//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BusinessInfo, NSString;

@interface GetFuncMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) BusinessInfo *businessInfo; // @dynamic businessInfo;
@property(retain, nonatomic) NSString *customBuff; // @dynamic customBuff;
@property(retain, nonatomic) NSString *functionMsgId; // @dynamic functionMsgId;
@property(retain, nonatomic) NSString *openId; // @dynamic openId;

@end

