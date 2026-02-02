//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenAudioBaseRequest, MMListenMusicBaseRequest, NSData, NSString;

@interface MMListenUserListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest; // @dynamic audioBaseRequest;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest; // @dynamic musicBaseRequest;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) int userListType; // @dynamic userListType;

@end

