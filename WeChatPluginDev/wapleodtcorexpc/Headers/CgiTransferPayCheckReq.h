//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiTransferPayCheckReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extendStr; // @dynamic extendStr;
@property(nonatomic) unsigned long long fee; // @dynamic fee;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(retain, nonatomic) NSString *transactionId; // @dynamic transactionId;
@property(retain, nonatomic) NSString *transferId; // @dynamic transferId;

@end

