//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MMListenMusicBaseRequest, NSData, NSString;

@interface MMListenMusicGetRewardUserListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest; // @dynamic musicBaseRequest;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;

@end

