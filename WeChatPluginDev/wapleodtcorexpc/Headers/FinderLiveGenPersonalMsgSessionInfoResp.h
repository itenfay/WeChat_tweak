//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLivePersonalMsgSessionInfo, NSString;

@interface FinderLiveGenPersonalMsgSessionInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool enableCreateSession; // @dynamic enableCreateSession;
@property(retain, nonatomic) NSString *rejectMsg; // @dynamic rejectMsg;
@property(retain, nonatomic) NSString *selfEncryptedUsername; // @dynamic selfEncryptedUsername;
@property(retain, nonatomic) NSString *selfUsername; // @dynamic selfUsername;
@property(retain, nonatomic) FinderLivePersonalMsgSessionInfo *sessionInfo; // @dynamic sessionInfo;

@end

