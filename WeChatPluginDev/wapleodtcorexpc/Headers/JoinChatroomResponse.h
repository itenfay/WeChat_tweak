//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, JumpInfo, NSString;

@interface JoinChatroomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) JumpInfo *chatroomFullJumpInfo; // @dynamic chatroomFullJumpInfo;
@property(retain, nonatomic) JumpInfo *createAccountJumpInfo; // @dynamic createAccountJumpInfo;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(nonatomic) _Bool needJumpCreateAccount; // @dynamic needJumpCreateAccount;

@end

