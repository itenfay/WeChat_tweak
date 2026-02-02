//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLivePersonalMsgSessionInfo, NSString;

@interface FinderLiveGetPersonalMsgSessionInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *selfEncryptedUsername; // @dynamic selfEncryptedUsername;
@property(retain, nonatomic) FinderLivePersonalMsgSessionInfo *sessionInfo; // @dynamic sessionInfo;

@end

