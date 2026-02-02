//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiUnionTransferBeforeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *receiverEnterpriseName; // @dynamic receiverEnterpriseName;
@property(retain, nonatomic) NSString *receiverWwUsername; // @dynamic receiverWwUsername;
@property(retain, nonatomic) NSString *roomid; // @dynamic roomid;

@end

