//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenAudioBaseResponse, MMListenMusicBaseResponse, NSData, NSMutableArray;

@interface MMListenUserListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse; // @dynamic audioBaseResponse;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse; // @dynamic musicBaseResponse;
@property(retain, nonatomic) NSData *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int totalUserCount; // @dynamic totalUserCount;

@end

