//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoDetailRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *encryptedVideoId; // @dynamic encryptedVideoId;
@property(retain, nonatomic) MegaVideoBaseRequest *megaBasereq; // @dynamic megaBasereq;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned long long videoId; // @dynamic videoId;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;

@end

