//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiF2FDynamicCodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *getDynamicCodeExtend; // @dynamic getDynamicCodeExtend;
@property(retain, nonatomic) NSString *getDynamicCodeSign; // @dynamic getDynamicCodeSign;
@property(retain, nonatomic) NSString *mchInfoString; // @dynamic mchInfoString;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(retain, nonatomic) NSString *transferQrcodeId; // @dynamic transferQrcodeId;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

