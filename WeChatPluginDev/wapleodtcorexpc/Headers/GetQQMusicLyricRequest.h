//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, SKBuiltinBuffer_t;

@interface GetQQMusicLyricRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int isOutsideGfw; // @dynamic isOutsideGfw;
@property(nonatomic) unsigned int shakeMusicGlobalSwitch; // @dynamic shakeMusicGlobalSwitch;
@property(nonatomic) unsigned int songId; // @dynamic songId;
@property(retain, nonatomic) SKBuiltinBuffer_t *url; // @dynamic url;

@end

