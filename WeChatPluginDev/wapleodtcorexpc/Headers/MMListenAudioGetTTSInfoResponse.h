//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface MMListenAudioGetTTSInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *fullPlayUrl; // @dynamic fullPlayUrl;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) unsigned int playUrlExpireTime; // @dynamic playUrlExpireTime;
@property(retain, nonatomic) NSMutableArray *sentences; // @dynamic sentences;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int ttsStatus; // @dynamic ttsStatus;

@end

