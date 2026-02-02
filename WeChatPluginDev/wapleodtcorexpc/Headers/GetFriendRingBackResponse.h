//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetFriendRingBackRespFriendRingBackInfo, GetFriendRingBackRespGlobalRingBackInfo;

@interface GetFriendRingBackResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GetFriendRingBackRespFriendRingBackInfo *friendRingBackInfo; // @dynamic friendRingBackInfo;
@property(retain, nonatomic) GetFriendRingBackRespGlobalRingBackInfo *globalRingBackInfo; // @dynamic globalRingBackInfo;
@property(nonatomic) _Bool isEnableCallerGetRecipientRecentStatus; // @dynamic isEnableCallerGetRecipientRecentStatus;

@end

