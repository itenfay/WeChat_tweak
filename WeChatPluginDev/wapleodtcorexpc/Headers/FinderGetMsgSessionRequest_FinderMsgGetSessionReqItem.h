//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderGetMsgSessionRequest_FinderMsgGetSessionReqItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int myAccountType; // @dynamic myAccountType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *toUsername; // @dynamic toUsername;
@property(nonatomic) unsigned int userpageEnterType; // @dynamic userpageEnterType;
@property(nonatomic) unsigned int userpageLastCommentScene; // @dynamic userpageLastCommentScene;

@end

