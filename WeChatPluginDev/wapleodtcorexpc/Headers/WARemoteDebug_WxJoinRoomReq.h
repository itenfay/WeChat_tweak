//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WARemoteDebug_BaseReq;

@interface WARemoteDebug_WxJoinRoomReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WARemoteDebug_BaseReq *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *roomId; // @dynamic roomId;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSString *wxpkgInfo; // @dynamic wxpkgInfo;

@end

