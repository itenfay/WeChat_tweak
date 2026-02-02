//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface FinderLiveCloseMicIntercomResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *realnameUrl; // @dynamic realnameUrl;
@property(nonatomic) unsigned long long serverMsgId; // @dynamic serverMsgId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

