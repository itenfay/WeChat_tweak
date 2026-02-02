//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderMsgSessionInfo, NSString;

@interface FinderGetMsgSessionIdResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int enableAction; // @dynamic enableAction;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) FinderMsgSessionInfo *sessionInfo; // @dynamic sessionInfo;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;

@end

