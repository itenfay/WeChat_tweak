//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface WxaRuntimeUpdateNativeVoipRoomStatusReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) unsigned int roomStatus; // @dynamic roomStatus;
@property(nonatomic) unsigned int videoTime; // @dynamic videoTime;
@property(nonatomic) unsigned int voiceTime; // @dynamic voiceTime;

@end

