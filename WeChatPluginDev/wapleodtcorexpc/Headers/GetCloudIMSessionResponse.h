//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetCloudIMSessionResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int lifespan; // @dynamic lifespan;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(retain, nonatomic) NSString *sessionKey; // @dynamic sessionKey;

@end

